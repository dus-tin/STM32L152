#include <stdint.h>

typedef struct
{
	uint32_t SR,
	uint32_t DR,
	uint32_t BRR,
	uint32_t CR1,
	uint32_t CR2.
	uint32_t CR3,
	uint32_t GTPR
}stm_stc_usart;


#define USART1		((stm_stc_usart*)0x40013800)
#define USART2		((stm_stc_usart*)0x40004800)
#define USART3		((stm_stc_usart*)0x40004000)

#define USART1_port	A
#define USART1_CK_pin	8U
#define USART1_TX_pin	9U
#define USART1_RX_pin	10U
#define USART1_CTS_pin	11U
#define USART1_RTS_pin	12U

#define USART2_port	A
#define USART2_CK_pin	4U
#define USART2_TX_pin	2U
#define USART2_RX_pin	3U
#define USART2_CTS_pin	0U 
#define USART2_RTS_pin	1U

#define USART3_port	B
#define USART3_CK_pin	12U
#define USART3_TX_pin	10U
#define USART3_RX_pin	11U
#define USART3_CTS_pin	13U
#define USART3_RTS_pin	14U

/*STATUS REGISTER MACROS*/
#define	USART_SR_CTS_pos	9U
#define	USART_SR_CTS_msk	(1U << USART_SR_CTS_pos)

#define USART_SR_LBD_pos	8U
#define USART_SR_LBD_msk	(1U << USART_SR_LBD_pos)

#define USART_SR_TXE_pos	7U
#define USART_SR_TXE_msk	(1U << USART_SR_TXE_pos)

#define USART_SR_TC_pos		6U
#define USART_SR_TC_msk		(1u << USART_SR_TC_pos)

#define USART_SR_RXNE_pos	5U
#define USART_SR_RXNE_msk	(1U << USART_SR_RXNE_pos)

#define USART_SR_IDLE_pos	4U
#define USART_SR_IDLE_msk	(1U << USART_SR_IDLE_pos)

#define USART_SR_ORE_pos	3U
#define USART_SR_ORE_msk	(1U << USART_SR_ORE_pos)

#define USART_SR_NF_pos		2U
#define USART_SR_NF_msk		(1U << USART_SR_NF_pos)

#define USART_SR_FE_pos		1U
#define USART_SR_FE_msk		(1U << USART_SR_FE_msk)

#define USART_SR_PE_pos		0U
#define USART_SR_PE_msk		(1U << USART_SR_PE_msk)

/*DATA REGISTER MACROS*/
#define USART_DR_DR_pos		0U

/*BAUD RATE REGISTER MACROS*/
#define USART_BRR_MANTISSA_pos	4U
#define USART_BRR_FRACTION_pos	0U

/*CONTROL REGISTER 1 MACROS*/
#define USART_CR1_OVER8_pos	15U
#define USART_CR1_OVER8_msk	(1U << USART_CR1_OVER8_pos)

#define USART_CR1_UE_pos	13U
#define USART_CR1_UE_msk	(1U << USART_CR1_UE_pos)

#define USART_CR1_M_pos		12U
#define USART_CR1_M_0		(0U << USART_CR1_M_pos)
#define USART_CR1_M_1		(1U << USART_CR1_M_pos)

#define USART_CR1_WAKE_pos	11U
#define USART_CR1_WAKE_msk	(1U << USART_CR1_WAKE_pos)

#define USART_CR1_PCE_pos	10U
#define USART_CR1_PCE_msk	(1U << USART_CR1_PCE_pos)

#define USART_CR1_PS_pos	9U
#define USART_CR1_PS_EVEN	(0U << USART_CR1_PS_pos)
#define USART_CR1_PS_ODD	(1U << USART_CR1_PS_pos)

#define USART_CR1_PEIE_pos	8U
#define USART_CR1_PEIE_msk	(1U << USART_CR1_PEIE_pos)

#define USART_CR1_TXEIE_pos	7U
#define USART_CR1_TXEIE_msk	(1U << USART_CR1_TXEIE_pos)

#define USART_CR1_TCIE_pos	6U
#define USART_CR1_TCIE_msk	(1U << USART_CR1_TCIE_pos)

#define USART_CR1_RXNEIE_pos	5U
#define USART_CR1_RXNEIE_msk	(1U << USART_CR1_RXNEIE_pos)

#define USART_CR1_IDLEIE_pos	4U
#define USART_CR1_IDLEIE_msk	(1U << USART_CR1_IDLEIE_pos)

#define USART_CR1_TE_pos	3U
#define USART_CR1_TE_msk	(1U << USART_CR1_TE_pos)

#define USART_CR1_RE_pos	2U
#define USART_CR1_RE_msk	(1U << USART_CR1_RE_pos)

#define USART_CR1_RWU_pos	1U
#define USART_CR1_RWU_msk	(1U << USART_CR1_RWU_pos)

#define USART_CR1_SBK_pos	0U
#define USART_CR1_SBK_msk	(1U << USART_CR1_SBK_pos)

/*CONTROL REGISTER 2 MACROS*/
#define USART_CR2_LINEN_pos	14U
#define USART_CR2_LINEN_pos	14U

#define USART_CR2_STOP_pos	12U
#define USART_CR2_STOP_1	(0U << USART_CR2_STOP_pos)
#define USART_CR2_STOP_HALF	(1U << USART_CR2_STOP_pos)
#define USART_CR2_STOP_2	(2U << USART_CR2_STOP_pos)
#define USART_CR2_STOP_1HALF	(3U << USART_CR2_STOP_pos)

#define USART_CR2_CLKEN_pos	11U
#define USART_CR2_CLKEN_msk	(1U << USART_CR2_CLKEN_pos)

#define USART_CR2_CPOL_pos	10U
#define USART_CR2_CPOL_LOW	(0U << USART_CR2_CPOL_pos)
#define USART_CR2_CPOL_HIGH	(1U << USART_CR2_CPOL_pos)

#define USART_CR2_CPHA_pos	9U
#define USART_CR2_CPHA_FIRST	(0U << USART_CR2_CPHA_pos)
#define USART_CR2_CPHA_SECOND	(1U << USART_CR2_CPHA_pos)

#define USART_CR2_LBCL_pos	8U
#define USART_CR2_LBCL_msk	(1U << USART_CR2_LBCL_pos)

#define USART_CR2_LBDIE_pos	6U
#define USART_CR2_LBDIE_msk	(1U << USART_CR2_LBDIE_pos)

#define USART_CR2_LBDL_pos	5U
#define USART_CR2_LBDL_10BIT	(0U << USART_CR2_LBDL_pos)
#define USART_CR2_LBDL_11BIT	(1U << USART_CR2_LBDL_pos)

#define USART_CR2_ADD_pos	0U

/*CONTROL REGISTER 3 MACROS*/
#define USART_CR3_ONEBIT_pos	11U
#define USART_CR3_ONEBIT_msk	(1U << USART_CR3_ONEBIT_pos)

#define USART_CR3_CTSIE_pos	10U
#define USART_CR3_CTSIE_msk	(1U << USART_CR3_CTSIE_pos)

#define USART_CR3_CTSE_pos	9U
#define USART_CR3_CTSE_msk	(1U << USART_CR3_CTSE_pos)

#define USART_CR3_RTSE_pos	8U
#define USART_CR3_RTSE_msk	(1U << USART_CR3_RTSE_pos)

#define USART_CR3_DMAT_pos	7U
#define USART_CR3_DMAT_msk	(1U << USART_CR3_DMAT_pos)

#define USART_CR3_DMAR_pos	6U
#define USART_CR3_DMAR_msk	(1U << USART_CR3_DMAR_pos)

#define USART_CR3_SCEN_pos	5U
#define USART_CR3_SCEN_msk	(1U << USART_CR3_SCEN_pos)

#define USART_CR3_NACK_pos	4U
#define USART_CR3_NACK_msk	(1U << USART_CR3_NACK_pos)

#define USART_CR3_HDSEL_pos	3U
#define USART_CR3_HDSEL_msk	(1U << USART_CR3_HDSEL_pos)

#define USART_CR3_IRLP_pos	2U
#define USART_CR3_IRLP_msk	(1U << USART_CR3_IRLP_pos)

#define USART_CR3_IREN_pos	1U
#define USART_CR3_IREN_msk	(1U << USART_CR3_IREN_pos)

#define USART_CR3_EIE_pos	0U
#define USART_CR3_EIE_msk	(1U << USART_CR3_EIE_pos)

/*GUARD TIME AND PRESCALER REGISTER MACROS*/
#define USART_GTPR_GT_pos	8U
#define USART_GTPR_PSC_pos	0U
