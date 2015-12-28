;--------------------------------------------------------
; File Created by SDCC : FreeWare ANSI-C Compiler
; Version 2.6.0 #4309 (Nov  8 2006)
; This file generated Tue Dec 12 14:56:41 2006
;--------------------------------------------------------
	.module main
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _faz_ligacao
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _FL
	.globl _P
	.globl _TF2
	.globl _EXF2
	.globl _RCLK
	.globl _TCLK
	.globl _EXEN2
	.globl _TR2
	.globl _C_T2
	.globl _CP_RL2
	.globl _T2CON_7
	.globl _T2CON_6
	.globl _T2CON_5
	.globl _T2CON_4
	.globl _T2CON_3
	.globl _T2CON_2
	.globl _T2CON_1
	.globl _T2CON_0
	.globl _PT2
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _RD
	.globl _WR
	.globl _T1
	.globl _T0
	.globl _INT1
	.globl _INT0
	.globl _TXD
	.globl _RXD
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _EA
	.globl _ET2
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _T2EX
	.globl _T2
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _B
	.globl _A
	.globl _ACC
	.globl _PSW
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2MOD
	.globl _T2CON
	.globl _IP
	.globl _P3
	.globl _IE
	.globl _P2
	.globl _SBUF
	.globl _SCON
	.globl _P1
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
	.globl _I2CBusy
	.globl _BusFault
	.globl _NoAck
	.globl _Dados
	.globl _Delay
	.globl _SendByte
	.globl _StartI2C
	.globl _StopI2C
	.globl _SendData
	.globl _recebe_ligacao
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (DATA)
_P0	=	0x0080
_SP	=	0x0081
_DPL	=	0x0082
_DPH	=	0x0083
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_P1	=	0x0090
_SCON	=	0x0098
_SBUF	=	0x0099
_P2	=	0x00a0
_IE	=	0x00a8
_P3	=	0x00b0
_IP	=	0x00b8
_T2CON	=	0x00c8
_T2MOD	=	0x00c9
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
_PSW	=	0x00d0
_ACC	=	0x00e0
_A	=	0x00e0
_B	=	0x00f0
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (DATA)
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_T2	=	0x0090
_T2EX	=	0x0091
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_ET2	=	0x00ad
_EA	=	0x00af
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_RXD	=	0x00b0
_TXD	=	0x00b1
_INT0	=	0x00b2
_INT1	=	0x00b3
_T0	=	0x00b4
_T1	=	0x00b5
_WR	=	0x00b6
_RD	=	0x00b7
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_PT2	=	0x00bd
_T2CON_0	=	0x00c8
_T2CON_1	=	0x00c9
_T2CON_2	=	0x00ca
_T2CON_3	=	0x00cb
_T2CON_4	=	0x00cc
_T2CON_5	=	0x00cd
_T2CON_6	=	0x00ce
_T2CON_7	=	0x00cf
_CP_RL2	=	0x00c8
_C_T2	=	0x00c9
_TR2	=	0x00ca
_EXEN2	=	0x00cb
_TCLK	=	0x00cc
_RCLK	=	0x00cd
_EXF2	=	0x00ce
_TF2	=	0x00cf
_P	=	0x00d0
_FL	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_Dados::
	.ds 1
_StartI2C_SlaveAddr_1_1:
	.ds 16
_SendData_Buffer_1_1:
	.ds 16
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area OSEG    (OVR,DATA)
;--------------------------------------------------------
; Stack segment in internal ram 
;--------------------------------------------------------
	.area	SSEG	(DATA)
__start__stack:
	.ds	1

;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
_NoAck::
	.ds 1
_BusFault::
	.ds 1
_I2CBusy::
	.ds 1
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; interrupt vector 
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
	ljmp	_recebe_ligacao
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genXINIT
	.globl __mcs51_genXRAMCLEAR
	.globl __mcs51_genRAMCLEAR
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area CSEG    (CODE)
__sdcc_program_startup:
	lcall	_main
;	return from main will lock up
	sjmp .
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'Delay'
;------------------------------------------------------------
;------------------------------------------------------------
;	i2c.h:21: void Delay( void ) {
;	-----------------------------------------
;	 function Delay
;	-----------------------------------------
_Delay:
	ar2 = 0x02
	ar3 = 0x03
	ar4 = 0x04
	ar5 = 0x05
	ar6 = 0x06
	ar7 = 0x07
	ar0 = 0x00
	ar1 = 0x01
;	i2c.h:32: _endasm ;
;	genInline
	        NOP
	        NOP
	        NOP
	        NOP
	        NOP
	        NOP
;	Peephole 300	removed redundant label 00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'SendByte'
;------------------------------------------------------------
;BitData                   Allocated to registers r2 r3 r4 
;BitCnt                    Allocated to registers r5 r6 
;------------------------------------------------------------
;	i2c.h:41: int SendByte( unsigned int BitData[8] ) {
;	-----------------------------------------
;	 function SendByte
;	-----------------------------------------
_SendByte:
;	genReceive
	mov	r2,dpl
	mov	r3,dph
	mov	r4,b
;	genIfx
;	genIfxJump
	jnb	_NoAck,00127$
	ljmp	00110$
00127$:
;	i2c.h:49: for ( BitCnt = 0; BitCnt < 8; BitCnt++ ) {
;	genAssign
	mov	r5,#0x00
	mov	r6,#0x00
00112$:
;	genCmpLt
;	genCmp
	clr	c
	mov	a,r5
	subb	a,#0x08
	mov	a,r6
	xrl	a,#0x80
	subb	a,#0x80
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00115$
;	Peephole 300	removed redundant label 00128$
;	i2c.h:51: SDAPin = BitData[BitCnt];
;	genLeftShift
;	genLeftShiftLiteral
;	genlshTwo
	mov	ar7,r5
	mov	a,r6
	xch	a,r7
	add	a,acc
	xch	a,r7
	rlc	a
	mov	r0,a
;	genPlus
;	Peephole 236.g	used r7 instead of ar7
	mov	a,r7
;	Peephole 236.a	used r2 instead of ar2
	add	a,r2
	mov	r7,a
;	Peephole 236.g	used r0 instead of ar0
	mov	a,r0
;	Peephole 236.b	used r3 instead of ar3
	addc	a,r3
	mov	r0,a
	mov	ar1,r4
;	genPointerGet
;	genGenPointerGet
	mov	dpl,r7
	mov	dph,r0
	mov	b,r1
	lcall	__gptrget
	mov	r7,a
	inc	dptr
	lcall	__gptrget
;	genCast
	mov	r0,a
;	Peephole 135	removed redundant mov
	orl	a,r7
	add	a,#0xff
	mov	_P0_7,c
;	i2c.h:52: SCLPin = 1; 
;	genAssign
	setb	_P0_6
;	i2c.h:53: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
00101$:
;	genIfx
;	genIfxJump
;	Peephole 108.d	removed ljmp by inverse jump logic
	jnb	_P0_6,00101$
;	Peephole 300	removed redundant label 00129$
;	i2c.h:54: Delay();
;	genCall
	push	ar2
	push	ar3
	push	ar4
	push	ar5
	push	ar6
	lcall	_Delay
	pop	ar6
	pop	ar5
	pop	ar4
	pop	ar3
	pop	ar2
;	i2c.h:55: SCLPin = 0;
;	genAssign
	clr	_P0_6
;	i2c.h:56: Delay();
;	genCall
	push	ar2
	push	ar3
	push	ar4
	push	ar5
	push	ar6
	lcall	_Delay
	pop	ar6
	pop	ar5
	pop	ar4
	pop	ar3
	pop	ar2
;	i2c.h:49: for ( BitCnt = 0; BitCnt < 8; BitCnt++ ) {
;	genPlus
;     genPlusIncr
	inc	r5
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 243	avoided branch to sjmp
	cjne	r5,#0x00,00112$
	inc	r6
;	Peephole 300	removed redundant label 00130$
	sjmp	00112$
00115$:
;	i2c.h:59: SDAPin = 1;
;	genAssign
	setb	_P0_7
;	i2c.h:61: SCLPin = 1;		
;	genAssign
	setb	_P0_6
;	i2c.h:62: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
00104$:
;	genIfx
;	genIfxJump
;	Peephole 108.d	removed ljmp by inverse jump logic
	jnb	_P0_6,00104$
;	Peephole 300	removed redundant label 00131$
;	i2c.h:64: Delay();
;	genCall
	lcall	_Delay
;	genIfx
;	genIfxJump
;	Peephole 108.d	removed ljmp by inverse jump logic
	jnb	_P0_7,00108$
;	Peephole 300	removed redundant label 00132$
;	i2c.h:67: NoAck = 1;
;	genAssign
	setb	_NoAck
00108$:
;	i2c.h:70: SCLPin = 0;
;	genAssign
	clr	_P0_6
;	i2c.h:71: Delay();
;	genCall
	lcall	_Delay
;	i2c.h:73: return 0; // Caso a transmissao tenha ocorrido corretamente
;	genRet
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0000
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
	ret
00110$:
;	i2c.h:76: StopI2C();
;	genCall
	lcall	_StopI2C
;	i2c.h:77: return 1; // Caso a transmissao tenha falhado
;	genRet
;	Peephole 182.b	used 16 bit load of dptr
	mov	dptr,#0x0001
;	Peephole 300	removed redundant label 00116$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'StartI2C'
;------------------------------------------------------------
;SlaveAddr                 Allocated with name '_StartI2C_SlaveAddr_1_1'
;------------------------------------------------------------
;	i2c.h:84: void StartI2C( void ) {
;	-----------------------------------------
;	 function StartI2C
;	-----------------------------------------
_StartI2C:
;	i2c.h:86: unsigned int SlaveAddr[8] = { 0, 1, 0, 0, 1, 0, 0, 0 }; 
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	_StartI2C_SlaveAddr_1_1,#0x00
	mov	(_StartI2C_SlaveAddr_1_1 + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_StartI2C_SlaveAddr_1_1 + 0x0002),#0x01
	mov	((_StartI2C_SlaveAddr_1_1 + 0x0002) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_StartI2C_SlaveAddr_1_1 + 0x0004),#0x00
	mov	((_StartI2C_SlaveAddr_1_1 + 0x0004) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_StartI2C_SlaveAddr_1_1 + 0x0006),#0x00
	mov	((_StartI2C_SlaveAddr_1_1 + 0x0006) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_StartI2C_SlaveAddr_1_1 + 0x0008),#0x01
	mov	((_StartI2C_SlaveAddr_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_StartI2C_SlaveAddr_1_1 + 0x000a),#0x00
	mov	((_StartI2C_SlaveAddr_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_StartI2C_SlaveAddr_1_1 + 0x000c),#0x00
	mov	((_StartI2C_SlaveAddr_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_StartI2C_SlaveAddr_1_1 + 0x000e),#0x00
	mov	((_StartI2C_SlaveAddr_1_1 + 0x000e) + 1),#0x00
;	i2c.h:88: I2CBusy = 1; /* Indica que uma transmissao sera feita */
;	genAssign
	setb	_I2CBusy
;	i2c.h:89: NoAck = 0; /* Apaga as flags de erro */
;	genAssign
	clr	_NoAck
;	i2c.h:90: BusFault = 0; 
;	genAssign
	clr	_BusFault
;	genIfx
;	genIfxJump
;	Peephole 108.d	removed ljmp by inverse jump logic
	jnb	_P0_6,00102$
;	Peephole 300	removed redundant label 00109$
;	genIfx
;	genIfxJump
;	Peephole 108.d	removed ljmp by inverse jump logic
;	i2c.h:94: SDAPin = 0; /* Inicia o I2C Start */
;	genAssign
;	Peephole 250.a	using atomic test and clear
	jbc	_P0_7,00110$
	sjmp	00102$
00110$:
;	i2c.h:95: Delay();
;	genCall
	lcall	_Delay
;	i2c.h:96: SCLPin = 0;
;	genAssign
	clr	_P0_6
;	i2c.h:97: Delay(); /* Termina o I2C Start */
;	genCall
	lcall	_Delay
;	i2c.h:98: SendByte( SlaveAddr ); /* Envia o endereco do Slave */
;	genCall
;	Peephole 182.a	used 16 bit load of DPTR
	mov	dptr,#_StartI2C_SlaveAddr_1_1
	mov	b,#0x40
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 251.b	replaced sjmp to ret with ret
;	Peephole 253.a	replaced lcall/ret with ljmp
	ljmp	_SendByte
00102$:
;	i2c.h:103: BusFault = 1;
;	genAssign
	setb	_BusFault
;	Peephole 300	removed redundant label 00105$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'StopI2C'
;------------------------------------------------------------
;------------------------------------------------------------
;	i2c.h:110: void StopI2C( void ) {
;	-----------------------------------------
;	 function StopI2C
;	-----------------------------------------
_StopI2C:
;	i2c.h:112: SDAPin = 0; /* Prepara o barramento pra receber o Stop */
;	genAssign
	clr	_P0_7
;	i2c.h:113: SCLPin = 1; /* Seta o clock para o Stop  */
;	genAssign
	setb	_P0_6
;	i2c.h:114: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
00101$:
;	genIfx
;	genIfxJump
;	Peephole 108.d	removed ljmp by inverse jump logic
	jnb	_P0_6,00101$
;	Peephole 300	removed redundant label 00108$
;	i2c.h:115: Delay();
;	genCall
	lcall	_Delay
;	i2c.h:116: SDAPin = 1; /* Envia o Stop */
;	genAssign
	setb	_P0_7
;	i2c.h:117: Delay();
;	genCall
	lcall	_Delay
;	i2c.h:118: I2CBusy = 0; /* Reseta o Flag de barramento ocupado*/
;	genAssign
	clr	_I2CBusy
;	Peephole 300	removed redundant label 00104$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'SendData'
;------------------------------------------------------------
;Tom                       Allocated to registers r2 r3 
;Buffer                    Allocated with name '_SendData_Buffer_1_1'
;------------------------------------------------------------
;	i2c.h:125: void SendData ( int Tom ) {
;	-----------------------------------------
;	 function SendData
;	-----------------------------------------
_SendData:
;	genReceive
	mov	r2,dpl
	mov	r3,dph
;	i2c.h:129: StartI2C();
;	genCall
	push	ar2
	push	ar3
	lcall	_StartI2C
	pop	ar3
	pop	ar2
;	i2c.h:134: Buffer[0] = 0;
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	_SendData_Buffer_1_1,#0x00
	mov	(_SendData_Buffer_1_1 + 1),#0x00
;	i2c.h:135: Buffer[1] = 0;
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0002),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0002) + 1),#0x00
;	i2c.h:136: Buffer[2] = 0;
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0004),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0004) + 1),#0x00
;	i2c.h:137: Buffer[3] = 1;
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0006),#0x01
	mov	((_SendData_Buffer_1_1 + 0x0006) + 1),#0x00
;	i2c.h:139: switch( Tom ) {
;	genCmpLt
;	genCmp
	mov	a,r3
;	genIfxJump
	jnb	acc.7,00116$
	ljmp	00111$
00116$:
;	genCmpGt
;	genCmp
	clr	c
	mov	a,#0x09
	subb	a,r2
;	Peephole 159	avoided xrl during execution
	mov	a,#(0x00 ^ 0x80)
	mov	b,r3
	xrl	b,#0x80
	subb	a,b
;	genIfxJump
	jnc	00117$
	ljmp	00111$
00117$:
;	genJumpTab
	mov	a,r2
;	Peephole 254	optimized left shift
	add	a,r2
	add	a,r2
	mov	dptr,#00118$
	jmp	@a+dptr
00118$:
	ljmp	00101$
	ljmp	00102$
	ljmp	00103$
	ljmp	00104$
	ljmp	00105$
	ljmp	00106$
	ljmp	00107$
	ljmp	00108$
	ljmp	00109$
	ljmp	00110$
;	i2c.h:140: case 0: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 0; break;
00101$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
	ljmp	00111$
;	i2c.h:141: case 1: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 1; break;
00102$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
	ljmp	00111$
;	i2c.h:142: case 2: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 1; Buffer[7] = 0; break;
00103$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
	ljmp	00111$
;	i2c.h:143: case 3: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 1; Buffer[7] = 1; break;
00104$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
	ljmp	00111$
;	i2c.h:144: case 4: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 0; Buffer[7] = 0; break;
00105$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
	ljmp	00111$
;	i2c.h:145: case 5: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 0; Buffer[7] = 1; break;
00106$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
;	i2c.h:146: case 6: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 1; Buffer[7] = 0; break;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00111$
00107$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
;	i2c.h:147: case 7: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 1; Buffer[7] = 1; break;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00111$
00108$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
;	i2c.h:148: case 8: Buffer[4] = 1; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 0; break;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00111$
00109$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x01
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
;	i2c.h:149: case 9: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 1; break;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00111$
00110$:
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
;	genPointerSet
;	genNearPointerSet
;	genDataPointerSet
	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
;	i2c.h:150: }
00111$:
;	i2c.h:152: SendByte( Buffer );
;	genCall
;	Peephole 182.a	used 16 bit load of DPTR
	mov	dptr,#_SendData_Buffer_1_1
	mov	b,#0x40
	lcall	_SendByte
;	i2c.h:154: StopI2C();
;	genCall
;	Peephole 253.b	replaced lcall/ret with ljmp
	ljmp	_StopI2C
;
;------------------------------------------------------------
;Allocation info for local variables in function 'recebe_ligacao'
;------------------------------------------------------------
;valor_lido                Allocated to registers r5 
;reading                   Allocated to registers r2 
;equipamento               Allocated to registers r3 
;liga                      Allocated to registers r4 
;------------------------------------------------------------
;	main.c:62: void recebe_ligacao() __interrupt IE0_VECTOR {
;	-----------------------------------------
;	 function recebe_ligacao
;	-----------------------------------------
_recebe_ligacao:
	push	acc
	push	b
	push	dpl
	push	dph
	push	ar2
	push	ar3
	push	ar4
	push	ar5
	push	ar6
	push	psw
	mov	psw,#0x00
;	main.c:64: char reading = 1;
;	genAssign
	mov	r2,#0x01
;	main.c:65: char equipamento = -1;
;	genAssign
	mov	r3,#0xFF
;	main.c:66: char liga = 0;
;	genAssign
	mov	r4,#0x00
;	main.c:67: while(reading) {
00114$:
;	genIfx
	mov	a,r2
;	genIfxJump
;	Peephole 108.c	removed ljmp by inverse jump logic
	jz	00116$
;	Peephole 300	removed redundant label 00140$
;	main.c:68: while(P1_4 != 1); /* TODO: pegar porta certa do decodificador */
00101$:
;	genIfx
;	genIfxJump
;	Peephole 108.d	removed ljmp by inverse jump logic
	jnb	_P1_4,00101$
;	Peephole 300	removed redundant label 00141$
;	main.c:69: valor_lido = 1 * P1_0 + 2 * P1_1 + 4 * P1_2 + 8 * P1_3;
;	genAssign
	clr	a
	mov	c,_P1_0
	rlc	a
	mov	r5,a
;	genAssign
	clr	a
	mov	c,_P1_1
	rlc	a
;	genLeftShift
;	genLeftShiftLiteral
;	genlshOne
;	Peephole 105	removed redundant mov
;	genPlus
;	Peephole 204	removed redundant mov
	add	a,acc
	mov	r6,a
;	Peephole 177.b	removed redundant mov
;	Peephole 236.a	used r5 instead of ar5
	add	a,r5
	mov	r5,a
;	genAssign
	clr	a
	mov	c,_P1_2
	rlc	a
;	genLeftShift
;	genLeftShiftLiteral
;	genlshOne
	mov	r6,a
;	Peephole 105	removed redundant mov
	add	a,acc
	add	a,acc
;	genPlus
	mov	r6,a
;	Peephole 177.b	removed redundant mov
;	Peephole 236.a	used r5 instead of ar5
	add	a,r5
	mov	r5,a
;	genAssign
	clr	a
	mov	c,_P1_3
	rlc	a
;	genLeftShift
;	genLeftShiftLiteral
;	genlshOne
	mov	r6,a
;	Peephole 105	removed redundant mov
	swap	a
	rr	a
	anl	a,#0xf8
;	genPlus
	mov	r6,a
;	Peephole 177.b	removed redundant mov
;	Peephole 236.a	used r5 instead of ar5
	add	a,r5
;	main.c:71: if (valor_lido < 9 && valor_lido > 0){
;	genCmpLt
;	genCmp
	mov	r5,a
	clr	c
;	Peephole 106	removed redundant mov
	xrl	a,#0x80
	subb	a,#0x89
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00111$
;	Peephole 300	removed redundant label 00142$
;	genCmpGt
;	genCmp
	clr	c
;	Peephole 159	avoided xrl during execution
	mov	a,#(0x00 ^ 0x80)
	mov	b,r5
	xrl	b,#0x80
	subb	a,b
;	genIfxJump
;	Peephole 108.a	removed ljmp by inverse jump logic
	jnc	00111$
;	Peephole 300	removed redundant label 00143$
;	main.c:72: equipamento = valor_lido;
;	genAssign
	mov	ar3,r5
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00114$
00111$:
;	main.c:75: if (equipamento != -1){
;	genCmpEq
;	gencjneshort
	cjne	r3,#0xFF,00144$
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00114$
00144$:
;	main.c:77: if (valor_lido == 11){
;	genCmpEq
;	gencjneshort
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 198.b	optimized misc jump sequence
	cjne	r5,#0x0B,00105$
;	Peephole 200.b	removed redundant sjmp
;	Peephole 300	removed redundant label 00145$
;	Peephole 300	removed redundant label 00146$
;	main.c:78: reading = 0;
;	genAssign
	mov	r2,#0x00
;	main.c:79: liga = 1;
;	genAssign
	mov	r4,#0x01
00105$:
;	main.c:82: if (valor_lido == 12){
;	genCmpEq
;	gencjneshort
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 198.b	optimized misc jump sequence
	cjne	r5,#0x0C,00114$
;	Peephole 200.b	removed redundant sjmp
;	Peephole 300	removed redundant label 00147$
;	Peephole 300	removed redundant label 00148$
;	main.c:83: reading = 0;
;	genAssign
	mov	r2,#0x00
;	main.c:84: liga = 0;
;	genAssign
	mov	r4,#0x00
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00114$
00116$:
;	main.c:92: switch(equipamento) {
;	genCmpLt
;	genCmp
	mov	a,r3
;	genIfxJump
	jnb	acc.7,00149$
	ljmp	00128$
00149$:
;	genCmpGt
;	genCmp
	clr	c
;	Peephole 159	avoided xrl during execution
	mov	a,#(0x09 ^ 0x80)
	mov	b,r3
	xrl	b,#0x80
	subb	a,b
;	genIfxJump
;	Peephole 112.b	changed ljmp to sjmp
;	Peephole 160.a	removed sjmp by inverse jump logic
	jc	00128$
;	Peephole 300	removed redundant label 00150$
;	genJumpTab
	mov	a,r3
;	Peephole 254	optimized left shift
	add	a,r3
	add	a,r3
	mov	dptr,#00151$
	jmp	@a+dptr
00151$:
	ljmp	00126$
	ljmp	00117$
	ljmp	00118$
	ljmp	00119$
	ljmp	00120$
	ljmp	00121$
	ljmp	00122$
	ljmp	00123$
	ljmp	00124$
	ljmp	00125$
;	main.c:93: case 1: EQUIPAMENTO_1 = liga;
00117$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P2_0,c
;	main.c:94: break;
;	main.c:95: case 2: EQUIPAMENTO_2 = liga;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00128$
00118$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P2_1,c
;	main.c:96: break;
;	main.c:97: case 3: EQUIPAMENTO_3 = liga;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00128$
00119$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P2_2,c
;	main.c:98: break;
;	main.c:99: case 4: EQUIPAMENTO_4 = liga;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00128$
00120$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P2_3,c
;	main.c:100: break;
;	main.c:101: case 5: EQUIPAMENTO_5 = liga;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00128$
00121$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P2_4,c
;	main.c:102: break;
;	main.c:103: case 6: EQUIPAMENTO_6 = liga;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00128$
00122$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P2_5,c
;	main.c:104: break;
;	main.c:105: case 7: EQUIPAMENTO_7 = liga;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00128$
00123$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P2_6,c
;	main.c:106: break;
;	main.c:107: case 8: EQUIPAMENTO_8 = liga;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00128$
00124$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P2_7,c
;	main.c:108: break;
;	main.c:109: case 9: EQUIPAMENTO_9 = liga;
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00128$
00125$:
;	genAssign
	mov	a,r4
	add	a,#0xff
	mov	_P3_7,c
;	main.c:110: break;
;	main.c:111: default: break;
;	Peephole 112.b	changed ljmp to sjmp
;	main.c:112: }	
;	Peephole 200.b	removed redundant sjmp
00126$:
00128$:
	pop	psw
	pop	ar6
	pop	ar5
	pop	ar4
	pop	ar3
	pop	ar2
	pop	dph
	pop	dpl
	pop	b
	pop	acc
	reti
;------------------------------------------------------------
;Allocation info for local variables in function 'faz_ligacao'
;------------------------------------------------------------
;------------------------------------------------------------
;	main.c:115: void faz_ligacao(void){}
;	-----------------------------------------
;	 function faz_ligacao
;	-----------------------------------------
_faz_ligacao:
;	Peephole 300	removed redundant label 00101$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;------------------------------------------------------------
;	main.c:117: void main(void){
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	main.c:119: while (1); /*  {
00102$:
;	Peephole 112.b	changed ljmp to sjmp
	sjmp	00102$
;	Peephole 259.a	removed redundant label 00104$ and ret
;
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
