#include <stdint.h>
#include <stdbool.h>

struct gpio{
	volatile uint32_t MODER;	
	volatile uint32_t OTYPER;	
	volatile uint32_t OSPEEDR;	
	volatile uint32_t PUPDR;	
	volatile uint32_t IDR;
	volatile uint32_t ODR;	
	volatile uint32_t BSRR;	
	volatile uint32_t LCKR;	
	volatile uint32_t AFRL[2];	
	volatile uint32_t BRR;
};


#define GPIOA ((struct gpio*) 0x40020000)
#define GPIOB ((struct gpio*) 0x40020400)
#define GPIOC ((struct gpio*) 0x40020800)
#define GPIOD ((struct gpio*) 0x40020C00)
#define GPIOE ((struct gpio*) 0x40021000)
#define GPIOH ((struct gpio*) 0x40021400)
#define GPIOF ((struct gpio*) 0x40021800)
#define GPIOG ((struct gpio*) 0x40021C00)

typedef enum{
	A,B,C,D,E,H,F,G
}GPIO_BANK;

typedef enum{
	INPUT, OUTPUT, AF, ANALOG
}GPIO_MODE;

typedef enum{
	PUSH_PULL, OPEN_DRAIN
}OUTPUT_TYPE;

typedef enum{
	LOW, MEDIUM, HIGH, VERY_HIGH
}OUTPUT_SPEED;

typedef enum{
	NPUPD, PU, PD, RESERVED
}PUPDR;

void gpio_enable_clk(GPIO_BANK bank);
void gpio_set_mode(struct gpio *gpio, uint8_t pin, uint8_t mode); 
void gpio_set_otype(struct gpio *gpio, uint8_t pin, uint8_t mode);
void gpio_set_ospeed(struct gpio *gpio, uint8_t pin, uint8_t mode);
void gpio_set_pupd(struct gpio *gpio, uint8_t pin, uint8_t mode);
uint8_t gpio_read_input(struct gpio *gpio, uint8_t pin);
uint8_t gpio_read_output(struct gpio *gpio, uint8_t pin);
void gpio_write(struct gpio *gpio, uint8_t pin, bool val);

