                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.0 #4309 (Nov  8 2006)
                              4 ; This file generated Wed Dec 13 03:02:57 2006
                              5 ;--------------------------------------------------------
                              6 	.module main2
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
   0000 02 00 03            345 	ljmp	__sdcc_gsinit_startup
                            346 ;--------------------------------------------------------
                            347 ; global & static initialisations
                            348 ;--------------------------------------------------------
                            349 	.area HOME    (CODE)
                            350 	.area GSINIT  (CODE)
                            351 	.area GSFINAL (CODE)
                            352 	.area GSINIT  (CODE)
                            353 	.globl __sdcc_gsinit_startup
                            354 	.globl __sdcc_program_startup
                            355 	.globl __start__stack
                            356 	.globl __mcs51_genXINIT
                            357 	.globl __mcs51_genXRAMCLEAR
                            358 	.globl __mcs51_genRAMCLEAR
                            359 	.area GSFINAL (CODE)
   005C 02 00 5F            360 	ljmp	__sdcc_program_startup
                            361 ;--------------------------------------------------------
                            362 ; Home
                            363 ;--------------------------------------------------------
                            364 	.area HOME    (CODE)
                            365 	.area CSEG    (CODE)
   005F                     366 __sdcc_program_startup:
   005F 12 05 34            367 	lcall	_main
                            368 ;	return from main will lock up
   0062 80 FE               369 	sjmp .
                            370 ;--------------------------------------------------------
                            371 ; code
                            372 ;--------------------------------------------------------
                            373 	.area CSEG    (CODE)
                            374 ;------------------------------------------------------------
                            375 ;Allocation info for local variables in function 'Delay'
                            376 ;------------------------------------------------------------
                            377 ;------------------------------------------------------------
                            378 ;	i2c.h:21: void Delay( void ) {
                            379 ;	-----------------------------------------
                            380 ;	 function Delay
                            381 ;	-----------------------------------------
   0064                     382 _Delay:
                    0002    383 	ar2 = 0x02
                    0003    384 	ar3 = 0x03
                    0004    385 	ar4 = 0x04
                    0005    386 	ar5 = 0x05
                    0006    387 	ar6 = 0x06
                    0007    388 	ar7 = 0x07
                    0000    389 	ar0 = 0x00
                    0001    390 	ar1 = 0x01
                            391 ;	i2c.h:32: _endasm ;
                            392 ;	genInline
   0064 00                  393 	        NOP
   0065 00                  394 	        NOP
   0066 00                  395 	        NOP
   0067 00                  396 	        NOP
   0068 00                  397 	        NOP
   0069 00                  398 	        NOP
                            399 ;	Peephole 300	removed redundant label 00101$
   006A 22                  400 	ret
                            401 ;------------------------------------------------------------
                            402 ;Allocation info for local variables in function 'SendByte'
                            403 ;------------------------------------------------------------
                            404 ;BitData                   Allocated to registers r2 r3 r4 
                            405 ;BitCnt                    Allocated to registers r5 r6 
                            406 ;------------------------------------------------------------
                            407 ;	i2c.h:41: int SendByte( unsigned int BitData[8] ) {
                            408 ;	-----------------------------------------
                            409 ;	 function SendByte
                            410 ;	-----------------------------------------
   006B                     411 _SendByte:
                            412 ;	genReceive
   006B AA 82               413 	mov	r2,dpl
   006D AB 83               414 	mov	r3,dph
   006F AC F0               415 	mov	r4,b
                            416 ;	genIfx
                            417 ;	genIfxJump
   0071 30 00 03            418 	jnb	_NoAck,00127$
   0074 02 00 FF            419 	ljmp	00110$
   0077                     420 00127$:
                            421 ;	i2c.h:49: for ( BitCnt = 0; BitCnt < 8; BitCnt++ ) {
                            422 ;	genAssign
   0077 7D 00               423 	mov	r5,#0x00
   0079 7E 00               424 	mov	r6,#0x00
   007B                     425 00112$:
                            426 ;	genCmpLt
                            427 ;	genCmp
   007B C3                  428 	clr	c
   007C ED                  429 	mov	a,r5
   007D 94 08               430 	subb	a,#0x08
   007F EE                  431 	mov	a,r6
   0080 64 80               432 	xrl	a,#0x80
   0082 94 80               433 	subb	a,#0x80
                            434 ;	genIfxJump
                            435 ;	Peephole 108.a	removed ljmp by inverse jump logic
   0084 50 61               436 	jnc	00115$
                            437 ;	Peephole 300	removed redundant label 00128$
                            438 ;	i2c.h:51: SDAPin = BitData[BitCnt];
                            439 ;	genLeftShift
                            440 ;	genLeftShiftLiteral
                            441 ;	genlshTwo
   0086 8D 07               442 	mov	ar7,r5
   0088 EE                  443 	mov	a,r6
   0089 CF                  444 	xch	a,r7
   008A 25 E0               445 	add	a,acc
   008C CF                  446 	xch	a,r7
   008D 33                  447 	rlc	a
   008E F8                  448 	mov	r0,a
                            449 ;	genPlus
                            450 ;	Peephole 236.g	used r7 instead of ar7
   008F EF                  451 	mov	a,r7
                            452 ;	Peephole 236.a	used r2 instead of ar2
   0090 2A                  453 	add	a,r2
   0091 FF                  454 	mov	r7,a
                            455 ;	Peephole 236.g	used r0 instead of ar0
   0092 E8                  456 	mov	a,r0
                            457 ;	Peephole 236.b	used r3 instead of ar3
   0093 3B                  458 	addc	a,r3
   0094 F8                  459 	mov	r0,a
   0095 8C 01               460 	mov	ar1,r4
                            461 ;	genPointerGet
                            462 ;	genGenPointerGet
   0097 8F 82               463 	mov	dpl,r7
   0099 88 83               464 	mov	dph,r0
   009B 89 F0               465 	mov	b,r1
   009D 12 05 5E            466 	lcall	__gptrget
   00A0 FF                  467 	mov	r7,a
   00A1 A3                  468 	inc	dptr
   00A2 12 05 5E            469 	lcall	__gptrget
                            470 ;	genCast
   00A5 F8                  471 	mov	r0,a
                            472 ;	Peephole 135	removed redundant mov
   00A6 4F                  473 	orl	a,r7
   00A7 24 FF               474 	add	a,#0xff
   00A9 92 87               475 	mov	_P0_7,c
                            476 ;	i2c.h:52: SCLPin = 1; /* Seta o clock do barramento */
                            477 ;	genAssign
   00AB D2 86               478 	setb	_P0_6
                            479 ;	i2c.h:53: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
   00AD                     480 00101$:
                            481 ;	genIfx
                            482 ;	genIfxJump
                            483 ;	Peephole 108.d	removed ljmp by inverse jump logic
   00AD 30 86 FD            484 	jnb	_P0_6,00101$
                            485 ;	Peephole 300	removed redundant label 00129$
                            486 ;	i2c.h:54: Delay();
                            487 ;	genCall
   00B0 C0 02               488 	push	ar2
   00B2 C0 03               489 	push	ar3
   00B4 C0 04               490 	push	ar4
   00B6 C0 05               491 	push	ar5
   00B8 C0 06               492 	push	ar6
   00BA 12 00 64            493 	lcall	_Delay
   00BD D0 06               494 	pop	ar6
   00BF D0 05               495 	pop	ar5
   00C1 D0 04               496 	pop	ar4
   00C3 D0 03               497 	pop	ar3
   00C5 D0 02               498 	pop	ar2
                            499 ;	i2c.h:55: SCLPin = 0; /* Reseta o clock do barramento */
                            500 ;	genAssign
   00C7 C2 86               501 	clr	_P0_6
                            502 ;	i2c.h:56: Delay();
                            503 ;	genCall
   00C9 C0 02               504 	push	ar2
   00CB C0 03               505 	push	ar3
   00CD C0 04               506 	push	ar4
   00CF C0 05               507 	push	ar5
   00D1 C0 06               508 	push	ar6
   00D3 12 00 64            509 	lcall	_Delay
   00D6 D0 06               510 	pop	ar6
   00D8 D0 05               511 	pop	ar5
   00DA D0 04               512 	pop	ar4
   00DC D0 03               513 	pop	ar3
   00DE D0 02               514 	pop	ar2
                            515 ;	i2c.h:49: for ( BitCnt = 0; BitCnt < 8; BitCnt++ ) {
                            516 ;	genPlus
                            517 ;     genPlusIncr
   00E0 0D                  518 	inc	r5
                            519 ;	Peephole 112.b	changed ljmp to sjmp
                            520 ;	Peephole 243	avoided branch to sjmp
   00E1 BD 00 97            521 	cjne	r5,#0x00,00112$
   00E4 0E                  522 	inc	r6
                            523 ;	Peephole 300	removed redundant label 00130$
   00E5 80 94               524 	sjmp	00112$
   00E7                     525 00115$:
                            526 ;	i2c.h:62: SDAPin = 1;
                            527 ;	genAssign
   00E7 D2 87               528 	setb	_P0_7
                            529 ;	i2c.h:64: SCLPin = 1; /* Seta o clock do barramento */		
                            530 ;	genAssign
   00E9 D2 86               531 	setb	_P0_6
                            532 ;	i2c.h:65: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
   00EB                     533 00104$:
                            534 ;	genIfx
                            535 ;	genIfxJump
                            536 ;	Peephole 108.d	removed ljmp by inverse jump logic
   00EB 30 86 FD            537 	jnb	_P0_6,00104$
                            538 ;	Peephole 300	removed redundant label 00131$
                            539 ;	i2c.h:67: Delay();
                            540 ;	genCall
   00EE 12 00 64            541 	lcall	_Delay
                            542 ;	genIfx
                            543 ;	genIfxJump
                            544 ;	Peephole 108.d	removed ljmp by inverse jump logic
   00F1 30 87 02            545 	jnb	_P0_7,00108$
                            546 ;	Peephole 300	removed redundant label 00132$
                            547 ;	i2c.h:71: NoAck = 1;
                            548 ;	genAssign
   00F4 D2 00               549 	setb	_NoAck
   00F6                     550 00108$:
                            551 ;	i2c.h:74: SCLPin = 0; 
                            552 ;	genAssign
   00F6 C2 86               553 	clr	_P0_6
                            554 ;	i2c.h:75: Delay();
                            555 ;	genCall
   00F8 12 00 64            556 	lcall	_Delay
                            557 ;	i2c.h:77: return 0; /* Caso a transmissao tenha ocorrido corretamente */
                            558 ;	genRet
                            559 ;	Peephole 182.b	used 16 bit load of dptr
   00FB 90 00 00            560 	mov	dptr,#0x0000
                            561 ;	Peephole 112.b	changed ljmp to sjmp
                            562 ;	Peephole 251.b	replaced sjmp to ret with ret
   00FE 22                  563 	ret
   00FF                     564 00110$:
                            565 ;	i2c.h:80: StopI2C();
                            566 ;	genCall
   00FF 12 01 58            567 	lcall	_StopI2C
                            568 ;	i2c.h:81: return 1; /* Caso a transmissao tenha falhado */
                            569 ;	genRet
                            570 ;	Peephole 182.b	used 16 bit load of dptr
   0102 90 00 01            571 	mov	dptr,#0x0001
                            572 ;	Peephole 300	removed redundant label 00116$
   0105 22                  573 	ret
                            574 ;------------------------------------------------------------
                            575 ;Allocation info for local variables in function 'StartI2C'
                            576 ;------------------------------------------------------------
                            577 ;SlaveAddr                 Allocated with name '_StartI2C_SlaveAddr_1_1'
                            578 ;------------------------------------------------------------
                            579 ;	i2c.h:88: void StartI2C( void ) {
                            580 ;	-----------------------------------------
                            581 ;	 function StartI2C
                            582 ;	-----------------------------------------
   0106                     583 _StartI2C:
                            584 ;	i2c.h:90: unsigned int SlaveAddr[8] = { 0, 1, 0, 0, 1, 0, 0, 0 }; 
                            585 ;	genPointerSet
                            586 ;	genNearPointerSet
                            587 ;	genDataPointerSet
   0106 75 22 00            588 	mov	_StartI2C_SlaveAddr_1_1,#0x00
   0109 75 23 00            589 	mov	(_StartI2C_SlaveAddr_1_1 + 1),#0x00
                            590 ;	genPointerSet
                            591 ;	genNearPointerSet
                            592 ;	genDataPointerSet
   010C 75 24 01            593 	mov	(_StartI2C_SlaveAddr_1_1 + 0x0002),#0x01
   010F 75 25 00            594 	mov	((_StartI2C_SlaveAddr_1_1 + 0x0002) + 1),#0x00
                            595 ;	genPointerSet
                            596 ;	genNearPointerSet
                            597 ;	genDataPointerSet
   0112 75 26 00            598 	mov	(_StartI2C_SlaveAddr_1_1 + 0x0004),#0x00
   0115 75 27 00            599 	mov	((_StartI2C_SlaveAddr_1_1 + 0x0004) + 1),#0x00
                            600 ;	genPointerSet
                            601 ;	genNearPointerSet
                            602 ;	genDataPointerSet
   0118 75 28 00            603 	mov	(_StartI2C_SlaveAddr_1_1 + 0x0006),#0x00
   011B 75 29 00            604 	mov	((_StartI2C_SlaveAddr_1_1 + 0x0006) + 1),#0x00
                            605 ;	genPointerSet
                            606 ;	genNearPointerSet
                            607 ;	genDataPointerSet
   011E 75 2A 01            608 	mov	(_StartI2C_SlaveAddr_1_1 + 0x0008),#0x01
   0121 75 2B 00            609 	mov	((_StartI2C_SlaveAddr_1_1 + 0x0008) + 1),#0x00
                            610 ;	genPointerSet
                            611 ;	genNearPointerSet
                            612 ;	genDataPointerSet
   0124 75 2C 00            613 	mov	(_StartI2C_SlaveAddr_1_1 + 0x000a),#0x00
   0127 75 2D 00            614 	mov	((_StartI2C_SlaveAddr_1_1 + 0x000a) + 1),#0x00
                            615 ;	genPointerSet
                            616 ;	genNearPointerSet
                            617 ;	genDataPointerSet
   012A 75 2E 00            618 	mov	(_StartI2C_SlaveAddr_1_1 + 0x000c),#0x00
   012D 75 2F 00            619 	mov	((_StartI2C_SlaveAddr_1_1 + 0x000c) + 1),#0x00
                            620 ;	genPointerSet
                            621 ;	genNearPointerSet
                            622 ;	genDataPointerSet
   0130 75 30 00            623 	mov	(_StartI2C_SlaveAddr_1_1 + 0x000e),#0x00
   0133 75 31 00            624 	mov	((_StartI2C_SlaveAddr_1_1 + 0x000e) + 1),#0x00
                            625 ;	i2c.h:92: I2CBusy = 1; /* Indica que uma transmissao sera feita */
                            626 ;	genAssign
   0136 D2 02               627 	setb	_I2CBusy
                            628 ;	i2c.h:93: NoAck = 0; /* Apaga as flags de erro */
                            629 ;	genAssign
   0138 C2 00               630 	clr	_NoAck
                            631 ;	i2c.h:94: BusFault = 0; 
                            632 ;	genAssign
   013A C2 01               633 	clr	_BusFault
                            634 ;	genIfx
                            635 ;	genIfxJump
                            636 ;	Peephole 108.d	removed ljmp by inverse jump logic
   013C 30 86 16            637 	jnb	_P0_6,00102$
                            638 ;	Peephole 300	removed redundant label 00109$
                            639 ;	genIfx
                            640 ;	genIfxJump
                            641 ;	Peephole 108.d	removed ljmp by inverse jump logic
                            642 ;	i2c.h:98: SDAPin = 0; /* Inicia o I2C Start */
                            643 ;	genAssign
                            644 ;	Peephole 250.a	using atomic test and clear
   013F 10 87 02            645 	jbc	_P0_7,00110$
   0142 80 11               646 	sjmp	00102$
   0144                     647 00110$:
                            648 ;	i2c.h:99: Delay();
                            649 ;	genCall
   0144 12 00 64            650 	lcall	_Delay
                            651 ;	i2c.h:100: SCLPin = 0;
                            652 ;	genAssign
   0147 C2 86               653 	clr	_P0_6
                            654 ;	i2c.h:101: Delay(); /* Termina o I2C Start */
                            655 ;	genCall
   0149 12 00 64            656 	lcall	_Delay
                            657 ;	i2c.h:102: SendByte( SlaveAddr ); /* Envia o endereco do Slave */
                            658 ;	genCall
                            659 ;	Peephole 182.a	used 16 bit load of DPTR
   014C 90 00 22            660 	mov	dptr,#_StartI2C_SlaveAddr_1_1
   014F 75 F0 40            661 	mov	b,#0x40
                            662 ;	Peephole 112.b	changed ljmp to sjmp
                            663 ;	Peephole 251.b	replaced sjmp to ret with ret
                            664 ;	Peephole 253.a	replaced lcall/ret with ljmp
   0152 02 00 6B            665 	ljmp	_SendByte
   0155                     666 00102$:
                            667 ;	i2c.h:107: BusFault = 1;
                            668 ;	genAssign
   0155 D2 01               669 	setb	_BusFault
                            670 ;	Peephole 300	removed redundant label 00105$
   0157 22                  671 	ret
                            672 ;------------------------------------------------------------
                            673 ;Allocation info for local variables in function 'StopI2C'
                            674 ;------------------------------------------------------------
                            675 ;------------------------------------------------------------
                            676 ;	i2c.h:114: void StopI2C( void ) {
                            677 ;	-----------------------------------------
                            678 ;	 function StopI2C
                            679 ;	-----------------------------------------
   0158                     680 _StopI2C:
                            681 ;	i2c.h:116: SDAPin = 0; /* Prepara o barramento pra receber o Stop */
                            682 ;	genAssign
   0158 C2 87               683 	clr	_P0_7
                            684 ;	i2c.h:117: SCLPin = 1; /* Seta o clock para o Stop  */
                            685 ;	genAssign
   015A D2 86               686 	setb	_P0_6
                            687 ;	i2c.h:118: while ( SCLPin != 1 ); /* Espera SCLPin ficar alto */
   015C                     688 00101$:
                            689 ;	genIfx
                            690 ;	genIfxJump
                            691 ;	Peephole 108.d	removed ljmp by inverse jump logic
   015C 30 86 FD            692 	jnb	_P0_6,00101$
                            693 ;	Peephole 300	removed redundant label 00108$
                            694 ;	i2c.h:119: Delay();
                            695 ;	genCall
   015F 12 00 64            696 	lcall	_Delay
                            697 ;	i2c.h:120: SDAPin = 1; /* Envia o Stop */
                            698 ;	genAssign
   0162 D2 87               699 	setb	_P0_7
                            700 ;	i2c.h:121: Delay();
                            701 ;	genCall
   0164 12 00 64            702 	lcall	_Delay
                            703 ;	i2c.h:122: I2CBusy = 0; /* Reseta o Flag de barramento ocupado*/
                            704 ;	genAssign
   0167 C2 02               705 	clr	_I2CBusy
                            706 ;	Peephole 300	removed redundant label 00104$
   0169 22                  707 	ret
                            708 ;------------------------------------------------------------
                            709 ;Allocation info for local variables in function 'SendData'
                            710 ;------------------------------------------------------------
                            711 ;Tom                       Allocated to registers r2 r3 
                            712 ;Buffer                    Allocated with name '_SendData_Buffer_1_1'
                            713 ;DelayCnt                  Allocated to registers r2 r3 
                            714 ;------------------------------------------------------------
                            715 ;	i2c.h:129: void SendData ( int Tom ) {
                            716 ;	-----------------------------------------
                            717 ;	 function SendData
                            718 ;	-----------------------------------------
   016A                     719 _SendData:
                            720 ;	genReceive
   016A AA 82               721 	mov	r2,dpl
   016C AB 83               722 	mov	r3,dph
                            723 ;	i2c.h:134: StartI2C();
                            724 ;	genCall
   016E C0 02               725 	push	ar2
   0170 C0 03               726 	push	ar3
   0172 12 01 06            727 	lcall	_StartI2C
   0175 D0 03               728 	pop	ar3
   0177 D0 02               729 	pop	ar2
                            730 ;	i2c.h:138: Buffer[0] = 0;
                            731 ;	genPointerSet
                            732 ;	genNearPointerSet
                            733 ;	genDataPointerSet
   0179 75 32 00            734 	mov	_SendData_Buffer_1_1,#0x00
   017C 75 33 00            735 	mov	(_SendData_Buffer_1_1 + 1),#0x00
                            736 ;	i2c.h:139: Buffer[1] = 0;
                            737 ;	genPointerSet
                            738 ;	genNearPointerSet
                            739 ;	genDataPointerSet
   017F 75 34 00            740 	mov	(_SendData_Buffer_1_1 + 0x0002),#0x00
   0182 75 35 00            741 	mov	((_SendData_Buffer_1_1 + 0x0002) + 1),#0x00
                            742 ;	i2c.h:140: Buffer[2] = 0;
                            743 ;	genPointerSet
                            744 ;	genNearPointerSet
                            745 ;	genDataPointerSet
   0185 75 36 00            746 	mov	(_SendData_Buffer_1_1 + 0x0004),#0x00
   0188 75 37 00            747 	mov	((_SendData_Buffer_1_1 + 0x0004) + 1),#0x00
                            748 ;	i2c.h:141: Buffer[3] = 1;
                            749 ;	genPointerSet
                            750 ;	genNearPointerSet
                            751 ;	genDataPointerSet
   018B 75 38 01            752 	mov	(_SendData_Buffer_1_1 + 0x0006),#0x01
   018E 75 39 00            753 	mov	((_SendData_Buffer_1_1 + 0x0006) + 1),#0x00
                            754 ;	i2c.h:143: switch( Tom ) {
                            755 ;	genCmpLt
                            756 ;	genCmp
   0191 EB                  757 	mov	a,r3
                            758 ;	genIfxJump
   0192 30 E7 03            759 	jnb	acc.7,00122$
   0195 02 02 D6            760 	ljmp	00111$
   0198                     761 00122$:
                            762 ;	genCmpGt
                            763 ;	genCmp
   0198 C3                  764 	clr	c
   0199 74 09               765 	mov	a,#0x09
   019B 9A                  766 	subb	a,r2
                            767 ;	Peephole 159	avoided xrl during execution
   019C 74 80               768 	mov	a,#(0x00 ^ 0x80)
   019E 8B F0               769 	mov	b,r3
   01A0 63 F0 80            770 	xrl	b,#0x80
   01A3 95 F0               771 	subb	a,b
                            772 ;	genIfxJump
   01A5 50 03               773 	jnc	00123$
   01A7 02 02 D6            774 	ljmp	00111$
   01AA                     775 00123$:
                            776 ;	genJumpTab
   01AA EA                  777 	mov	a,r2
                            778 ;	Peephole 254	optimized left shift
   01AB 2A                  779 	add	a,r2
   01AC 2A                  780 	add	a,r2
   01AD 90 01 B1            781 	mov	dptr,#00124$
   01B0 73                  782 	jmp	@a+dptr
   01B1                     783 00124$:
   01B1 02 01 CF            784 	ljmp	00101$
   01B4 02 01 EA            785 	ljmp	00102$
   01B7 02 02 05            786 	ljmp	00103$
   01BA 02 02 20            787 	ljmp	00104$
   01BD 02 02 3B            788 	ljmp	00105$
   01C0 02 02 56            789 	ljmp	00106$
   01C3 02 02 70            790 	ljmp	00107$
   01C6 02 02 8A            791 	ljmp	00108$
   01C9 02 02 A4            792 	ljmp	00109$
   01CC 02 02 BE            793 	ljmp	00110$
                            794 ;	i2c.h:144: case 0: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 0; break;
   01CF                     795 00101$:
                            796 ;	genPointerSet
                            797 ;	genNearPointerSet
                            798 ;	genDataPointerSet
   01CF 75 3A 00            799 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   01D2 75 3B 00            800 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            801 ;	genPointerSet
                            802 ;	genNearPointerSet
                            803 ;	genDataPointerSet
   01D5 75 3C 00            804 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   01D8 75 3D 00            805 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            806 ;	genPointerSet
                            807 ;	genNearPointerSet
                            808 ;	genDataPointerSet
   01DB 75 3E 00            809 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   01DE 75 3F 00            810 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            811 ;	genPointerSet
                            812 ;	genNearPointerSet
                            813 ;	genDataPointerSet
   01E1 75 40 00            814 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   01E4 75 41 00            815 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   01E7 02 02 D6            816 	ljmp	00111$
                            817 ;	i2c.h:145: case 1: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 1; break;
   01EA                     818 00102$:
                            819 ;	genPointerSet
                            820 ;	genNearPointerSet
                            821 ;	genDataPointerSet
   01EA 75 3A 00            822 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   01ED 75 3B 00            823 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            824 ;	genPointerSet
                            825 ;	genNearPointerSet
                            826 ;	genDataPointerSet
   01F0 75 3C 00            827 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   01F3 75 3D 00            828 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            829 ;	genPointerSet
                            830 ;	genNearPointerSet
                            831 ;	genDataPointerSet
   01F6 75 3E 00            832 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   01F9 75 3F 00            833 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            834 ;	genPointerSet
                            835 ;	genNearPointerSet
                            836 ;	genDataPointerSet
   01FC 75 40 01            837 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   01FF 75 41 00            838 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   0202 02 02 D6            839 	ljmp	00111$
                            840 ;	i2c.h:146: case 2: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 1; Buffer[7] = 0; break;
   0205                     841 00103$:
                            842 ;	genPointerSet
                            843 ;	genNearPointerSet
                            844 ;	genDataPointerSet
   0205 75 3A 00            845 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   0208 75 3B 00            846 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            847 ;	genPointerSet
                            848 ;	genNearPointerSet
                            849 ;	genDataPointerSet
   020B 75 3C 00            850 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   020E 75 3D 00            851 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            852 ;	genPointerSet
                            853 ;	genNearPointerSet
                            854 ;	genDataPointerSet
   0211 75 3E 01            855 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
   0214 75 3F 00            856 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            857 ;	genPointerSet
                            858 ;	genNearPointerSet
                            859 ;	genDataPointerSet
   0217 75 40 00            860 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   021A 75 41 00            861 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   021D 02 02 D6            862 	ljmp	00111$
                            863 ;	i2c.h:147: case 3: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 1; Buffer[7] = 1; break;
   0220                     864 00104$:
                            865 ;	genPointerSet
                            866 ;	genNearPointerSet
                            867 ;	genDataPointerSet
   0220 75 3A 00            868 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   0223 75 3B 00            869 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            870 ;	genPointerSet
                            871 ;	genNearPointerSet
                            872 ;	genDataPointerSet
   0226 75 3C 00            873 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   0229 75 3D 00            874 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            875 ;	genPointerSet
                            876 ;	genNearPointerSet
                            877 ;	genDataPointerSet
   022C 75 3E 01            878 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
   022F 75 3F 00            879 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            880 ;	genPointerSet
                            881 ;	genNearPointerSet
                            882 ;	genDataPointerSet
   0232 75 40 01            883 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   0235 75 41 00            884 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   0238 02 02 D6            885 	ljmp	00111$
                            886 ;	i2c.h:148: case 4: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 0; Buffer[7] = 0; break;
   023B                     887 00105$:
                            888 ;	genPointerSet
                            889 ;	genNearPointerSet
                            890 ;	genDataPointerSet
   023B 75 3A 00            891 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   023E 75 3B 00            892 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            893 ;	genPointerSet
                            894 ;	genNearPointerSet
                            895 ;	genDataPointerSet
   0241 75 3C 01            896 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
   0244 75 3D 00            897 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            898 ;	genPointerSet
                            899 ;	genNearPointerSet
                            900 ;	genDataPointerSet
   0247 75 3E 00            901 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   024A 75 3F 00            902 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            903 ;	genPointerSet
                            904 ;	genNearPointerSet
                            905 ;	genDataPointerSet
   024D 75 40 00            906 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   0250 75 41 00            907 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
   0253 02 02 D6            908 	ljmp	00111$
                            909 ;	i2c.h:149: case 5: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 0; Buffer[7] = 1; break;
   0256                     910 00106$:
                            911 ;	genPointerSet
                            912 ;	genNearPointerSet
                            913 ;	genDataPointerSet
   0256 75 3A 00            914 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   0259 75 3B 00            915 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            916 ;	genPointerSet
                            917 ;	genNearPointerSet
                            918 ;	genDataPointerSet
   025C 75 3C 01            919 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
   025F 75 3D 00            920 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            921 ;	genPointerSet
                            922 ;	genNearPointerSet
                            923 ;	genDataPointerSet
   0262 75 3E 00            924 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   0265 75 3F 00            925 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            926 ;	genPointerSet
                            927 ;	genNearPointerSet
                            928 ;	genDataPointerSet
   0268 75 40 01            929 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   026B 75 41 00            930 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                            931 ;	i2c.h:150: case 6: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 1; Buffer[7] = 0; break;
                            932 ;	Peephole 112.b	changed ljmp to sjmp
   026E 80 66               933 	sjmp	00111$
   0270                     934 00107$:
                            935 ;	genPointerSet
                            936 ;	genNearPointerSet
                            937 ;	genDataPointerSet
   0270 75 3A 00            938 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   0273 75 3B 00            939 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            940 ;	genPointerSet
                            941 ;	genNearPointerSet
                            942 ;	genDataPointerSet
   0276 75 3C 01            943 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
   0279 75 3D 00            944 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            945 ;	genPointerSet
                            946 ;	genNearPointerSet
                            947 ;	genDataPointerSet
   027C 75 3E 01            948 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
   027F 75 3F 00            949 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            950 ;	genPointerSet
                            951 ;	genNearPointerSet
                            952 ;	genDataPointerSet
   0282 75 40 00            953 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   0285 75 41 00            954 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                            955 ;	i2c.h:151: case 7: Buffer[4] = 0; Buffer[5] = 1; Buffer[6] = 1; Buffer[7] = 1; break;
                            956 ;	Peephole 112.b	changed ljmp to sjmp
   0288 80 4C               957 	sjmp	00111$
   028A                     958 00108$:
                            959 ;	genPointerSet
                            960 ;	genNearPointerSet
                            961 ;	genDataPointerSet
   028A 75 3A 00            962 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   028D 75 3B 00            963 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            964 ;	genPointerSet
                            965 ;	genNearPointerSet
                            966 ;	genDataPointerSet
   0290 75 3C 01            967 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x01
   0293 75 3D 00            968 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            969 ;	genPointerSet
                            970 ;	genNearPointerSet
                            971 ;	genDataPointerSet
   0296 75 3E 01            972 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x01
   0299 75 3F 00            973 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            974 ;	genPointerSet
                            975 ;	genNearPointerSet
                            976 ;	genDataPointerSet
   029C 75 40 01            977 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   029F 75 41 00            978 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                            979 ;	i2c.h:152: case 8: Buffer[4] = 1; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 0; break;
                            980 ;	Peephole 112.b	changed ljmp to sjmp
   02A2 80 32               981 	sjmp	00111$
   02A4                     982 00109$:
                            983 ;	genPointerSet
                            984 ;	genNearPointerSet
                            985 ;	genDataPointerSet
   02A4 75 3A 01            986 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x01
   02A7 75 3B 00            987 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                            988 ;	genPointerSet
                            989 ;	genNearPointerSet
                            990 ;	genDataPointerSet
   02AA 75 3C 00            991 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   02AD 75 3D 00            992 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                            993 ;	genPointerSet
                            994 ;	genNearPointerSet
                            995 ;	genDataPointerSet
   02B0 75 3E 00            996 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   02B3 75 3F 00            997 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                            998 ;	genPointerSet
                            999 ;	genNearPointerSet
                           1000 ;	genDataPointerSet
   02B6 75 40 00           1001 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x00
   02B9 75 41 00           1002 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                           1003 ;	i2c.h:153: case 9: Buffer[4] = 0; Buffer[5] = 0; Buffer[6] = 0; Buffer[7] = 1; break;
                           1004 ;	Peephole 112.b	changed ljmp to sjmp
   02BC 80 18              1005 	sjmp	00111$
   02BE                    1006 00110$:
                           1007 ;	genPointerSet
                           1008 ;	genNearPointerSet
                           1009 ;	genDataPointerSet
   02BE 75 3A 00           1010 	mov	(_SendData_Buffer_1_1 + 0x0008),#0x00
   02C1 75 3B 00           1011 	mov	((_SendData_Buffer_1_1 + 0x0008) + 1),#0x00
                           1012 ;	genPointerSet
                           1013 ;	genNearPointerSet
                           1014 ;	genDataPointerSet
   02C4 75 3C 00           1015 	mov	(_SendData_Buffer_1_1 + 0x000a),#0x00
   02C7 75 3D 00           1016 	mov	((_SendData_Buffer_1_1 + 0x000a) + 1),#0x00
                           1017 ;	genPointerSet
                           1018 ;	genNearPointerSet
                           1019 ;	genDataPointerSet
   02CA 75 3E 00           1020 	mov	(_SendData_Buffer_1_1 + 0x000c),#0x00
   02CD 75 3F 00           1021 	mov	((_SendData_Buffer_1_1 + 0x000c) + 1),#0x00
                           1022 ;	genPointerSet
                           1023 ;	genNearPointerSet
                           1024 ;	genDataPointerSet
   02D0 75 40 01           1025 	mov	(_SendData_Buffer_1_1 + 0x000e),#0x01
   02D3 75 41 00           1026 	mov	((_SendData_Buffer_1_1 + 0x000e) + 1),#0x00
                           1027 ;	i2c.h:154: }
   02D6                    1028 00111$:
                           1029 ;	i2c.h:156: SendByte( Buffer );
                           1030 ;	genCall
                           1031 ;	Peephole 182.a	used 16 bit load of DPTR
   02D6 90 00 32           1032 	mov	dptr,#_SendData_Buffer_1_1
   02D9 75 F0 40           1033 	mov	b,#0x40
   02DC 12 00 6B           1034 	lcall	_SendByte
                           1035 ;	i2c.h:158: StopI2C();
                           1036 ;	genCall
   02DF 12 01 58           1037 	lcall	_StopI2C
                           1038 ;	i2c.h:161: for ( DelayCnt = 0; DelayCnt < 50000; DelayCnt++ ) {
                           1039 ;	genAssign
   02E2 7A 50              1040 	mov	r2,#0x50
   02E4 7B C3              1041 	mov	r3,#0xC3
   02E6                    1042 00114$:
                           1043 ;	i2c.h:162: Delay();
                           1044 ;	genCall
   02E6 C0 02              1045 	push	ar2
   02E8 C0 03              1046 	push	ar3
   02EA 12 00 64           1047 	lcall	_Delay
   02ED D0 03              1048 	pop	ar3
   02EF D0 02              1049 	pop	ar2
                           1050 ;	genMinus
                           1051 ;	genMinusDec
   02F1 1A                 1052 	dec	r2
   02F2 BA FF 01           1053 	cjne	r2,#0xff,00125$
   02F5 1B                 1054 	dec	r3
   02F6                    1055 00125$:
                           1056 ;	i2c.h:161: for ( DelayCnt = 0; DelayCnt < 50000; DelayCnt++ ) {
                           1057 ;	genIfx
   02F6 EA                 1058 	mov	a,r2
   02F7 4B                 1059 	orl	a,r3
                           1060 ;	genIfxJump
                           1061 ;	Peephole 108.b	removed ljmp by inverse jump logic
   02F8 70 EC              1062 	jnz	00114$
                           1063 ;	Peephole 300	removed redundant label 00126$
                           1064 ;	Peephole 300	removed redundant label 00115$
   02FA 22                 1065 	ret
                           1066 ;------------------------------------------------------------
                           1067 ;Allocation info for local variables in function 'recebe_ligacao'
                           1068 ;------------------------------------------------------------
                           1069 ;valor_lido                Allocated to registers r5 
                           1070 ;reading                   Allocated to registers r2 
                           1071 ;equipamento               Allocated to registers r3 
                           1072 ;comando                   Allocated to registers r4 
                           1073 ;liga                      Allocated to registers 
                           1074 ;i                         Allocated to registers r5 r6 
                           1075 ;liga                      Allocated to registers 
                           1076 ;------------------------------------------------------------
                           1077 ;	main2.c:20: void recebe_ligacao() {
                           1078 ;	-----------------------------------------
                           1079 ;	 function recebe_ligacao
                           1080 ;	-----------------------------------------
   02FB                    1081 _recebe_ligacao:
                           1082 ;	main2.c:22: char reading = 1;
                           1083 ;	genAssign
   02FB 7A 01              1084 	mov	r2,#0x01
                           1085 ;	main2.c:23: char equipamento = -1;
                           1086 ;	genAssign
   02FD 7B FF              1087 	mov	r3,#0xFF
                           1088 ;	main2.c:24: char comando =0;
                           1089 ;	genAssign
   02FF 7C 00              1090 	mov	r4,#0x00
                           1091 ;	main2.c:28: P0_0 = 1;
                           1092 ;	genAssign
   0301 D2 80              1093 	setb	_P0_0
                           1094 ;	main2.c:29: for (i=0;i<50000;i++){	
                           1095 ;	genAssign
   0303 7D 50              1096 	mov	r5,#0x50
   0305 7E C3              1097 	mov	r6,#0xC3
   0307                    1098 00146$:
                           1099 ;	main2.c:30: Delay();
                           1100 ;	genCall
   0307 C0 02              1101 	push	ar2
   0309 C0 03              1102 	push	ar3
   030B C0 04              1103 	push	ar4
   030D C0 05              1104 	push	ar5
   030F C0 06              1105 	push	ar6
   0311 12 00 64           1106 	lcall	_Delay
   0314 D0 06              1107 	pop	ar6
   0316 D0 05              1108 	pop	ar5
   0318 D0 04              1109 	pop	ar4
   031A D0 03              1110 	pop	ar3
   031C D0 02              1111 	pop	ar2
                           1112 ;	genMinus
                           1113 ;	genMinusDec
   031E 1D                 1114 	dec	r5
   031F BD FF 01           1115 	cjne	r5,#0xff,00173$
   0322 1E                 1116 	dec	r6
   0323                    1117 00173$:
                           1118 ;	main2.c:29: for (i=0;i<50000;i++){	
                           1119 ;	genIfx
   0323 ED                 1120 	mov	a,r5
   0324 4E                 1121 	orl	a,r6
                           1122 ;	genIfxJump
                           1123 ;	Peephole 108.b	removed ljmp by inverse jump logic
   0325 70 E0              1124 	jnz	00146$
                           1125 ;	Peephole 300	removed redundant label 00174$
                           1126 ;	main2.c:32: for (i=0;i<50000;i++){	
                           1127 ;	genAssign
   0327 7D 50              1128 	mov	r5,#0x50
   0329 7E C3              1129 	mov	r6,#0xC3
   032B                    1130 00149$:
                           1131 ;	main2.c:33: Delay();
                           1132 ;	genCall
   032B C0 02              1133 	push	ar2
   032D C0 03              1134 	push	ar3
   032F C0 04              1135 	push	ar4
   0331 C0 05              1136 	push	ar5
   0333 C0 06              1137 	push	ar6
   0335 12 00 64           1138 	lcall	_Delay
   0338 D0 06              1139 	pop	ar6
   033A D0 05              1140 	pop	ar5
   033C D0 04              1141 	pop	ar4
   033E D0 03              1142 	pop	ar3
   0340 D0 02              1143 	pop	ar2
                           1144 ;	genMinus
                           1145 ;	genMinusDec
   0342 1D                 1146 	dec	r5
   0343 BD FF 01           1147 	cjne	r5,#0xff,00175$
   0346 1E                 1148 	dec	r6
   0347                    1149 00175$:
                           1150 ;	main2.c:32: for (i=0;i<50000;i++){	
                           1151 ;	genIfx
   0347 ED                 1152 	mov	a,r5
   0348 4E                 1153 	orl	a,r6
                           1154 ;	genIfxJump
                           1155 ;	Peephole 108.b	removed ljmp by inverse jump logic
   0349 70 E0              1156 	jnz	00149$
                           1157 ;	Peephole 300	removed redundant label 00176$
                           1158 ;	main2.c:35: P0_0 = 0;
                           1159 ;	genAssign
   034B C2 80              1160 	clr	_P0_0
                           1161 ;	main2.c:36: Delay();
                           1162 ;	genCall
   034D C0 02              1163 	push	ar2
   034F C0 03              1164 	push	ar3
   0351 C0 04              1165 	push	ar4
   0353 12 00 64           1166 	lcall	_Delay
   0356 D0 04              1167 	pop	ar4
   0358 D0 03              1168 	pop	ar3
   035A D0 02              1169 	pop	ar2
                           1170 ;	main2.c:38: P0_1 = 1;
                           1171 ;	genAssign
   035C D2 81              1172 	setb	_P0_1
                           1173 ;	main2.c:39: P0_6=1; /* debug */
                           1174 ;	genAssign
   035E D2 86              1175 	setb	_P0_6
                           1176 ;	main2.c:40: while(reading) {
   0360                    1177 00116$:
                           1178 ;	genIfx
   0360 EA                 1179 	mov	a,r2
                           1180 ;	genIfxJump
   0361 70 03              1181 	jnz	00177$
   0363 02 03 D8           1182 	ljmp	00118$
   0366                    1183 00177$:
                           1184 ;	main2.c:41: P0_7=1; /* debug */
                           1185 ;	genAssign
   0366 D2 87              1186 	setb	_P0_7
                           1187 ;	main2.c:44: while(P1_4 != 1);
   0368                    1188 00101$:
                           1189 ;	genIfx
                           1190 ;	genIfxJump
                           1191 ;	Peephole 108.d	removed ljmp by inverse jump logic
   0368 30 94 FD           1192 	jnb	_P1_4,00101$
                           1193 ;	Peephole 300	removed redundant label 00178$
                           1194 ;	main2.c:45: P0_3=0; /* debug */
                           1195 ;	genAssign
   036B C2 83              1196 	clr	_P0_3
                           1197 ;	main2.c:46: valor_lido = 1 * P1_0 + 2 * P1_1 + 4 * P1_2 + 8 * P1_3;
                           1198 ;	genAssign
   036D E4                 1199 	clr	a
   036E A2 90              1200 	mov	c,_P1_0
   0370 33                 1201 	rlc	a
   0371 FD                 1202 	mov	r5,a
                           1203 ;	genAssign
   0372 E4                 1204 	clr	a
   0373 A2 91              1205 	mov	c,_P1_1
   0375 33                 1206 	rlc	a
                           1207 ;	genLeftShift
                           1208 ;	genLeftShiftLiteral
                           1209 ;	genlshOne
                           1210 ;	Peephole 105	removed redundant mov
                           1211 ;	genPlus
                           1212 ;	Peephole 204	removed redundant mov
   0376 25 E0              1213 	add	a,acc
   0378 FE                 1214 	mov	r6,a
                           1215 ;	Peephole 177.b	removed redundant mov
                           1216 ;	Peephole 236.a	used r5 instead of ar5
   0379 2D                 1217 	add	a,r5
   037A FD                 1218 	mov	r5,a
                           1219 ;	genAssign
   037B E4                 1220 	clr	a
   037C A2 92              1221 	mov	c,_P1_2
   037E 33                 1222 	rlc	a
                           1223 ;	genLeftShift
                           1224 ;	genLeftShiftLiteral
                           1225 ;	genlshOne
   037F FE                 1226 	mov	r6,a
                           1227 ;	Peephole 105	removed redundant mov
   0380 25 E0              1228 	add	a,acc
   0382 25 E0              1229 	add	a,acc
                           1230 ;	genPlus
   0384 FE                 1231 	mov	r6,a
                           1232 ;	Peephole 177.b	removed redundant mov
                           1233 ;	Peephole 236.a	used r5 instead of ar5
   0385 2D                 1234 	add	a,r5
   0386 FD                 1235 	mov	r5,a
                           1236 ;	genAssign
   0387 E4                 1237 	clr	a
   0388 A2 93              1238 	mov	c,_P1_3
   038A 33                 1239 	rlc	a
                           1240 ;	genLeftShift
                           1241 ;	genLeftShiftLiteral
                           1242 ;	genlshOne
   038B FE                 1243 	mov	r6,a
                           1244 ;	Peephole 105	removed redundant mov
   038C C4                 1245 	swap	a
   038D 03                 1246 	rr	a
   038E 54 F8              1247 	anl	a,#0xf8
                           1248 ;	genPlus
   0390 FE                 1249 	mov	r6,a
                           1250 ;	Peephole 177.b	removed redundant mov
                           1251 ;	Peephole 236.a	used r5 instead of ar5
   0391 2D                 1252 	add	a,r5
   0392 FD                 1253 	mov	r5,a
                           1254 ;	main2.c:48: if (valor_lido <= 9 && valor_lido > 0){
                           1255 ;	genCmpGt
                           1256 ;	genCmp
   0393 C3                 1257 	clr	c
                           1258 ;	Peephole 159	avoided xrl during execution
   0394 74 89              1259 	mov	a,#(0x09 ^ 0x80)
   0396 8D F0              1260 	mov	b,r5
   0398 63 F0 80           1261 	xrl	b,#0x80
   039B 95 F0              1262 	subb	a,b
                           1263 ;	genIfxJump
                           1264 ;	Peephole 112.b	changed ljmp to sjmp
                           1265 ;	Peephole 160.a	removed sjmp by inverse jump logic
                           1266 ;	genCmpGt
                           1267 ;	genCmp
   039D 40 11              1268 	jc	00113$
                           1269 ;	Peephole 300	removed redundant label 00179$
                           1270 ;	Peephole 256.a	removed redundant clr c
                           1271 ;	Peephole 159	avoided xrl during execution
   039F 74 80              1272 	mov	a,#(0x00 ^ 0x80)
   03A1 8D F0              1273 	mov	b,r5
   03A3 63 F0 80           1274 	xrl	b,#0x80
   03A6 95 F0              1275 	subb	a,b
                           1276 ;	genIfxJump
                           1277 ;	Peephole 108.a	removed ljmp by inverse jump logic
   03A8 50 06              1278 	jnc	00113$
                           1279 ;	Peephole 300	removed redundant label 00180$
                           1280 ;	main2.c:49: equipamento = valor_lido;
                           1281 ;	genAssign
   03AA 8D 03              1282 	mov	ar3,r5
                           1283 ;	main2.c:50: P0_4=0; /* debug */
                           1284 ;	genAssign
   03AC C2 84              1285 	clr	_P0_4
                           1286 ;	Peephole 112.b	changed ljmp to sjmp
   03AE 80 B0              1287 	sjmp	00116$
   03B0                    1288 00113$:
                           1289 ;	main2.c:53: if (equipamento != -1){
                           1290 ;	genCmpEq
                           1291 ;	gencjneshort
   03B0 BB FF 02           1292 	cjne	r3,#0xFF,00181$
                           1293 ;	Peephole 112.b	changed ljmp to sjmp
   03B3 80 AB              1294 	sjmp	00116$
   03B5                    1295 00181$:
                           1296 ;	main2.c:55: if (valor_lido == 11){
                           1297 ;	genCmpEq
                           1298 ;	gencjneshort
                           1299 ;	Peephole 112.b	changed ljmp to sjmp
                           1300 ;	Peephole 198.b	optimized misc jump sequence
   03B5 BD 0B 06           1301 	cjne	r5,#0x0B,00105$
                           1302 ;	Peephole 200.b	removed redundant sjmp
                           1303 ;	Peephole 300	removed redundant label 00182$
                           1304 ;	Peephole 300	removed redundant label 00183$
                           1305 ;	main2.c:56: reading = 0;
                           1306 ;	genAssign
   03B8 7A 00              1307 	mov	r2,#0x00
                           1308 ;	main2.c:57: comando = 1;
                           1309 ;	genAssign
   03BA 7C 01              1310 	mov	r4,#0x01
                           1311 ;	main2.c:58: P0_5=0; /* debug */
                           1312 ;	genAssign
   03BC C2 85              1313 	clr	_P0_5
   03BE                    1314 00105$:
                           1315 ;	main2.c:61: if (valor_lido == 12){
                           1316 ;	genCmpEq
                           1317 ;	gencjneshort
                           1318 ;	Peephole 112.b	changed ljmp to sjmp
                           1319 ;	Peephole 198.b	optimized misc jump sequence
   03BE BD 0C 06           1320 	cjne	r5,#0x0C,00107$
                           1321 ;	Peephole 200.b	removed redundant sjmp
                           1322 ;	Peephole 300	removed redundant label 00184$
                           1323 ;	Peephole 300	removed redundant label 00185$
                           1324 ;	main2.c:62: reading = 0;
                           1325 ;	genAssign
   03C1 7A 00              1326 	mov	r2,#0x00
                           1327 ;	main2.c:63: comando = 0;
                           1328 ;	genAssign
   03C3 7C 00              1329 	mov	r4,#0x00
                           1330 ;	main2.c:64: P0_5=0; /* debug */
                           1331 ;	genAssign
   03C5 C2 85              1332 	clr	_P0_5
   03C7                    1333 00107$:
                           1334 ;	main2.c:67: if (valor_lido == 10){
                           1335 ;	genCmpEq
                           1336 ;	gencjneshort
   03C7 BD 0A 02           1337 	cjne	r5,#0x0A,00186$
   03CA 80 03              1338 	sjmp	00187$
   03CC                    1339 00186$:
   03CC 02 03 60           1340 	ljmp	00116$
   03CF                    1341 00187$:
                           1342 ;	main2.c:68: reading = 0;
                           1343 ;	genAssign
   03CF 7A 00              1344 	mov	r2,#0x00
                           1345 ;	main2.c:69: comando = 2;
                           1346 ;	genAssign
   03D1 7C 02              1347 	mov	r4,#0x02
                           1348 ;	main2.c:70: P0_5=0; /* debug */
                           1349 ;	genAssign
   03D3 C2 85              1350 	clr	_P0_5
   03D5 02 03 60           1351 	ljmp	00116$
   03D8                    1352 00118$:
                           1353 ;	main2.c:78: if (comando == 2){
                           1354 ;	genCmpEq
                           1355 ;	gencjneshort
   03D8 BC 02 02           1356 	cjne	r4,#0x02,00188$
   03DB 80 03              1357 	sjmp	00189$
   03DD                    1358 00188$:
   03DD 02 04 B7           1359 	ljmp	00142$
   03E0                    1360 00189$:
                           1361 ;	main2.c:79: switch(equipamento) {
                           1362 ;	genCmpLt
                           1363 ;	genCmp
   03E0 EB                 1364 	mov	a,r3
                           1365 ;	genIfxJump
   03E1 30 E7 03           1366 	jnb	acc.7,00190$
   03E4 02 05 2E           1367 	ljmp	00143$
   03E7                    1368 00190$:
                           1369 ;	genCmpGt
                           1370 ;	genCmp
   03E7 C3                 1371 	clr	c
                           1372 ;	Peephole 159	avoided xrl during execution
   03E8 74 89              1373 	mov	a,#(0x09 ^ 0x80)
   03EA 8B F0              1374 	mov	b,r3
   03EC 63 F0 80           1375 	xrl	b,#0x80
   03EF 95 F0              1376 	subb	a,b
                           1377 ;	genIfxJump
   03F1 50 03              1378 	jnc	00191$
   03F3 02 05 2E           1379 	ljmp	00143$
   03F6                    1380 00191$:
                           1381 ;	genJumpTab
   03F6 EB                 1382 	mov	a,r3
                           1383 ;	Peephole 254	optimized left shift
   03F7 2B                 1384 	add	a,r3
   03F8 2B                 1385 	add	a,r3
   03F9 90 03 FD           1386 	mov	dptr,#00192$
   03FC 73                 1387 	jmp	@a+dptr
   03FD                    1388 00192$:
   03FD 02 04 B4           1389 	ljmp	00128$
   0400 02 04 1B           1390 	ljmp	00119$
   0403 02 04 2C           1391 	ljmp	00120$
   0406 02 04 3D           1392 	ljmp	00121$
   0409 02 04 4E           1393 	ljmp	00122$
   040C 02 04 5F           1394 	ljmp	00123$
   040F 02 04 70           1395 	ljmp	00124$
   0412 02 04 81           1396 	ljmp	00125$
   0415 02 04 92           1397 	ljmp	00126$
   0418 02 04 A3           1398 	ljmp	00127$
                           1399 ;	main2.c:80: case 1: SendData(EQUIPAMENTO_1);
   041B                    1400 00119$:
                           1401 ;	genCast
   041B E4                 1402 	clr	a
   041C A2 A0              1403 	mov	c,_P2_0
   041E 33                 1404 	rlc	a
   041F FA                 1405 	mov	r2,a
   0420 7D 00              1406 	mov	r5,#0x00
                           1407 ;	genCall
   0422 8A 82              1408 	mov	dpl,r2
   0424 8D 83              1409 	mov	dph,r5
   0426 12 01 6A           1410 	lcall	_SendData
                           1411 ;	main2.c:81: break;
   0429 02 05 2E           1412 	ljmp	00143$
                           1413 ;	main2.c:82: case 2: SendData(EQUIPAMENTO_2);
   042C                    1414 00120$:
                           1415 ;	genCast
   042C E4                 1416 	clr	a
   042D A2 A1              1417 	mov	c,_P2_1
   042F 33                 1418 	rlc	a
   0430 FA                 1419 	mov	r2,a
   0431 7D 00              1420 	mov	r5,#0x00
                           1421 ;	genCall
   0433 8A 82              1422 	mov	dpl,r2
   0435 8D 83              1423 	mov	dph,r5
   0437 12 01 6A           1424 	lcall	_SendData
                           1425 ;	main2.c:83: break;
   043A 02 05 2E           1426 	ljmp	00143$
                           1427 ;	main2.c:84: case 3: SendData(EQUIPAMENTO_3);
   043D                    1428 00121$:
                           1429 ;	genCast
   043D E4                 1430 	clr	a
   043E A2 A2              1431 	mov	c,_P2_2
   0440 33                 1432 	rlc	a
   0441 FA                 1433 	mov	r2,a
   0442 7D 00              1434 	mov	r5,#0x00
                           1435 ;	genCall
   0444 8A 82              1436 	mov	dpl,r2
   0446 8D 83              1437 	mov	dph,r5
   0448 12 01 6A           1438 	lcall	_SendData
                           1439 ;	main2.c:85: break;
   044B 02 05 2E           1440 	ljmp	00143$
                           1441 ;	main2.c:86: case 4: SendData(EQUIPAMENTO_4);
   044E                    1442 00122$:
                           1443 ;	genCast
   044E E4                 1444 	clr	a
   044F A2 A3              1445 	mov	c,_P2_3
   0451 33                 1446 	rlc	a
   0452 FA                 1447 	mov	r2,a
   0453 7D 00              1448 	mov	r5,#0x00
                           1449 ;	genCall
   0455 8A 82              1450 	mov	dpl,r2
   0457 8D 83              1451 	mov	dph,r5
   0459 12 01 6A           1452 	lcall	_SendData
                           1453 ;	main2.c:87: break;
   045C 02 05 2E           1454 	ljmp	00143$
                           1455 ;	main2.c:88: case 5: SendData(EQUIPAMENTO_5);
   045F                    1456 00123$:
                           1457 ;	genCast
   045F E4                 1458 	clr	a
   0460 A2 A4              1459 	mov	c,_P2_4
   0462 33                 1460 	rlc	a
   0463 FA                 1461 	mov	r2,a
   0464 7D 00              1462 	mov	r5,#0x00
                           1463 ;	genCall
   0466 8A 82              1464 	mov	dpl,r2
   0468 8D 83              1465 	mov	dph,r5
   046A 12 01 6A           1466 	lcall	_SendData
                           1467 ;	main2.c:89: break;
   046D 02 05 2E           1468 	ljmp	00143$
                           1469 ;	main2.c:90: case 6: SendData(EQUIPAMENTO_6);
   0470                    1470 00124$:
                           1471 ;	genCast
   0470 E4                 1472 	clr	a
   0471 A2 A5              1473 	mov	c,_P2_5
   0473 33                 1474 	rlc	a
   0474 FA                 1475 	mov	r2,a
   0475 7D 00              1476 	mov	r5,#0x00
                           1477 ;	genCall
   0477 8A 82              1478 	mov	dpl,r2
   0479 8D 83              1479 	mov	dph,r5
   047B 12 01 6A           1480 	lcall	_SendData
                           1481 ;	main2.c:91: break;
   047E 02 05 2E           1482 	ljmp	00143$
                           1483 ;	main2.c:92: case 7: SendData(EQUIPAMENTO_7);
   0481                    1484 00125$:
                           1485 ;	genCast
   0481 E4                 1486 	clr	a
   0482 A2 A6              1487 	mov	c,_P2_6
   0484 33                 1488 	rlc	a
   0485 FA                 1489 	mov	r2,a
   0486 7D 00              1490 	mov	r5,#0x00
                           1491 ;	genCall
   0488 8A 82              1492 	mov	dpl,r2
   048A 8D 83              1493 	mov	dph,r5
   048C 12 01 6A           1494 	lcall	_SendData
                           1495 ;	main2.c:93: break;
   048F 02 05 2E           1496 	ljmp	00143$
                           1497 ;	main2.c:94: case 8: SendData(EQUIPAMENTO_8);
   0492                    1498 00126$:
                           1499 ;	genCast
   0492 E4                 1500 	clr	a
   0493 A2 A7              1501 	mov	c,_P2_7
   0495 33                 1502 	rlc	a
   0496 FA                 1503 	mov	r2,a
   0497 7D 00              1504 	mov	r5,#0x00
                           1505 ;	genCall
   0499 8A 82              1506 	mov	dpl,r2
   049B 8D 83              1507 	mov	dph,r5
   049D 12 01 6A           1508 	lcall	_SendData
                           1509 ;	main2.c:95: break;
   04A0 02 05 2E           1510 	ljmp	00143$
                           1511 ;	main2.c:96: case 9: SendData(EQUIPAMENTO_9);
   04A3                    1512 00127$:
                           1513 ;	genCast
   04A3 E4                 1514 	clr	a
   04A4 A2 B7              1515 	mov	c,_P3_7
   04A6 33                 1516 	rlc	a
   04A7 FA                 1517 	mov	r2,a
   04A8 7D 00              1518 	mov	r5,#0x00
                           1519 ;	genCall
   04AA 8A 82              1520 	mov	dpl,r2
   04AC 8D 83              1521 	mov	dph,r5
   04AE 12 01 6A           1522 	lcall	_SendData
                           1523 ;	main2.c:97: break;
   04B1 02 05 2E           1524 	ljmp	00143$
                           1525 ;	main2.c:98: default: break;
   04B4                    1526 00128$:
                           1527 ;	main2.c:99: }	
   04B4 02 05 2E           1528 	ljmp	00143$
   04B7                    1529 00142$:
                           1530 ;	main2.c:104: P0_6=0; /* debug */
                           1531 ;	genAssign
   04B7 C2 86              1532 	clr	_P0_6
                           1533 ;	main2.c:105: switch(equipamento) {
                           1534 ;	genCmpLt
                           1535 ;	genCmp
   04B9 EB                 1536 	mov	a,r3
                           1537 ;	genIfxJump
   04BA 30 E7 03           1538 	jnb	acc.7,00193$
   04BD 02 05 2E           1539 	ljmp	00143$
   04C0                    1540 00193$:
                           1541 ;	genCmpGt
                           1542 ;	genCmp
   04C0 C3                 1543 	clr	c
                           1544 ;	Peephole 159	avoided xrl during execution
   04C1 74 89              1545 	mov	a,#(0x09 ^ 0x80)
   04C3 8B F0              1546 	mov	b,r3
   04C5 63 F0 80           1547 	xrl	b,#0x80
   04C8 95 F0              1548 	subb	a,b
                           1549 ;	genIfxJump
                           1550 ;	Peephole 112.b	changed ljmp to sjmp
                           1551 ;	Peephole 160.a	removed sjmp by inverse jump logic
   04CA 40 62              1552 	jc	00143$
                           1553 ;	Peephole 300	removed redundant label 00194$
                           1554 ;	genJumpTab
   04CC EB                 1555 	mov	a,r3
                           1556 ;	Peephole 254	optimized left shift
   04CD 2B                 1557 	add	a,r3
   04CE 2B                 1558 	add	a,r3
   04CF 90 04 D3           1559 	mov	dptr,#00195$
   04D2 73                 1560 	jmp	@a+dptr
   04D3                    1561 00195$:
   04D3 02 05 2E           1562 	ljmp	00139$
   04D6 02 04 F1           1563 	ljmp	00130$
   04D9 02 04 F8           1564 	ljmp	00131$
   04DC 02 04 FF           1565 	ljmp	00132$
   04DF 02 05 06           1566 	ljmp	00133$
   04E2 02 05 0D           1567 	ljmp	00134$
   04E5 02 05 14           1568 	ljmp	00135$
   04E8 02 05 1B           1569 	ljmp	00136$
   04EB 02 05 22           1570 	ljmp	00137$
   04EE 02 05 29           1571 	ljmp	00138$
                           1572 ;	main2.c:106: case 1: EQUIPAMENTO_1 = liga;
   04F1                    1573 00130$:
                           1574 ;	genAssign
   04F1 EC                 1575 	mov	a,r4
   04F2 24 FF              1576 	add	a,#0xff
   04F4 92 A0              1577 	mov	_P2_0,c
                           1578 ;	main2.c:107: break;
                           1579 ;	main2.c:108: case 2: EQUIPAMENTO_2 = liga;
                           1580 ;	Peephole 112.b	changed ljmp to sjmp
   04F6 80 36              1581 	sjmp	00143$
   04F8                    1582 00131$:
                           1583 ;	genAssign
   04F8 EC                 1584 	mov	a,r4
   04F9 24 FF              1585 	add	a,#0xff
   04FB 92 A1              1586 	mov	_P2_1,c
                           1587 ;	main2.c:109: break;
                           1588 ;	main2.c:110: case 3: EQUIPAMENTO_3 = liga;
                           1589 ;	Peephole 112.b	changed ljmp to sjmp
   04FD 80 2F              1590 	sjmp	00143$
   04FF                    1591 00132$:
                           1592 ;	genAssign
   04FF EC                 1593 	mov	a,r4
   0500 24 FF              1594 	add	a,#0xff
   0502 92 A2              1595 	mov	_P2_2,c
                           1596 ;	main2.c:111: break;
                           1597 ;	main2.c:112: case 4: EQUIPAMENTO_4 = liga;
                           1598 ;	Peephole 112.b	changed ljmp to sjmp
   0504 80 28              1599 	sjmp	00143$
   0506                    1600 00133$:
                           1601 ;	genAssign
   0506 EC                 1602 	mov	a,r4
   0507 24 FF              1603 	add	a,#0xff
   0509 92 A3              1604 	mov	_P2_3,c
                           1605 ;	main2.c:113: break;
                           1606 ;	main2.c:114: case 5: EQUIPAMENTO_5 = liga;
                           1607 ;	Peephole 112.b	changed ljmp to sjmp
   050B 80 21              1608 	sjmp	00143$
   050D                    1609 00134$:
                           1610 ;	genAssign
   050D EC                 1611 	mov	a,r4
   050E 24 FF              1612 	add	a,#0xff
   0510 92 A4              1613 	mov	_P2_4,c
                           1614 ;	main2.c:115: break;
                           1615 ;	main2.c:116: case 6: EQUIPAMENTO_6 = liga;
                           1616 ;	Peephole 112.b	changed ljmp to sjmp
   0512 80 1A              1617 	sjmp	00143$
   0514                    1618 00135$:
                           1619 ;	genAssign
   0514 EC                 1620 	mov	a,r4
   0515 24 FF              1621 	add	a,#0xff
   0517 92 A5              1622 	mov	_P2_5,c
                           1623 ;	main2.c:117: break;
                           1624 ;	main2.c:118: case 7: EQUIPAMENTO_7 = liga;
                           1625 ;	Peephole 112.b	changed ljmp to sjmp
   0519 80 13              1626 	sjmp	00143$
   051B                    1627 00136$:
                           1628 ;	genAssign
   051B EC                 1629 	mov	a,r4
   051C 24 FF              1630 	add	a,#0xff
   051E 92 A6              1631 	mov	_P2_6,c
                           1632 ;	main2.c:119: break;
                           1633 ;	main2.c:120: case 8: EQUIPAMENTO_8 = liga;
                           1634 ;	Peephole 112.b	changed ljmp to sjmp
   0520 80 0C              1635 	sjmp	00143$
   0522                    1636 00137$:
                           1637 ;	genAssign
   0522 EC                 1638 	mov	a,r4
   0523 24 FF              1639 	add	a,#0xff
   0525 92 A7              1640 	mov	_P2_7,c
                           1641 ;	main2.c:121: break;
                           1642 ;	main2.c:122: case 9: EQUIPAMENTO_9 = liga;
                           1643 ;	Peephole 112.b	changed ljmp to sjmp
   0527 80 05              1644 	sjmp	00143$
   0529                    1645 00138$:
                           1646 ;	genAssign
   0529 EC                 1647 	mov	a,r4
   052A 24 FF              1648 	add	a,#0xff
   052C 92 B7              1649 	mov	_P3_7,c
                           1650 ;	main2.c:123: break;
                           1651 ;	main2.c:124: default: break;
                           1652 ;	Peephole 112.b	changed ljmp to sjmp
                           1653 ;	main2.c:125: }
                           1654 ;	Peephole 200.b	removed redundant sjmp
   052E                    1655 00139$:
   052E                    1656 00143$:
                           1657 ;	main2.c:129: P0_1 = 0;
                           1658 ;	genAssign
   052E C2 81              1659 	clr	_P0_1
                           1660 ;	main2.c:130: P0_7=0; /* debug */
                           1661 ;	genAssign
   0530 C2 87              1662 	clr	_P0_7
                           1663 ;	Peephole 300	removed redundant label 00150$
   0532 22                 1664 	ret
                           1665 ;------------------------------------------------------------
                           1666 ;Allocation info for local variables in function 'faz_ligacao'
                           1667 ;------------------------------------------------------------
                           1668 ;------------------------------------------------------------
                           1669 ;	main2.c:133: void faz_ligacao(void){}
                           1670 ;	-----------------------------------------
                           1671 ;	 function faz_ligacao
                           1672 ;	-----------------------------------------
   0533                    1673 _faz_ligacao:
                           1674 ;	Peephole 300	removed redundant label 00101$
   0533 22                 1675 	ret
                           1676 ;------------------------------------------------------------
                           1677 ;Allocation info for local variables in function 'main'
                           1678 ;------------------------------------------------------------
                           1679 ;------------------------------------------------------------
                           1680 ;	main2.c:135: void main(void){
                           1681 ;	-----------------------------------------
                           1682 ;	 function main
                           1683 ;	-----------------------------------------
   0534                    1684 _main:
                           1685 ;	main2.c:137: EQUIPAMENTO_1 = 0;
                           1686 ;	genAssign
   0534 C2 A0              1687 	clr	_P2_0
                           1688 ;	main2.c:138: EQUIPAMENTO_2 = 0;
                           1689 ;	genAssign
   0536 C2 A1              1690 	clr	_P2_1
                           1691 ;	main2.c:139: EQUIPAMENTO_3 = 0;
                           1692 ;	genAssign
   0538 C2 A2              1693 	clr	_P2_2
                           1694 ;	main2.c:140: EQUIPAMENTO_4 = 0;
                           1695 ;	genAssign
   053A C2 A3              1696 	clr	_P2_3
                           1697 ;	main2.c:141: EQUIPAMENTO_5 = 0;
                           1698 ;	genAssign
   053C C2 A4              1699 	clr	_P2_4
                           1700 ;	main2.c:142: EQUIPAMENTO_6 = 0;
                           1701 ;	genAssign
   053E C2 A5              1702 	clr	_P2_5
                           1703 ;	main2.c:143: EQUIPAMENTO_7 = 0;
                           1704 ;	genAssign
   0540 C2 A6              1705 	clr	_P2_6
                           1706 ;	main2.c:144: EQUIPAMENTO_8 = 0;
                           1707 ;	genAssign
   0542 C2 A7              1708 	clr	_P2_7
                           1709 ;	main2.c:145: EQUIPAMENTO_9 = 0;
                           1710 ;	genAssign
   0544 C2 B7              1711 	clr	_P3_7
                           1712 ;	main2.c:146: P0_3=0; /* debug */
                           1713 ;	genAssign
   0546 C2 83              1714 	clr	_P0_3
                           1715 ;	main2.c:147: P0_4=0; /* debug */
                           1716 ;	genAssign
   0548 C2 84              1717 	clr	_P0_4
                           1718 ;	main2.c:148: P0_5=0; /* debug */
                           1719 ;	genAssign
   054A C2 85              1720 	clr	_P0_5
                           1721 ;	main2.c:149: P0_6=0; /* debug */
                           1722 ;	genAssign
   054C C2 86              1723 	clr	_P0_6
                           1724 ;	main2.c:150: P0_7=0; /* debug */
                           1725 ;	genAssign
   054E C2 87              1726 	clr	_P0_7
                           1727 ;	main2.c:152: P0_3 = 1; /* debug */
                           1728 ;	genAssign
   0550 D2 83              1729 	setb	_P0_3
                           1730 ;	main2.c:153: while (1) {
   0552                    1731 00105$:
                           1732 ;	main2.c:154: P0_4 = 1; /* debug */                            
                           1733 ;	genAssign
   0552 D2 84              1734 	setb	_P0_4
                           1735 ;	main2.c:155: while (P0_2 != 1);
   0554                    1736 00101$:
                           1737 ;	genIfx
                           1738 ;	genIfxJump
                           1739 ;	Peephole 108.d	removed ljmp by inverse jump logic
   0554 30 82 FD           1740 	jnb	_P0_2,00101$
                           1741 ;	Peephole 300	removed redundant label 00112$
                           1742 ;	main2.c:156: P0_5 = 1; /* debug */
                           1743 ;	genAssign
   0557 D2 85              1744 	setb	_P0_5
                           1745 ;	main2.c:157: recebe_ligacao();
                           1746 ;	genCall
   0559 12 02 FB           1747 	lcall	_recebe_ligacao
                           1748 ;	Peephole 112.b	changed ljmp to sjmp
   055C 80 F4              1749 	sjmp	00105$
                           1750 ;	Peephole 259.a	removed redundant label 00107$ and ret
                           1751 ;
                           1752 	.area CSEG    (CODE)
                           1753 	.area CONST   (CODE)
                           1754 	.area XINIT   (CODE)
