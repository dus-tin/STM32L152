#include "gpio.h"
#include "systick.h"

#define LED_PORT	GPIOB
#define LED_PIN1	6
#define LED_PIN2	7
GPIO_BANK bank = B;

int main(void)
{
	gpio_enable_clk(bank);
	SysTick_Init(2000000/1000);
	gpio_set_mode(LED_PORT,LED_PIN1,OUTPUT);
	gpio_set_mode(LED_PORT,LED_PIN2,OUTPUT);
	

	for(;;)
	{
	 gpio_write(LED_PORT,LED_PIN1,true);
	 SysTick_Delay(1000);
	 gpio_write(LED_PORT,LED_PIN1,false);
	 gpio_write(LED_PORT,LED_PIN2,true);
	 SysTick_Delay(1000);
	 gpio_write(LED_PORT,LED_PIN2,false);

	}
	return 0;
}
