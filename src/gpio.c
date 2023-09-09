#include "gpio.h"

struct rcc{
	volatile uint32_t CR;
	volatile uint32_t ICSCR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHBRSTR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t AHBLPENR;
	volatile uint32_t APB2LPENR;
	volatile uint32_t APB1LPENR;
	volatile uint32_t CSR;
};

#define RCC ((struct rcc*) 0x40023800)

void gpio_enable_clk(GPIO_BANK bank){
	RCC->AHBENR |= 1UL << bank;
}

void gpio_set_mode(struct gpio *gpio, uint8_t pin, uint8_t mode){
	gpio->MODER &= ~(3UL << (pin*2)); /* clear current pin value */
	gpio->MODER |= (mode << (pin*2)); /*set pin value */
}

void gpio_set_otype(struct gpio *gpio, uint8_t pin, uint8_t mode){
	gpio->OTYPER &= ~(1UL << pin); /* clear current pin value */
	gpio->OTYPER |= (mode << pin); /* set pin value */
}


void gpio_set_ospeed(struct gpio *gpio, uint8_t pin, uint8_t mode){
	gpio->OSPEEDR &= ~(3UL <<(pin*2)); /* clear current pin value */
	gpio->OSPEEDR |= (mode << (pin*2)); /* set pin value */
}

void gpio_set_pupd(struct gpio *gpio, uint8_t pin, uint8_t mode){
	gpio->PUPDR &= ~(3UL <<(pin*2)); /* clear current pin value */
	gpio->PUPDR |= (mode << (pin*2)); /* set pin value */
}

uint8_t  gpio_read_input(struct gpio *gpio, uint8_t pin){
	uint8_t read_pin = (gpio->IDR) & (1UL<<pin); /* read input */
	return read_pin;
}

uint8_t gpio_read_output(struct gpio *gpio, uint8_t pin){
	uint8_t read_pin = (gpio->ODR) & (1UL<<pin); /* read input */
	return read_pin;
}

void gpio_write(struct gpio *gpio, uint8_t pin, bool val){
	gpio->BSRR = (1UL << pin) << (val ? 0 : 16);	
}


