                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.0 #4309 (Nov  8 2006)
                              4 ; This file generated Tue Dec 12 14:56:41 2006
                              5 ;--------------------------------------------------------
                              6 	.module main
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _faz_ligacao
                             14 	.globl _CY
                             15 	.globl _AC
                             16 	.globl _F0
                             17 	.globl _RS1
                             18 	.globl _RS0
                             19 	.globl _OV
                             20 	.globl _FL
                             21 	.globl _P
                             22 	.globl _TF2
                             23 	.globl _EXF2
                             24 	.globl _RCLK
                             25 	.globl _TCLK
                             26 	.globl _EXEN2
                             27 	.globl _TR2
                             28 	.globl _C_T2
                             29 	.globl _CP_RL2
                             30 	.globl _T2CON_7
                             31 	.globl _T2CON_6
                             32 	.globl _T2CON_5
                             33 	.globl _T2CON_4
                             34 	.globl _T2CON_3
                             35 	.globl _T2CON_2
                             36 	.globl _T2CON_1
                             37 	.globl _T2CON_0
                             38 	.globl _PT2
                             39 	.globl _PS
                             40 	.globl _PT1
                             41 	.globl _PX1
                             42 	.globl _PT0
                             43 	.globl _PX0
                             44 	.globl _RD
                             45 	.globl _WR
                             46 	.globl _T1
                             47 	.globl _T0
                             48 	.globl _INT1
                             49 	.globl _INT0
                             50 	.globl _TXD
                             51 	.globl _RXD
                             52 	.globl _P3_7
                             53 	.globl _P3_6
                             54 	.globl _P3_5
                             55 	.globl _P3_4
                             56 	.globl _P3_3
                             57 	.globl _P3_2
                             58 	.globl _P3_1
                             59 	.globl _P3_0
                             60 	.globl _EA
                             61 	.globl _ET2
                             62 	.globl _ES
                             63 	.globl _ET1
                             64 	.globl _EX1
                             65 	.globl _ET0
                             66 	.globl _EX0
                             67 	.globl _P2_7
                             68 	.globl _P2_6
                             69 	.globl _P2_5
                             70 	.globl _P2_4
                             71 	.globl _P2_3
                             72 	.globl _P2_2
                             73 	.globl _P2_1
                             74 	.globl _P2_0
                             75 	.globl _SM0
                             76 	.globl _SM1
                             77 	.globl _SM2
                             78 	.globl _REN
                             79 	.globl _TB8
                             80 	.globl _RB8
                             81 	.globl _TI
                             82 	.globl _RI
                             83 	.globl _T2EX
                             84 	.globl _T2
                             85 	.globl _P1_7
                             86 	.globl _P1_6
                             87 	.globl _P1_5
                             88 	.globl _P1_4
                             89 	.globl _P1_3
                             90 	.globl _P1_2
                             91 	.globl _P1_1
                             92 	.globl _P1_0
                             93 	.globl _TF1
                             94 	.globl _TR1
                             95 	.globl _TF0
                             96 	.globl _TR0
                             97 	.globl _IE1
                             98 	.globl _IT1
                             99 	.globl _IE0
                            100 	.globl _IT0
                            101 	.globl _P0_7
                            102 	.globl _P0_6
                            103 	.globl _P0_5
                            104 	.globl _P0_4
                            105 	.globl _P0_3
                            106 	.globl _P0_2
                            107 	.globl _P0_1
                            108 	.globl _P0_0
                            109 	.globl _B
                            110 	.globl _A
                            111 	.globl _ACC
                            112 	.globl _PSW
                            113 	.globl _TH2
                            114 	.globl _TL2
                            115 	.globl _RCAP2H
                            116 	.globl _RCAP2L
                            117 	.globl _T2MOD
                            118 	.globl _T2CON
                            119 	.globl _IP
                            120 	.globl _P3
                            121 	.globl _IE
                            122 	.globl _P2
                            123 	.globl _SBUF
                            124 	.globl _SCON
                            125 	.globl _P1
                            126 	.globl _TH1
                            127 	.globl _TH0
                            128 	.globl _TL1
                            129 	.globl _TL0
                            130 	.globl _TMOD
                            131 	.globl _TCON
                            132 	.globl _PCON
                            133 	.globl _DPH
                            134 	.globl _DPL
                            135 	.globl _SP
                            136 	.globl _P0
                            137 	.globl _I2CBusy
                            138 	.globl _BusFault
                            139 	.globl _NoAck
                            140 	.globl _Dados
                            141 	.globl _Delay
                            142 	.globl _SendByte
                            143 	.globl _StartI2C
                            144 	.globl _StopI2C
                            145 	.globl _SendData
                            146 	.globl _recebe_ligacao
                            147 ;--------------------------------------------------------
                            148 ; special function registers
                            149 ;--------------------------------------------------------
                            150 	.area RSEG    (DATA)
                    0080    151 _P0	=	0x0080
                    0081    152 _SP	=	0x0081
                    0082    153 _DPL	=	0x0082
                    0083    154 _DPH	=	0x0083
                    0087    155 _PCON	=	0x0087
                    0088    156 _TCON	=	0x0088
                    0089    157 _TMOD	=	0x0089
                    008A    158 _TL0	=	0x008a
                    008B    159 _TL1	=	0x008b
                    008C    160 _TH0	=	0x008c
                    008D    161 _TH1	=	0x008d
                    0090    162 _P1	=	0x0090
                    0098    163 _SCON	=	0x0098
                    0099    164 _SBUF	=	0x0099
                    00A0    165 _P2	=	0x00a0
                    00A8    166 _IE	=	0x00a8
                    00B0    167 _P3	=	0x00b0
                    00B8    168 _IP	=	0x00b8
                    00C8    169 _T2CON	=	0x00c8
                    00C9    170 _T2MOD	=	0x00c9
                    00CA    171 _RCAP2L	=	0x00ca
                    00CB    172 _RCAP2H	=	0x00cb
                    00CC    173 _TL2	=	0x00cc
                    00CD    174 _TH2	=	0x00cd
                    00D0    175 _PSW	=	0x00d0
                    00E0    176 _ACC	=	0x00e0
                    00E0    177 _A	=	0x00e0
                    00F0    178 _B	=	0x00f0
                            179 ;--------------------------------------------------------
                            180 ; special function bits
                            181 ;--------------------------------------------------------
                            182 	.area RSEG    (DATA)
                    0080    183 _P0_0	=	0x0080
                    0081    184 _P0_1	=	0x0081
                    0082    185 _P0_2	=	0x0082
                    0083    186 _P0_3	=	0x0083
                    0084    187 _P0_4	=	0x0084
                    0085    188 _P0_5	=	0x0085
                    0086    189 _P0_6	=	0x0086
                    0087    190 _P0_7	=	0x0087
                    0088    191 _IT0	=	0x0088
                    0089    192 _IE0	=	0x0089
                    008A    193 _IT1	=	0x008a
                    008B    194 _IE1	=	0x008b
                    008C    195 _TR0	=	0x008c
                    008D    196 _TF0	=	0x008d
                    008E    197 _TR1	=	0x008e
                    008F    198 _TF1	=	0x008f
                    0090    199 _P1_0	=	0x0090
                    0091    200 _P1_1	=	0x0091
                    0092    201 _P1_2	=	0x0092
                    0093    202 _P1_3	=	0x0093
                    0094    203 _P1_4	=	0x0094
                    0095    204 _P1_5	=	0x0095
                    0096    205 _P1_6	=	0x0096
                    0097    206 _P1_7	=	0x0097
                    0090    207 _T2	=	0x0090
                    0091    208 _T2EX	=	0x0091
                    0098    209 _RI	=	0x0098
                    0099    210 _TI	=	0x0099
                    009A    211 _RB8	=	0x009a
                    009B    212 _TB8	=	0x009b
                    009C    213 _REN	=	0x009c
                    009D    214 _SM2	=	0x009d
                    009E    215 _SM1	=	0x009e
                    009F    216 _SM0	=	0x009f
                    00A0    217 _P2_0	=	0x00a0
                    00A1    218 _P2_1	=	0x00a1
                    00A2    219 _P2_2	=	0x00a2
                    00A3    220 _P2_3	=	0x00a3
                    00A4    221 _P2_4	=	0x00a4
                    00A5    222 _P2_5	=	0x00a5
                    00A6    223 _P2_6	=	0x00a6
                    00A7    224 _P2_7	=	0x00a7
                    00A8    225 _EX0	=	0x00a8
                    00A9    226 _ET0	=	0x00a9
                    00AA    227 _EX1	=	0x00aa
                    00AB    228 _ET1	=	0x00ab
                    00AC    229 _ES	=	0x00ac
                    00AD    230 _ET2	=	0x00ad
                    00AF    231 _EA	=	0x00af
                    00B0    232 _P3_0	=	0x00b0
                    00B1    233 _P3_1	=	0x00b1
                    00B2    234 _P3_2	=	0x00b2
                    00B3    235 _P3_3	=	0x00b3
                    00B4    236 _P3_4	=	0x00b4
                    00B5    237 _P3_5	=	0x00b5
                    00B6    238 _P3_6	=	0x00b6
                    00B7    239 _P3_7	=	0x00b7
                    00B0    240 _RXD	=	0x00b0
                    00B1    241 _TXD	=	0x00b1
                    00B2    242 _INT0	=	0x00b2
                    00B3    243 _INT1	=	0x00b3
                    00B4    244 _T0	=	0x00b4
                    00B5    245 _T1	=	0x00b5
                    00B6    246 _WR	=	0x00b6
                    00B7    247 _RD	=	0x00b7
                    00B8    248 _PX0	=	0x00b8
                    00B9    249 _PT0	=	0x00b9
                    00BA    250 _PX1	=	0x00ba
                    00BB    251 _PT1	=	0x00bb
                    00BC    252 _PS	=	0x00bc
                    00BD    253 _PT2	=	0x00bd
                    00C8    254 _T2CON_0	=	0x00c8
                    00C9    255 _T2CON_1	=	0x00c9
                    00CA    256 _T2CON_2	=	0x00ca
                    00CB    257 _T2CON_3	=	0x00cb
                    00CC    258 _T2CON_4	=	0x00cc
                    00CD    259 _T2CON_5	=	0x00cd
                    00CE    260 _T2CON_6	=	0x00ce
                    00CF    261 _T2CON_7	=	0x00cf
                    00C8    262 _CP_RL2	=	0x00c8
                    00C9    263 _C_T2	=	0x00c9
                    00CA    264 _TR2	=	0x00ca
                    00CB    265 _EXEN2	=	0x00cb
                    00CC    266 _TCLK	=	0x00cc
                    00CD    267 _RCLK	=	0x00cd
                    00CE    268 _EXF2	=	0x00ce
                    00CF    269 _TF2	=	0x00cf
                    00D0    270 _P	=	0x00d0
                    00D1    271 _FL	=	0x00d1
                    00D2    272 _OV	=	0x00d2
                    00D3    273 _RS0	=	0x00d3
                    00D4    274 _RS1	=	0x00d4
                    00D5    275 _F0	=	0x00d5
                    00D6    276 _AC	=	0x00d6
                    00D7    277 _CY	=	0x00d7
                            278 ;--------------------------------------------------------
                            279 ; overlayable register banks
                            280 ;--------------------------------------------------------
                            281 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     282 	.ds 8
                            283 ;--------------------------------------------------------
                            284 ; internal ram data
                            285 ;--------------------------------------------------------
                            286 	.area DSEG    (DATA)
   0021                     287 _Dados::
   0021                     288 	.ds 1
   0022                     289 _StartI2C_SlaveAddr_1_1:
   0022                     290 	.ds 16
   0032                     291 _SendData_Buffer_1_1:
   0032                     292 	.ds 16
                            293 ;--------------------------------------------------------
                            294 ; overlayable items in internal ram 
                            295 ;--------------------------------------------------------
                            296 	.area OSEG    (OVR,DATA)
                            297 ;--------------------------------------------------------
                            298 ; Stack segment in internal ram 
                            299 ;--------------------------------------------------------
                            300 	.area	SSEG	(DATA)
   0042                     301 __start__stack:
   0042                     302 	.ds	1
                            303 
                            304 ;--------------------------------------------------------
                            305 ; indirectly addressable internal ram data
                            306 ;--------------------------------------------------------
                            307 	.area ISEG    (DATA)
                            308 ;--------------------------------------------------------
                            309 ; bit data
                            310 ;--------------------------------------------------------
                            311 	.area BSEG    (BIT)
   0000                     312 _NoAck::
   0000                     313 	.ds 1
   0001                     314 _BusFault::
   0001                     315 	.ds 1
   0002                     316 _I2CBusy::
   0002                     317 	.ds 1
                            318 ;--------------------------------------------------------
                            319 ; paged external ram data
                            320 ;--------------------------------------------------------
                            321 	.area PSEG    (PAG,XDATA)
                            322 ;--------------------------------------------------------
                            323 ; external ram data
                            324 ;--------------------------------------------------------
                            325 	.area XSEG    (XDATA)
                            326 ;--------------------------------------------------------
                            327 ; external initialized ram data
                            328 ;--------------------------------------------------------
                            329 	.area XISEG   (XDATA)
                            330 	.area HOME    (CODE)
                            331 	.area GSINIT0 (CODE)
                            332 	.area GSINIT1 (CODE)
                            333 	.area GSINIT2 (CODE)
                            334 	.area GSINIT3 (CODE)
                            335 	.area GSINIT4 (CODE)
                            336 	.area GSINIT5 (CODE)
                            337 	.area GSINIT  (CODE)
                            338 	.area GSFINAL (CODE)
                            339 	.area CSEG    (CODE)
                            340 ;--------------------------------------------------------
                            341 ; interrupt vector 
                            342 ;--------------------------------------------------------
                            343 	.area HOME    (CODE)
   0000                     344 __interrupt_vect:
   0000 02 00 06            345 	ljmp	__sdcc_gsinit_startup
   0003 02 02 E5            346 	ljmp	_recebe_ligacao
                            347 ;--------------------------------------------------------
                            348 ; global & static initialisations
                            349 ;--------------------------------------------------------
                            350 	.area HOME    (CODE)
                            351 	.area GSINIT  (CODE)
                            352 	.area GSFINAL (CODE)
                            353 	.area GSINIT  (CODE)
                            354 	.globl __sdcc_gsinit_startup
                            355 	.globl __sdcc_program_startup
                            356 	.globl __start__stack
                            357 	.globl __mcs51_genXINIT
                            358 	.globl __mcs51_genXRAMCLEAR
                            359 	.globl __mcs51_genRAMCLEAR
                            360 	.area GSFINAL (CODE)
   005F 02 00 62            361 	ljmp	__sdcc_program_startup
                            362 ;--------------------------------------------------------
                            363 ; Home
                            364 ;--------------------------------------------------------
                            365 	.area HOME    (CODE)
                            366 	.area CSEG    (CODE)
   0062                     367 __sdcc_program_startup:
   0062 12 03 E5            368 	lcall	_main
                            369 ;	return from main will lock up
   0065 80 FE               370 	sjmp .
                            371 ;--------------------------------------------------------
                            372 ; code
                            373 ;--------------------------------------------------------
                            374 	.area CSEG    (CODE)
                            375 ;------------------------------------------------------------
                            376 ;Allocation info for local variables in function 'Delay'
                            377 ;------------------------------------------------------------
                            378 ;------------------------------------------------------------
                            379 ;	i2c.h:21: void Delay( void ) {
                            380 ;	-----------------------------------------
                            381 ;	 function Delay
                            382 ;	-----------------------------------------
   0067                     383 _Delay:
                    0002    384 	ar2 = 0x02
                    0003    385 	ar3 = 0x03
                    0004    386 	ar4 = 0x04
                    0005    387 	ar5 = 0x05
                    0006    388 	ar6 = 0x06
                    0007    389 	ar7 = 0x07
                    0000    390 	ar0 = 0x00
                    0001    391 	ar1 = 0x01
                            392 ;	i2c.h:32: _endasm ;
                            393 ;	genInline
   0067 00                  394 	        NOP
   0068 00                  395 	        NOP
   0069 00                  396 	        NOP
   006A 00                  397 	        NOP
   006B 00                  398 	        NOP
   006C 00                  399 	        NOP
                            400 ;	Peephole 300	removed redundant label 00101$
   006D 22                  401 	ret
                            402 ;------------------------------------------------------------
                            403 ;Allocation info for local variables in function 'SendByte'
                            404 ;------------------------------------------------------------
                            405 ;BitData                   Allocated to registers r2 r3 r4 
                            406 ;BitCnt                    Allocated to registers r5 r6 
                            407 ;------------------------------------------------------------
                            408 ;	i2c.h:41: int SendByte( unsigned int BitData[8] ) {
                            409 ;	-----------------------------------------
                            410 ;	 function SendByte
                            411 ;	-----------------------------------------
   006E                     412 _SendByte:
                            413 ;	genReceive
   006E AA 82               414 	mov	r2,dpl
   0070 AB 83               415 	mov	r3,dph
   0072 AC F0               416 	mov	r4,b
                            417 ;	genIfx
                            418 ;	genIfxJump
   0074 30 00 03            419 	jnb	_NoAck,00127$
   0077 02 01 02            420 	ljmp	00110$
   007A                     421 00127$:
                            422 ;	i2c.h:49: for ( BitCnt = 0; BitCnt < 8; BitCnt++ ) {
                            423 ;	genAssign
   007A 7D 00               424 	mov	r5,#0x00
   007C 7E 00               425 	mov	r6,#0x00
   007E                     426 00112$:
                            427 ;	genCmpLt
                            428 ;	genCmp
   007E C3                  429 	clr	c
   007F ED                  430 	mov	a,r5
   0080 94 08               431 	subb	a,#0x08
   0082 EE                  432 	mov	a,r6
   0083 64 80               433 	xrl	a,#0x80
   0085 94 80               434 	subb	a,#0x80
                            435 ;	genIfxJump
                            436 ;	Peephole 108.a	removed ljmp by inverse jump logic
   0087 50 61               437 	jnc	00115$
                            438 ;	Peephole 300	removed redundant label 00128$
                            439 ;	i2c.h:51: SDAPin = BitData[BitCnt];
                            440 ;	genLeftShift
                            441 ;	genLeftShiftLiteral
                            442 ;	genlshTwo
   0089 8D 07               443 	mov	ar7,r5
   008B EE                  444 	mov	a,r6
   008C CF                  445 	xch	a,r7
   008D 25 E0               446 	add	a,acc
   008F CF                  447 	xch	a,r7
   0090 33                  448 	rlc	a
   0091 F8                  449 	mov	r0,a
                            450 ;	genPlus
                            451 ;	Peephole 236.g	used r7 instead of ar7
   0092 EF                  452 	mov	a,r7
                            453 ;	Peephole 236.a	used r2 instead of ar2
   0093 2A                  454 	add	a,r2
   0094 FF                  455 	mov	r7,a
                            456 ;	Peephole 236.g	used r0 instead of ar0
   0095 E8                  457 	mov	a,r0
                            458 ;	Peephole 236.b	used r3 instead of ar3
   0096 3B                  459 	addc	a,r3
   0097 F8                  460 	mov	r0,a
   0098 8C 01               461 	mov	ar1,r4
                            462 ;	genPointerGet
                            463 ;	genGenPointerGet
   009A 8F 82               464 	mov	dpl,r7
   009C 88 83               465 	mov	dph,r0
   009E 89 F0               466 	mov	b,r1
   00A0 12 03 E7            467 	lcall	__gptrget
   00A3 FF                  468 	mov	r7,a
   00A4 A3                  469 	inc	dptr
   00A5 12 03 E7            470 	lcall	__gptrget
                            471 ;	genCast
   00A8 F8                  472 	mov	r0,a
                            473 ;	Peephole 135	removed redundant mov
   00A9 4F                  474 	orl	a,r7
   00AA 24 FF               475 	add	a,#0xff
   00AC 92 87               476 	mov	_P0_7,c
                            477 ;	i2c.h:52: SCLPin = 1; 
                            478 ;	genAssign
   00AE D2 86               479 	setb	_P0_6
                            480 ;	i2c.h:53: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
   00B0                     481 00101$:
                            482 ;	genIfx
                            483 ;	genIfxJump
                            484 ;	Peephole 108.d	removed ljmp by inverse jump logic
   00B0 30 86 FD            485 	jnb	_P0_6,00101$
                            486 ;	Peephole 300	removed redundant label 00129$
                            487 ;	i2c.h:54: Delay();
                            488 ;	genCall
   00B3 C0 02               489 	push	ar2
   00B5 C0 03               490 	push	ar3
   00B7 C0 04               491 	push	ar4
   00B9 C0 05               492 	push	ar5
   00BB C0 06               493 	push	ar6
   00BD 12 00 67            494 	lcall	_Delay
   00C0 D0 06               495 	pop	ar6
   00C2 D0 05               496 	pop	ar5
   00C4 D0 04               497 	pop	ar4
   00C6 D0 03               498 	pop	ar3
   00C8 D0 02               499 	pop	ar2
                            500 ;	i2c.h:55: SCLPin = 0;
                            501 ;	genAssign
   00CA C2 86               502 	clr	_P0_6
                            503 ;	i2c.h:56: Delay();
                            504 ;	genCall
   00CC C0 02               505 	push	ar2
   00CE C0 03               506 	push	ar3
   00D0 C0 04               507 	push	ar4
   00D2 C0 05               508 	push	ar5
   00D4 C0 06               509 	push	ar6
   00D6 12 00 67            510 	lcall	_Delay
   00D9 D0 06               511 	pop	ar6
   00DB D0 05               512 	pop	ar5
   00DD D0 04               513 	pop	ar4
   00DF D0 03               514 	pop	ar3
   00E1 D0 02               515 	pop	ar2
                            516 ;	i2c.h:49: for ( BitCnt = 0; BitCnt < 8; BitCnt++ ) {
                            517 ;	genPlus
                            518 ;     genPlusIncr
   00E3 0D                  519 	inc	r5
                            520 ;	Peephole 112.b	changed ljmp to sjmp
                            521 ;	Peephole 243	avoided branch to sjmp
   00E4 BD 00 97            522 	cjne	r5,#0x00,00112$
   00E7 0E                  523 	inc	r6
                            524 ;	Peephole 300	removed redundant label 00130$
   00E8 80 94               525 	sjmp	00112$
   00EA                     526 00115$:
                            527 ;	i2c.h:59: SDAPin = 1;
                            528 ;	genAssign
   00EA D2 87               529 	setb	_P0_7
                            530 ;	i2c.h:61: SCLPin = 1;		
                            531 ;	genAssign
   00EC D2 86               532 	setb	_P0_6
                            533 ;	i2c.h:62: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
   00EE                     534 00104$:
                            535 ;	genIfx
                            536 ;	genIfxJump
                            537 ;	Peephole 108.d	removed ljmp by inverse jump logic
   00EE 30 86 FD            538 	jnb	_P0_6,00104$
                            539 ;	Peephole 300	removed redundant label 00131$
                            540 ;	i2c.h:64: Delay();
                            541 ;	genCall
   00F1 12 00 67            542 	lcall	_Delay
                            543 ;	genIfx
                            544 ;	genIfxJump
                            545 ;	Peephole 108.d	removed ljmp by inverse jump logic
   00F4 30 87 02            546 	jnb	_P0_7,00108$
                            547 ;	Peephole 300	removed redundant label 00132$
                            548 ;	i2c.h:67: NoAck = 1;
                            549 ;	genAssign
   00F7 D2 00               550 	setb	_NoAck
   00F9                     551 00108$:
                            552 ;	i2c.h:70: SCLPin = 0;
                            553 ;	genAssign
   00F9 C2 86               554 	clr	_P0_6
                            555 ;	i2c.h:71: Delay();
                            556 ;	genCall
   00FB 12 00 67            557 	lcall	_Delay
                            558 ;	i2c.h:73: return 0; // Caso a transmissao tenha ocorrido corretamente
                            559 ;	genRet
                            560 ;	Peephole 182.b	used 16 bit load of dptr
   00FE 90 00 00            561 	mov	dptr,#0x0000
                            562 ;	Peephole 112.b	changed ljmp to sjmp
                            563 ;	Peephole 251.b	replaced sjmp to ret with ret
   0101 22                  564 	ret
   0102                     565 00110$:
                            566 ;	i2c.h:76: StopI2C();
                            567 ;	genCall
   0102 12 01 5B            568 	lcall	_StopI2C
                            569 ;	i2c.h:77: return 1; // Caso a transmissao tenha falhado
                            570 ;	genRet
                            571 ;	Peephole 182.b	used 16 bit load of dptr
   0105 90 00 01            572 	mov	dptr,#0x0001
                            573 ;	Peephole 300	removed redundant label 00116$
   0108 22                  574 	ret
                            575 ;------------------------------------------------------------
                            576 ;Allocation info for local variables in function 'StartI2C'
                            577 ;------------------------------------------------------------
                            578 ;SlaveAddr                 Allocated with name '_StartI2C_SlaveAddr_1_1'
                            579 ;------------------------------------------------------------
                            580 ;	i2c.h:84: void StartI2C( void ) {
                            581 ;	-----------------------------------------
                            582 ;	 function StartI2C
                            583 ;	-----------------------------------------
   0109                     584 _StartI2C:
                            585 ;	i2c.h:86: unsigned int SlaveAddr[8] = { 0, 1, 0, 0, 1, 0, 0, 0 }; 
                            586 ;	genPointerSet
                            587 ;	genNearPointerSet
                            588 ;	genDataPointerSet
   0109 75 22 00            589 	mov	_StartI2C_SlaveAddr_1_1,#0x00
   010C 75 23 00            590 	mov	(_StartI2C_SlaveAddr_1_1 + 1),#0x00
                            591 ;	genPointerSet
                            592 ;	genNearPointerSet
                            593 ;	genDataPointerSet
   010F 75 24 01            594 	mov	(_StartI2C_SlaveAddr_1_1 + 0x0002),#0x01
   0112 75 25 00            595 	mov	((_StartI2C_SlaveAddr_1_1 + 0x0002) + 1),#0x00
                            596 ;	genPointerSet
                            597 ;	genNearPointerSet
                            598 ;	genDataPointerSet
   0115 75 26 00            599 	mov	(_StartI2C_SlaveAddr_1_1 + 0x0004),#0x00
   0118 75 27 00            600 	mov	((_StartI2C_SlaveAddr_1_1 + 0x0004) + 1),#0x00
                            601 ;	genPointerSet
                            602 ;	genNearPointerSet
                            603 ;	genDataPointerSet
   011B 75 28 00            604 	mov	(_StartI2C_SlaveAddr_1_1 + 0x0006),#0x00
   011E 75 29 00            605 	mov	((_StartI2C_SlaveAddr_1_1 + 0x0006) + 1),#0x00
                            606 ;	genPointerSet
                            607 ;	genNearPointerSet
                            608 ;	genDataPointerSet
   0121 75 2A 01            609 	mov	(_StartI2C_SlaveAddr_1_1 + 0x0008),#0x01
   0124 75 2B 00            610 	mov	((_StartI2C_SlaveAddr_1_1 + 0x0008) + 1),#0x00
                            611 ;	genPointerSet
                            612 ;	genNearPointerSet
                            613 ;	genDataPointerSet
   0127 75 2C 00            614 	mov	(_StartI2C_SlaveAddr_1_1 + 0x000a),#0x00
   012A 75 2D 00            615 	mov	((_StartI2C_SlaveAddr_1_1 + 0x000a) + 1),#0x00
                            616 ;	genPointerSet
                            617 ;	genNearPointerSet
                            618 ;	genDataPointerSet
   012D 75 2E 00            619 	mov	(_StartI2C_SlaveAddr_1_1 + 0x000c),#0x00
   0130 75 2F 00            620 	mov	((_StartI2C_SlaveAddr_1_1 + 0x000c) + 1),#0x00
                            621 ;	genPointerSet
                            622 ;	genNearPointerSet
                            623 ;	genDataPointerSet
   0133 75 30 00            624 	mov	(_StartI2C_SlaveAddr_1_1 + 0x000e),#0x00
   0136 75 31 00            625 	mov	((_StartI2C_SlaveAddr_1_1 + 0x000e) + 1),#0x00
                            626 ;	i2c.h:88: I2CBusy = 1; /* Indica que uma transmissao sera feita */
                            627 ;	genAssign
   0139 D2 02               628 	setb	_I2CBusy
                            629 ;	i2c.h:89: NoAck = 0; /* Apaga as flags de erro */
                            630 ;	genAssign
   013B C2 00               631 	clr	_NoAck
                            632 ;	i2c.h:90: BusFault = 0; 
                            633 ;	genAssign
   013D C2 01               634 	clr	_BusFault
                            635 ;	genIfx
                            636 ;	genIfxJump
                            637 ;	Peephole 108.d	removed ljmp by inverse jump logic
   013F 30 86 16            638 	jnb	_P0_6,00102$
                            639 ;	Peephole 300	removed redundant label 00109$
                            640 ;	genIfx
                            641 ;	genIfxJump
                            642 ;	Peephole 108.d	removed ljmp by inverse jump logic
                            643 ;	i2c.h:94: SDAPin = 0; /* Inicia o I2C Start */
                            644 ;	genAssign
                            645 ;	Peephole 250.a	using atomic test and clear
   0142 10 87 02            646 	jbc	_P0_7,00110$
   0145 80 11               647 	sjmp	00102$
   0147                     648 00110$:
                            649 ;	i2c.h:95: Delay();
                            650 ;	genCall
   0147 12 00 67            651 	lcall	_Delay
                            652 ;	i2c.h:96: SCLPin = 0;
                            653 ;	genAssign
   014A C2 86               654 	clr	_P0_6
                            655 ;	i2c.h:97: Delay(); /* Termina o I2C Start */
                            656 ;	genCall
   014C 12 00 67            657 	lcall	_Delay
                            658 ;	i2c.h:98: SendByte( SlaveAddr ); /* Envia o endereco do Slave */
                            659 ;	genCall
                            660 ;	Peephole 182.a	used 16 bit load of DPTR
   014F 90 00 22            661 	mov	dptr,#_StartI2C_SlaveAddr_1_1
   0152 75 F0 40            662 	mov	b,#0x40
                            663 ;	Peephole 112.b	changed ljmp to sjmp
                            664 ;	Peephole 251.b	replaced sjmp to ret with ret
                            665 ;	Peephole 253.a	replaced lcall/ret with ljmp
   0155 02 00 6E            666 	ljmp	_SendByte
   0158                     667 00102$:
                            668 ;	i2c.h:103: BusFault = 1;
                            669 ;	genAssign
   0158 D2 01               670 	setb	_BusFault
                            671 ;	Peephole 300	removed redundant label 00105$
   015A 22                  672 	ret
                            673 ;------------------------------------------------------------
                            674 ;Allocation info for local variables in function 'StopI2C'
                            675 ;------------------------------------------------------------
                            676 ;------------------------------------------------------------
                            677 ;	i2c.h:110: void StopI2C( void ) {
                            678 ;	-----------------------------------------
                            679 ;	 function StopI2C
                            680 ;	-----------------------------------------
   015B                     681 _StopI2C:
                            682 ;	i2c.h:112: SDAPin = 0; /* Prepara o barramento pra receber o Stop */
                            683 ;	genAssign
   015B C2 87               684 	clr	_P0_7
                            685 ;	i2c.h:113: SCLPin = 1; /* Seta o clock para o Stop  */
                            686 ;	genAssign
   015D D2 86               687 	setb	_P0_6
                            688 ;	i2c.h:114: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
   015F                     689 00101$:
                            690 ;	genIfx
                            691 ;	genIfxJump
                            692 ;	Peephole 108.d	removed ljmp by inverse jump logic
   015F 30 86 FD            693 	jnb	_P0_6,00101$
                            694 ;	Peephole 300	removed redundant label 00108$
                            695 ;	i2c.h:115: Delay();
                            696 ;	genCall
   0162 12 00 67            697 	lcall	_Delay
                            698 ;	i2c.h:116: SDAPin = 1; /* Envia o Stop */
                            699 ;	genAssign
   0165 D2 87               700 	setb	_P0_7
                            701 ;	i2c.h:117: Delay();
                            702 ;	genCall
   0167 12 00 67            703 	lcall	_Delay
                            704 ;	i2c.h:118: I2CBusy = 0; /* Reseta o Flag de barramento ocupado*/
                            705 ;	genAssign
   016A C2 02               706 	clr	_I2CBusy
                            707 ;	Peephole 300	removed redundant label 00104$
   016C 22                  708 	ret
                            709 ;------------------------------------------------------------
                            710 ;Allocation info for local variables in function 'SendData'
                            711 ;------------------------------------------------------------
                            712 ;Tom                       Allocated to registers r2 r3 
                            713 ;Buffer                    Allocated with name '_SendData_Buffer_1_1'
                            714 ;------------------------------------------------------------
                            715 ;	i2c.h:125: void SendData ( int Tom ) {
                            716 ;	-----------------------------------------
                            717 ;	 function SendData
                            718 ;	-----------------------------------------
   016D                     719 _SendData:
                            720 ;	genReceive
   016D AA 82               721 	mov	r2,dpl
   016F AB 83               722 	mov	r3,dph
                            723 ;	i2c.h:129: StartI2C();
                            724 ;	genCall
   0171 C0 02               725 	push	ar2
   0173 C0 03               726 	push	ar3
   0175 12 01 09            727 	lcall	_StartI2C
   0178 D0 03               728 	pop	ar3
   017A D0 02               729 	pop	ar2
                            730 ;	i2c.h:134: Buffer[0] = 0;
                            731 ;	genPointerSet
                            732 ;	genNearPointerSet
                            733 ;	genDataPointerSet
   017C 75 32 00            734 	mov	_SendData_Buffer_1_1,#0x00
   017F 75 33 00            735 	mov	(_SendData_Buffer_1_1 + 1),#0x00
                            736 ;	i2c.h:135: Buffer[1] = 0;
                            737 ;	genPointerSet
                            738 ;	genNearPointerSet
                            739 ;	genDataPointerSet
   0182 75 34 00            740 	mov	(_SendData_Buffer_1_1 + 0x0002),#0x00
   0185 75 35 00            741 	mov	((_SendData_Buffer_1_1 + 0x0002) + 1),#0x00
                            742 ;	i2c.h:136: Buffer[2] = 0;
                            743 ;	genPointerSet
                            744 ;	genNearPointerSet
                            745 ;	genDataPointerSet
   0188 75 36 00            746 	mov	(_SendData_Buffer_1_1 + 0x0004),#0x00
   018B 75 37 00            747 	mov	((_SendData_Buffer_1_1 + 0x0004) + 1),#0x00
                            748 ;	i2c.h:137: Buffer[3] = 1;
                            749 ;	genPointerSet
                            750 ;	genNearPointerSet
                            751 ;	genDataPointerSet
   018E 75 38 01            752 	mov	(_SendData_Buffer_1_1 + 0x0006),#0x01
   0191 75 39 00            753 	mov	((_SendData_Buffer_1_1 + 0x0006) + 1),#0x00
                            754 ;	i2c.h:139: switch( Tom ) {
                            755 ;	genCmpLt
                            756 ;	genCmp
   0194 EB                  757 	mov	a,r3
                            758 ;	genIfxJump
   0195 30 E7 03            759 	jnb	acc.7,00116$
   0198 02 02 D9            760 	ljmp	00111$
   019B                     761 00116$:
                            762 ;	genCmpGt
                            763 ;	genCmp
   019B C3                  764 	clr	c
   019C 74 09               765 	mov	a,#0x09
   019E 9A                  766 	subb	a,r2
                            767 ;	Peephole 159	avoided xrl during execution
   019F 74 80               768 	mov	a,#(0x00 ^ 0x80)
   01A1 8B F0               769 	mov	b,r3
   01A3 63 F0 80            770 	xrl	b,#0x80
   01A6 95 F0               771 	subb	a,b
                            772 ;	genIfxJump
   01A8 50 03               773 	jnc	00117$
   01AA 02 02 D9            774 	ljmp	00111$
   01AD                     775 00117$:
                            776 ;	genJumpTab
   01AD EA                  777 	mov	a,r2
                            778 ;	Peephole 254	optimized left shift
   01AE 2A                  779 	add	a,r2
   01AF 2A                  780 	add	a,r2
   01B0 90 01 B4            781 	mov	dptr,#00118$
   01B3 73                  782 	jmp	@a+dptr
   01B4                     783 00118$:
   01B4 02 01 D2            784 	ljmp	00101$
   01B7 02 01 ED            785 	ljmp	00102$
   01BA 02 02 08            786 	ljmp	00103$
   01BD 02 02 23            787 	ljmp	00104$
   01C0 02 02 3E            788 	ljmp	00105$
   01C3 02 02 59            789 	ljmp	00106$
   01C6 02 02 73            790 	ljmp	00107$
   01C9 02 02 8D            791 	ljmp	00108$
   01CC 02 02 A7            792 	ljmp	00109$
   01CF 02 02 C1            793 	ljmp	00110$
                            794 ;	i2c.h:140: case 0: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 0; break;
   01D2                     795 00101$:
                            796 ;	genPointerSet
                            797 ;	genNearPointerSet
                            798 ;	genDataPointerSet
   01D2 75 3A 00            799 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   01D5 75 3B 00            800 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            801 ;	genPointerSet
                            802 ;	genNearPointerSet
                            803 ;	genDataPointerSet
   01D8 75 3C 00            804 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   01DB 75 3D 00            805 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            806 ;	genPointerSet
                            807 ;	genNearPointerSet
                            808 ;	genDataPointerSet
   01DE 75 3E 00            809 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   01E1 75 3F 00            810 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            811 ;	genPointerSet
                            812 ;	genNearPointerSet
                            813 ;	genDataPointerSet
   01E4 75 40 00            814 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   01E7 75 41 00            815 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   01EA 02 02 D9            816 	ljmp	00111$
                            817 ;	i2c.h:141: case 1: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 1; break;
   01ED                     818 00102$:
                            819 ;	genPointerSet
                            820 ;	genNearPointerSet
                            821 ;	genDataPointerSet
   01ED 75 3A 00            822 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   01F0 75 3B 00            823 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            824 ;	genPointerSet
                            825 ;	genNearPointerSet
                            826 ;	genDataPointerSet
   01F3 75 3C 00            827 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   01F6 75 3D 00            828 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            829 ;	genPointerSet
                            830 ;	genNearPointerSet
                            831 ;	genDataPointerSet
   01F9 75 3E 00            832 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   01FC 75 3F 00            833 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            834 ;	genPointerSet
                            835 ;	genNearPointerSet
                            836 ;	genDataPointerSet
   01FF 75 40 01            837 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   0202 75 41 00            838 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   0205 02 02 D9            839 	ljmp	00111$
                            840 ;	i2c.h:142: case 2: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 1; Buffer[7] = 0; break;
   0208                     841 00103$:
                            842 ;	genPointerSet
                            843 ;	genNearPointerSet
                            844 ;	genDataPointerSet
   0208 75 3A 00            845 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   020B 75 3B 00            846 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            847 ;	genPointerSet
                            848 ;	genNearPointerSet
                            849 ;	genDataPointerSet
   020E 75 3C 00            850 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   0211 75 3D 00            851 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            852 ;	genPointerSet
                            853 ;	genNearPointerSet
                            854 ;	genDataPointerSet
   0214 75 3E 01            855 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
   0217 75 3F 00            856 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            857 ;	genPointerSet
                            858 ;	genNearPointerSet
                            859 ;	genDataPointerSet
   021A 75 40 00            860 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   021D 75 41 00            861 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   0220 02 02 D9            862 	ljmp	00111$
                            863 ;	i2c.h:143: case 3: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 1; Buffer[7] = 1; break;
   0223                     864 00104$:
                            865 ;	genPointerSet
                            866 ;	genNearPointerSet
                            867 ;	genDataPointerSet
   0223 75 3A 00            868 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   0226 75 3B 00            869 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            870 ;	genPointerSet
                            871 ;	genNearPointerSet
                            872 ;	genDataPointerSet
   0229 75 3C 00            873 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   022C 75 3D 00            874 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            875 ;	genPointerSet
                            876 ;	genNearPointerSet
                            877 ;	genDataPointerSet
   022F 75 3E 01            878 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
   0232 75 3F 00            879 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            880 ;	genPointerSet
                            881 ;	genNearPointerSet
                            882 ;	genDataPointerSet
   0235 75 40 01            883 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   0238 75 41 00            884 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   023B 02 02 D9            885 	ljmp	00111$
                            886 ;	i2c.h:144: case 4: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 0; Buffer[7] = 0; break;
   023E                     887 00105$:
                            888 ;	genPointerSet
                            889 ;	genNearPointerSet
                            890 ;	genDataPointerSet
   023E 75 3A 00            891 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   0241 75 3B 00            892 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            893 ;	genPointerSet
                            894 ;	genNearPointerSet
                            895 ;	genDataPointerSet
   0244 75 3C 01            896 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
   0247 75 3D 00            897 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            898 ;	genPointerSet
                            899 ;	genNearPointerSet
                            900 ;	genDataPointerSet
   024A 75 3E 00            901 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   024D 75 3F 00            902 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            903 ;	genPointerSet
                            904 ;	genNearPointerSet
                            905 ;	genDataPointerSet
   0250 75 40 00            906 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   0253 75 41 00            907 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   0256 02 02 D9            908 	ljmp	00111$
                            909 ;	i2c.h:145: case 5: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 0; Buffer[7] = 1; break;
   0259                     910 00106$:
                            911 ;	genPointerSet
                            912 ;	genNearPointerSet
                            913 ;	genDataPointerSet
   0259 75 3A 00            914 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   025C 75 3B 00            915 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            916 ;	genPointerSet
                            917 ;	genNearPointerSet
                            918 ;	genDataPointerSet
   025F 75 3C 01            919 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
   0262 75 3D 00            920 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            921 ;	genPointerSet
                            922 ;	genNearPointerSet
                            923 ;	genDataPointerSet
   0265 75 3E 00            924 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   0268 75 3F 00            925 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            926 ;	genPointerSet
                            927 ;	genNearPointerSet
                            928 ;	genDataPointerSet
   026B 75 40 01            929 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   026E 75 41 00            930 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                            931 ;	i2c.h:146: case 6: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 1; Buffer[7] = 0; break;
                            932 ;	Peephole 112.b	changed ljmp to sjmp
   0271 80 66               933 	sjmp	00111$
   0273                     934 00107$:
                            935 ;	genPointerSet
                            936 ;	genNearPointerSet
                            937 ;	genDataPointerSet
   0273 75 3A 00            938 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   0276 75 3B 00            939 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            940 ;	genPointerSet
                            941 ;	genNearPointerSet
                            942 ;	genDataPointerSet
   0279 75 3C 01            943 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
   027C 75 3D 00            944 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            945 ;	genPointerSet
                            946 ;	genNearPointerSet
                            947 ;	genDataPointerSet
   027F 75 3E 01            948 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
   0282 75 3F 00            949 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            950 ;	genPointerSet
                            951 ;	genNearPointerSet
                            952 ;	genDataPointerSet
   0285 75 40 00            953 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   0288 75 41 00            954 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                            955 ;	i2c.h:147: case 7: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 1; Buffer[7] = 1; break;
                            956 ;	Peephole 112.b	changed ljmp to sjmp
   028B 80 4C               957 	sjmp	00111$
   028D                     958 00108$:
                            959 ;	genPointerSet
                            960 ;	genNearPointerSet
                            961 ;	genDataPointerSet
   028D 75 3A 00            962 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   0290 75 3B 00            963 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            964 ;	genPointerSet
                            965 ;	genNearPointerSet
                            966 ;	genDataPointerSet
   0293 75 3C 01            967 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
   0296 75 3D 00            968 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            969 ;	genPointerSet
                            970 ;	genNearPointerSet
                            971 ;	genDataPointerSet
   0299 75 3E 01            972 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
   029C 75 3F 00            973 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            974 ;	genPointerSet
                            975 ;	genNearPointerSet
                            976 ;	genDataPointerSet
   029F 75 40 01            977 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   02A2 75 41 00            978 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                            979 ;	i2c.h:148: case 8: Buffer[4] = 1; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 0; break;
                            980 ;	Peephole 112.b	changed ljmp to sjmp
   02A5 80 32               981 	sjmp	00111$
   02A7                     982 00109$:
                            983 ;	genPointerSet
                            984 ;	genNearPointerSet
                            985 ;	genDataPointerSet
   02A7 75 3A 01            986 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x01
   02AA 75 3B 00            987 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            988 ;	genPointerSet
                            989 ;	genNearPointerSet
                            990 ;	genDataPointerSet
   02AD 75 3C 00            991 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   02B0 75 3D 00            992 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            993 ;	genPointerSet
                            994 ;	genNearPointerSet
                            995 ;	genDataPointerSet
   02B3 75 3E 00            996 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   02B6 75 3F 00            997 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            998 ;	genPointerSet
                            999 ;	genNearPointerSet
                           1000 ;	genDataPointerSet
   02B9 75 40 00           1001 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   02BC 75 41 00           1002 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                           1003 ;	i2c.h:149: case 9: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 1; break;
                           1004 ;	Peephole 112.b	changed ljmp to sjmp
   02BF 80 18              1005 	sjmp	00111$
   02C1                    1006 00110$:
                           1007 ;	genPointerSet
                           1008 ;	genNearPointerSet
                           1009 ;	genDataPointerSet
   02C1 75 3A 00           1010 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   02C4 75 3B 00           1011 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                           1012 ;	genPointerSet
                           1013 ;	genNearPointerSet
                           1014 ;	genDataPointerSet
   02C7 75 3C 00           1015 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   02CA 75 3D 00           1016 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                           1017 ;	genPointerSet
                           1018 ;	genNearPointerSet
                           1019 ;	genDataPointerSet
   02CD 75 3E 00           1020 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   02D0 75 3F 00           1021 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                           1022 ;	genPointerSet
                           1023 ;	genNearPointerSet
                           1024 ;	genDataPointerSet
   02D3 75 40 01           1025 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   02D6 75 41 00           1026 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                           1027 ;	i2c.h:150: }
   02D9                    1028 00111$:
                           1029 ;	i2c.h:152: SendByte( Buffer );
                           1030 ;	genCall
                           1031 ;	Peephole 182.a	used 16 bit load of DPTR
   02D9 90 00 32           1032 	mov	dptr,#_SendData_Buffer_1_1
   02DC 75 F0 40           1033 	mov	b,#0x40
   02DF 12 00 6E           1034 	lcall	_SendByte
                           1035 ;	i2c.h:154: StopI2C();
                           1036 ;	genCall
                           1037 ;	Peephole 253.b	replaced lcall/ret with ljmp
   02E2 02 01 5B           1038 	ljmp	_StopI2C
                           1039 ;
                           1040 ;------------------------------------------------------------
                           1041 ;Allocation info for local variables in function 'recebe_ligacao'
                           1042 ;------------------------------------------------------------
                           1043 ;valor_lido                Allocated to registers r5 
                           1044 ;reading                   Allocated to registers r2 
                           1045 ;equipamento               Allocated to registers r3 
                           1046 ;liga                      Allocated to registers r4 
                           1047 ;------------------------------------------------------------
                           1048 ;	main.c:62: void recebe_ligacao() __interrupt IE0_VECTOR {
                           1049 ;	-----------------------------------------
                           1050 ;	 function recebe_ligacao
                           1051 ;	-----------------------------------------
   02E5                    1052 _recebe_ligacao:
   02E5 C0 E0              1053 	push	acc
   02E7 C0 F0              1054 	push	b
   02E9 C0 82              1055 	push	dpl
   02EB C0 83              1056 	push	dph
   02ED C0 02              1057 	push	ar2
   02EF C0 03              1058 	push	ar3
   02F1 C0 04              1059 	push	ar4
   02F3 C0 05              1060 	push	ar5
   02F5 C0 06              1061 	push	ar6
   02F7 C0 D0              1062 	push	psw
   02F9 75 D0 00           1063 	mov	psw,#0x00
                           1064 ;	main.c:64: char reading = 1;
                           1065 ;	genAssign
   02FC 7A 01              1066 	mov	r2,#0x01
                           1067 ;	main.c:65: char equipamento = -1;
                           1068 ;	genAssign
   02FE 7B FF              1069 	mov	r3,#0xFF
                           1070 ;	main.c:66: char liga = 0;
                           1071 ;	genAssign
   0300 7C 00              1072 	mov	r4,#0x00
                           1073 ;	main.c:67: while(reading) {
   0302                    1074 00114$:
                           1075 ;	genIfx
   0302 EA                 1076 	mov	a,r2
                           1077 ;	genIfxJump
                           1078 ;	Peephole 108.c	removed ljmp by inverse jump logic
   0303 60 55              1079 	jz	00116$
                           1080 ;	Peephole 300	removed redundant label 00140$
                           1081 ;	main.c:68: while(P1_4 != 1); /* TODO: pegar porta certa do decodificador */
   0305                    1082 00101$:
                           1083 ;	genIfx
                           1084 ;	genIfxJump
                           1085 ;	Peephole 108.d	removed ljmp by inverse jump logic
   0305 30 94 FD           1086 	jnb	_P1_4,00101$
                           1087 ;	Peephole 300	removed redundant label 00141$
                           1088 ;	main.c:69: valor_lido = 1 * P1_0 + 2 * P1_1 + 4 * P1_2 + 8 * P1_3;
                           1089 ;	genAssign
   0308 E4                 1090 	clr	a
   0309 A2 90              1091 	mov	c,_P1_0
   030B 33                 1092 	rlc	a
   030C FD                 1093 	mov	r5,a
                           1094 ;	genAssign
   030D E4                 1095 	clr	a
   030E A2 91              1096 	mov	c,_P1_1
   0310 33                 1097 	rlc	a
                           1098 ;	genLeftShift
                           1099 ;	genLeftShiftLiteral
                           1100 ;	genlshOne
                           1101 ;	Peephole 105	removed redundant mov
                           1102 ;	genPlus
                           1103 ;	Peephole 204	removed redundant mov
   0311 25 E0              1104 	add	a,acc
   0313 FE                 1105 	mov	r6,a
                           1106 ;	Peephole 177.b	removed redundant mov
                           1107 ;	Peephole 236.a	used r5 instead of ar5
   0314 2D                 1108 	add	a,r5
   0315 FD                 1109 	mov	r5,a
                           1110 ;	genAssign
   0316 E4                 1111 	clr	a
   0317 A2 92              1112 	mov	c,_P1_2
   0319 33                 1113 	rlc	a
                           1114 ;	genLeftShift
                           1115 ;	genLeftShiftLiteral
                           1116 ;	genlshOne
   031A FE                 1117 	mov	r6,a
                           1118 ;	Peephole 105	removed redundant mov
   031B 25 E0              1119 	add	a,acc
   031D 25 E0              1120 	add	a,acc
                           1121 ;	genPlus
   031F FE                 1122 	mov	r6,a
                           1123 ;	Peephole 177.b	removed redundant mov
                           1124 ;	Peephole 236.a	used r5 instead of ar5
   0320 2D                 1125 	add	a,r5
   0321 FD                 1126 	mov	r5,a
                           1127 ;	genAssign
   0322 E4                 1128 	clr	a
   0323 A2 93              1129 	mov	c,_P1_3
   0325 33                 1130 	rlc	a
                           1131 ;	genLeftShift
                           1132 ;	genLeftShiftLiteral
                           1133 ;	genlshOne
   0326 FE                 1134 	mov	r6,a
                           1135 ;	Peephole 105	removed redundant mov
   0327 C4                 1136 	swap	a
   0328 03                 1137 	rr	a
   0329 54 F8              1138 	anl	a,#0xf8
                           1139 ;	genPlus
   032B FE                 1140 	mov	r6,a
                           1141 ;	Peephole 177.b	removed redundant mov
                           1142 ;	Peephole 236.a	used r5 instead of ar5
   032C 2D                 1143 	add	a,r5
                           1144 ;	main.c:71: if (valor_lido < 9 && valor_lido > 0){
                           1145 ;	genCmpLt
                           1146 ;	genCmp
   032D FD                 1147 	mov	r5,a
   032E C3                 1148 	clr	c
                           1149 ;	Peephole 106	removed redundant mov
   032F 64 80              1150 	xrl	a,#0x80
   0331 94 89              1151 	subb	a,#0x89
                           1152 ;	genIfxJump
                           1153 ;	Peephole 108.a	removed ljmp by inverse jump logic
   0333 50 10              1154 	jnc	00111$
                           1155 ;	Peephole 300	removed redundant label 00142$
                           1156 ;	genCmpGt
                           1157 ;	genCmp
   0335 C3                 1158 	clr	c
                           1159 ;	Peephole 159	avoided xrl during execution
   0336 74 80              1160 	mov	a,#(0x00 ^ 0x80)
   0338 8D F0              1161 	mov	b,r5
   033A 63 F0 80           1162 	xrl	b,#0x80
   033D 95 F0              1163 	subb	a,b
                           1164 ;	genIfxJump
                           1165 ;	Peephole 108.a	removed ljmp by inverse jump logic
   033F 50 04              1166 	jnc	00111$
                           1167 ;	Peephole 300	removed redundant label 00143$
                           1168 ;	main.c:72: equipamento = valor_lido;
                           1169 ;	genAssign
   0341 8D 03              1170 	mov	ar3,r5
                           1171 ;	Peephole 112.b	changed ljmp to sjmp
   0343 80 BD              1172 	sjmp	00114$
   0345                    1173 00111$:
                           1174 ;	main.c:75: if (equipamento != -1){
                           1175 ;	genCmpEq
                           1176 ;	gencjneshort
   0345 BB FF 02           1177 	cjne	r3,#0xFF,00144$
                           1178 ;	Peephole 112.b	changed ljmp to sjmp
   0348 80 B8              1179 	sjmp	00114$
   034A                    1180 00144$:
                           1181 ;	main.c:77: if (valor_lido == 11){
                           1182 ;	genCmpEq
                           1183 ;	gencjneshort
                           1184 ;	Peephole 112.b	changed ljmp to sjmp
                           1185 ;	Peephole 198.b	optimized misc jump sequence
   034A BD 0B 04           1186 	cjne	r5,#0x0B,00105$
                           1187 ;	Peephole 200.b	removed redundant sjmp
                           1188 ;	Peephole 300	removed redundant label 00145$
                           1189 ;	Peephole 300	removed redundant label 00146$
                           1190 ;	main.c:78: reading = 0;
                           1191 ;	genAssign
   034D 7A 00              1192 	mov	r2,#0x00
                           1193 ;	main.c:79: liga = 1;
                           1194 ;	genAssign
   034F 7C 01              1195 	mov	r4,#0x01
   0351                    1196 00105$:
                           1197 ;	main.c:82: if (valor_lido == 12){
                           1198 ;	genCmpEq
                           1199 ;	gencjneshort
                           1200 ;	Peephole 112.b	changed ljmp to sjmp
                           1201 ;	Peephole 198.b	optimized misc jump sequence
   0351 BD 0C AE           1202 	cjne	r5,#0x0C,00114$
                           1203 ;	Peephole 200.b	removed redundant sjmp
                           1204 ;	Peephole 300	removed redundant label 00147$
                           1205 ;	Peephole 300	removed redundant label 00148$
                           1206 ;	main.c:83: reading = 0;
                           1207 ;	genAssign
   0354 7A 00              1208 	mov	r2,#0x00
                           1209 ;	main.c:84: liga = 0;
                           1210 ;	genAssign
   0356 7C 00              1211 	mov	r4,#0x00
                           1212 ;	Peephole 112.b	changed ljmp to sjmp
   0358 80 A8              1213 	sjmp	00114$
   035A                    1214 00116$:
                           1215 ;	main.c:92: switch(equipamento) {
                           1216 ;	genCmpLt
                           1217 ;	genCmp
   035A EB                 1218 	mov	a,r3
                           1219 ;	genIfxJump
   035B 30 E7 03           1220 	jnb	acc.7,00149$
   035E 02 03 CF           1221 	ljmp	00128$
   0361                    1222 00149$:
                           1223 ;	genCmpGt
                           1224 ;	genCmp
   0361 C3                 1225 	clr	c
                           1226 ;	Peephole 159	avoided xrl during execution
   0362 74 89              1227 	mov	a,#(0x09 ^ 0x80)
   0364 8B F0              1228 	mov	b,r3
   0366 63 F0 80           1229 	xrl	b,#0x80
   0369 95 F0              1230 	subb	a,b
                           1231 ;	genIfxJump
                           1232 ;	Peephole 112.b	changed ljmp to sjmp
                           1233 ;	Peephole 160.a	removed sjmp by inverse jump logic
   036B 40 62              1234 	jc	00128$
                           1235 ;	Peephole 300	removed redundant label 00150$
                           1236 ;	genJumpTab
   036D EB                 1237 	mov	a,r3
                           1238 ;	Peephole 254	optimized left shift
   036E 2B                 1239 	add	a,r3
   036F 2B                 1240 	add	a,r3
   0370 90 03 74           1241 	mov	dptr,#00151$
   0373 73                 1242 	jmp	@a+dptr
   0374                    1243 00151$:
   0374 02 03 CF           1244 	ljmp	00126$
   0377 02 03 92           1245 	ljmp	00117$
   037A 02 03 99           1246 	ljmp	00118$
   037D 02 03 A0           1247 	ljmp	00119$
   0380 02 03 A7           1248 	ljmp	00120$
   0383 02 03 AE           1249 	ljmp	00121$
   0386 02 03 B5           1250 	ljmp	00122$
   0389 02 03 BC           1251 	ljmp	00123$
   038C 02 03 C3           1252 	ljmp	00124$
   038F 02 03 CA           1253 	ljmp	00125$
                           1254 ;	main.c:93: case 1: EQUIPAMENTO_1 = liga;
   0392                    1255 00117$:
                           1256 ;	genAssign
   0392 EC                 1257 	mov	a,r4
   0393 24 FF              1258 	add	a,#0xff
   0395 92 A0              1259 	mov	_P2_0,c
                           1260 ;	main.c:94: break;
                           1261 ;	main.c:95: case 2: EQUIPAMENTO_2 = liga;
                           1262 ;	Peephole 112.b	changed ljmp to sjmp
   0397 80 36              1263 	sjmp	00128$
   0399                    1264 00118$:
                           1265 ;	genAssign
   0399 EC                 1266 	mov	a,r4
   039A 24 FF              1267 	add	a,#0xff
   039C 92 A1              1268 	mov	_P2_1,c
                           1269 ;	main.c:96: break;
                           1270 ;	main.c:97: case 3: EQUIPAMENTO_3 = liga;
                           1271 ;	Peephole 112.b	changed ljmp to sjmp
   039E 80 2F              1272 	sjmp	00128$
   03A0                    1273 00119$:
                           1274 ;	genAssign
   03A0 EC                 1275 	mov	a,r4
   03A1 24 FF              1276 	add	a,#0xff
   03A3 92 A2              1277 	mov	_P2_2,c
                           1278 ;	main.c:98: break;
                           1279 ;	main.c:99: case 4: EQUIPAMENTO_4 = liga;
                           1280 ;	Peephole 112.b	changed ljmp to sjmp
   03A5 80 28              1281 	sjmp	00128$
   03A7                    1282 00120$:
                           1283 ;	genAssign
   03A7 EC                 1284 	mov	a,r4
   03A8 24 FF              1285 	add	a,#0xff
   03AA 92 A3              1286 	mov	_P2_3,c
                           1287 ;	main.c:100: break;
                           1288 ;	main.c:101: case 5: EQUIPAMENTO_5 = liga;
                           1289 ;	Peephole 112.b	changed ljmp to sjmp
   03AC 80 21              1290 	sjmp	00128$
   03AE                    1291 00121$:
                           1292 ;	genAssign
   03AE EC                 1293 	mov	a,r4
   03AF 24 FF              1294 	add	a,#0xff
   03B1 92 A4              1295 	mov	_P2_4,c
                           1296 ;	main.c:102: break;
                           1297 ;	main.c:103: case 6: EQUIPAMENTO_6 = liga;
                           1298 ;	Peephole 112.b	changed ljmp to sjmp
   03B3 80 1A              1299 	sjmp	00128$
   03B5                    1300 00122$:
                           1301 ;	genAssign
   03B5 EC                 1302 	mov	a,r4
   03B6 24 FF              1303 	add	a,#0xff
   03B8 92 A5              1304 	mov	_P2_5,c
                           1305 ;	main.c:104: break;
                           1306 ;	main.c:105: case 7: EQUIPAMENTO_7 = liga;
                           1307 ;	Peephole 112.b	changed ljmp to sjmp
   03BA 80 13              1308 	sjmp	00128$
   03BC                    1309 00123$:
                           1310 ;	genAssign
   03BC EC                 1311 	mov	a,r4
   03BD 24 FF              1312 	add	a,#0xff
   03BF 92 A6              1313 	mov	_P2_6,c
                           1314 ;	main.c:106: break;
                           1315 ;	main.c:107: case 8: EQUIPAMENTO_8 = liga;
                           1316 ;	Peephole 112.b	changed ljmp to sjmp
   03C1 80 0C              1317 	sjmp	00128$
   03C3                    1318 00124$:
                           1319 ;	genAssign
   03C3 EC                 1320 	mov	a,r4
   03C4 24 FF              1321 	add	a,#0xff
   03C6 92 A7              1322 	mov	_P2_7,c
                           1323 ;	main.c:108: break;
                           1324 ;	main.c:109: case 9: EQUIPAMENTO_9 = liga;
                           1325 ;	Peephole 112.b	changed ljmp to sjmp
   03C8 80 05              1326 	sjmp	00128$
   03CA                    1327 00125$:
                           1328 ;	genAssign
   03CA EC                 1329 	mov	a,r4
   03CB 24 FF              1330 	add	a,#0xff
   03CD 92 B7              1331 	mov	_P3_7,c
                           1332 ;	main.c:110: break;
                           1333 ;	main.c:111: default: break;
                           1334 ;	Peephole 112.b	changed ljmp to sjmp
                           1335 ;	main.c:112: }	
                           1336 ;	Peephole 200.b	removed redundant sjmp
   03CF                    1337 00126$:
   03CF                    1338 00128$:
   03CF D0 D0              1339 	pop	psw
   03D1 D0 06              1340 	pop	ar6
   03D3 D0 05              1341 	pop	ar5
   03D5 D0 04              1342 	pop	ar4
   03D7 D0 03              1343 	pop	ar3
   03D9 D0 02              1344 	pop	ar2
   03DB D0 83              1345 	pop	dph
   03DD D0 82              1346 	pop	dpl
   03DF D0 F0              1347 	pop	b
   03E1 D0 E0              1348 	pop	acc
   03E3 32                 1349 	reti
                           1350 ;------------------------------------------------------------
                           1351 ;Allocation info for local variables in function 'faz_ligacao'
                           1352 ;------------------------------------------------------------
                           1353 ;------------------------------------------------------------
                           1354 ;	main.c:115: void faz_ligacao(void){}
                           1355 ;	-----------------------------------------
                           1356 ;	 function faz_ligacao
                           1357 ;	-----------------------------------------
   03E4                    1358 _faz_ligacao:
                           1359 ;	Peephole 300	removed redundant label 00101$
   03E4 22                 1360 	ret
                           1361 ;------------------------------------------------------------
                           1362 ;Allocation info for local variables in function 'main'
                           1363 ;------------------------------------------------------------
                           1364 ;------------------------------------------------------------
                           1365 ;	main.c:117: void main(void){
                           1366 ;	-----------------------------------------
                           1367 ;	 function main
                           1368 ;	-----------------------------------------
   03E5                    1369 _main:
                           1370 ;	main.c:119: while (1); /*  {
   03E5                    1371 00102$:
                           1372 ;	Peephole 112.b	changed ljmp to sjmp
   03E5 80 FE              1373 	sjmp	00102$
                           1374 ;	Peephole 259.a	removed redundant label 00104$ and ret
                           1375 ;
                           1376 	.area CSEG    (CODE)
                           1377 	.area CONST   (CODE)
                           1378 	.area XINIT   (CODE)
