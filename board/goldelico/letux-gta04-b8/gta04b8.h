// all reuseable pins on GTA04 expansion connector

// GPIO -> GTA04-Pin -> Expander function

#define MUX_EXPANDER_B8() \
MUX_VAL(CP(SYS_CLKOUT1),	(IDIS | PTD | DIS | M4)) /*GPIO_10 / KEYIRQ - TRF-IRQ*/\
MUX_VAL(CP(ETK_CLK_ES2),	(IDIS | PTD | EN  | M4)) /*GPIO_12 / McBSP5-CLKX - Enable 3.3V LDO for display*/\
MUX_VAL(CP(ETK_D0),			(IEN  | PTD | EN  | M1)) /*GPIO_14 / MCSPI3-SIMO -> TRF*/\
MUX_VAL(CP(ETK_D1),			(IEN  | PTD | EN  | M1)) /*GPIO_15 / MCSPI3-SOMI -> TRF*/\
MUX_VAL(CP(ETK_D2),			(IEN  | PTD | EN  | M1)) /*GPIO_16 / MCSPI3-CS -> TRF*/\
MUX_VAL(CP(ETK_D3),			(IEN  | PTD | EN  | M1)) /*GPIO_17 / MCSPI3-CLK -> TRF*/\
MUX_VAL(CP(ETK_D4_ES2),		(IDIS | PTU | EN  | M4)) /*GPIO_18 / McBSP5-DR - drives RS232 EXT line*/\
MUX_VAL(CP(ETK_D5_ES2),		(IDIS | PTD | EN  | M4)) /*GPIO_19 / McBSP5-FSX - TRF79x0 EN/EN2*/\
MUX_VAL(CP(ETK_D6_ES2),		(IDIS | PTD | EN  | M4)) /*GPIO_20 / McBSP5-DX - Enable 5V on VBUS*/\
MUX_VAL(CP(UART2_CTS),		(IEN  | PTU | DIS | M4)) /*GPIO_144 / UART2-CTS - ext Ant */\
MUX_VAL(CP(UART2_RTS),		(IDIS | PTD | DIS | M4)) /*GPIO_145 / UART2-RTS - GPS ON(0)/OFF(1)*/\
MUX_VAL(CP(UART2_TX),		(IDIS | PTU | DIS | M0)) /*GPIO_146 / UART2-TX - GPS_TX */\
MUX_VAL(CP(UART2_RX),		(IEN  | PTU | DIS | M0)) /*GPIO_147 / UART2-RX - GPS_RX */\
MUX_VAL(CP(MCBSP4_CLKX),	(IEN  | PTD | DIS | M0)) /*GPIO_152 / MCBSP4_CLKX*/\
MUX_VAL(CP(MCBSP4_DR),		(IEN  | PTD | DIS | M0)) /*GPIO_153 / MCBSP4_DR*/\
MUX_VAL(CP(MCBSP4_DX),		(IEN  | PTD | DIS | M0)) /*GPIO_154 / MCBSP4_DX*/\
MUX_VAL(CP(MCBSP4_FSX),		(IEN  | PTD | DIS | M0)) /*GPIO_155 / MCBSP4_FSX*/\
MUX_VAL(CP(MCBSP_CLKS),		(IDIS | PTD | DIS | M4)) /*GPIO_160 / PENIRQ*/\
muxname="GTA04B8", peripheral="+b8"

#if 0
MUX_VAL(CP(UART3_CTS_RCTX),	(IDIS | PTD | DIS | M0)) /*GPIO_163 / UART3-CTS*/\
MUX_VAL(CP(UART3_RTS_SD),	(IDIS | PTD | DIS | M0)) /*GPIO_164 / UART3-RTS*/\
MUX_VAL(CP(UART3_RX_IRRX),	(IDIS | PTD | DIS | M0)) /*GPIO_165 / UART3-RX*/\
MUX_VAL(CP(UART3_TX_IRTX),	(IDIS | PTD | DIS | M0)) /*GPIO_166 / UART3-TX*/\

#endif

// FIXME: clean up so that we have the right PinMuxes
#if 0

MUX_VAL(CP(ETK_D0),		(IEN  | PTD | EN  | M1)) /*GPIO_17 -> MCSPI3-CLK -> TRF*/\
MUX_VAL(CP(MMC2_CLK),		(IDIS | PTD | EN  | M4)) /*GPIO_130 -> MCSPI3-CLK -> TRF*/\
MUX_VAL(CP(MMC2_CMD),		(IDIS | PTD | EN  | M4)) /*GPIO_131 -> MCSPI3-SIMO -> TRF*/\
MUX_VAL(CP(MMC2_DAT0),		(IEN  | PTU | EN  | M4)) /*GPIO_132 -> MCSPI3-SOMI -> TRF*/\
MUX_VAL(CP(MCBSP1_DX),		(IDIS | PTD | EN  | M4)) /*GPIO_158 - Display STBY */\
MUX_VAL(CP(MCBSP1_DR),		(IDIS | PTD | EN  | M4)) /*GPIO_159 - McBSP1-DR -> TRF EN2 */\
MUX_VAL(CP(MCBSP1_FSX),		(IDIS | PTD | EN  | M4)) /*GPIO_161 - McBSP1-FSX -> TRF EN */\

MUX_VAL(CP(MMC2_DAT1),		(IEN  | PTU | EN  | M4)) /*GPIO_133 -> UART3-RX (software)*/\
MUX_VAL(CP(MMC2_DAT2),		(IDIS | PTU | EN  | M4)) /*GPIO_134 -> UART3-TX (software)*/\
MUX_VAL(CP(MMC2_DAT3),		(IDIS | PTU | EN  | M1)) /*GPIO_135 -> MCSPI3-CS0*/\
MUX_VAL(CP(MMC2_DAT4),		(IEN  | PTD | EN  | M4)) /*GPIO_136 - AUX */\
MUX_VAL(CP(MMC2_DAT5),		(IEN  | PTU | EN  | M4)) /*GPIO_137 - POWER */\
MUX_VAL(CP(MMC2_DAT6),		(IDIS | PTU | EN  | M4)) /*GPIO_138 - UART3-RTS (software) */\
MUX_VAL(CP(MMC2_DAT7),		(IEN  | PTU | EN  | M4)) /*GPIO_139 - UART3-CTS (software) */\
MUX_VAL(CP(UART2_RX),		(IEN  | PTU | EN  | M4)) /*GPIO_143 - UART2-RX */\
MUX_VAL(CP(UART2_CTS),		(IDIS | PTU | EN  | M4)) /*GPIO_144 - UART2-CTS */\
MUX_VAL(CP(UART2_RTS),		(IDIS | PTU | EN  | M4)) /*GPIO_145 - UART2-RTS */\
MUX_VAL(CP(UART2_TX),		(IEN  | PTU | EN  | M4)) /*GPIO_146 - UART2-TX */\
MUX_VAL(CP(MCBSP1_CLKR),	(IEN  | PTD | EN  | M4)) /*GPIO_156 - KEYIRQ -> TRF IRQ */\
MUX_VAL(CP(MCBSP1_FSR),		(IEN  | PTU | EN  | M4)) /*GPIO_157 - PENIRQ */\
MUX_VAL(CP(MCBSP_CLKS),		(IEN  | PTU | DIS | M0)) /*McBSP_CLKS */\
MUX_VAL(CP(MCBSP1_CLKX),	(IDIS | PTD | EN  | M4)) /*GPIO_162 - McBSP1-CLKX -> UART3 Powerdown */

#endif