#include "systick.h"


void SysTick_Init(uint32_t ticks /*2MHz(cpu clk)*/)
{
	if ((ticks - 1) > 0xffffff) return;
	SYSTICK->CSR = SYSTICK_CSR_ENABLE_msk | SYSTICK_CSR_CLKSOURCE_msk | SYSTICK_CSR_TICKINT_msk;
	SYSTICK->RVR = ticks - 1;
	SYSTICK->CVR = 0;
}

volatile uint32_t msTicks;
void SysTick_Handler(void)
{
	msTicks++;
}

void SysTick_Delay(uint32_t msTime)
{
	uint32_t msTotal = msTicks + msTime;
	while(msTicks < msTotal)
	{
		/*do nothing*/
	}
}


