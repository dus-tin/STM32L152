#include <stdint.h>

typedef struct
{
	volatile uint32_t CSR;
	volatile uint32_t RVR;
	volatile uint32_t CVR;
	volatile uint32_t CALIB;
}stm_stc_systick;

#define SYSTICK		((stm_stc_systick*)0xe000e010)

#define SYSTICK_CSR_COUNTGFLAG_pos	16U
#define SYSTICK_CSR_COUNTGFLAG_msk	(1U << SYSTICK_CSR_COUNTFLAG_pos)

#define SYSTICK_CSR_CLKSOURCE_pos	2U
#define SYSTICK_CSR_CLKSOURCE_msk	(1U << SYSTICK_CSR_CLKSOURCE_pos)

#define SYSTICK_CSR_TICKINT_pos		1U
#define SYSTICK_CSR_TICKINT_msk		(1U << SYSTICK_CSR_TICKINT_pos)

#define SYSTICK_CSR_ENABLE_pos		0U
#define SYSTICK_CSR_ENABLE_msk		(1U << SYSTICK_CSR_ENABLE_pos)

#define SYSTICK_RVR_RELOAD_pos		0U
#define SYSTICK_RVR_RELOAD_msk		(0xFFFFFFUL << SYSTICK_RVR_RELOAD_pos)

#define SYSTICK_CALIB_NOREF_pos		31U
#define SYSTICK_CALIB_NOREF_msk		(1U << SYSTICK_CALIB_NOREF_pos)

#define SYSTICK_CALIB_SKEW_pos		30U
#define SYSTICK_CALIB_SKEW_msk		(1U << SYSTICK_CALIB_SKEW_pos)

#define SYSTICK_CALIB_TENMS_pos		0U
#define SYSTICK_CALIB_TENMS_msk		(0xFFFFFFUL << SYSTICK_CALIB_TENMS_pos)

void SysTick_Init(uint32_t ticks);
void SysTick_Handler(void);
void SysTick_Delay(uint32_t msTime);
