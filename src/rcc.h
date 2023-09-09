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
}

#define RCC ((struct rcc*) 0x40023800)
