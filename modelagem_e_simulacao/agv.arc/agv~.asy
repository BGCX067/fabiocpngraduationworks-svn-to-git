SYSTYPE Process
UNITS Feet Seconds
SYSDEF UtilByAvail off RefCheck on debugger off warningMessages on report standard
FLAGS System NoColor
	Text NoColor Resources NoColor ResourceNames NoColor Queues NoColor QueueNames NoColor QueueAmounts NoColor
	Blocks NoColor BlockNames NoColor Labels NoColor Loads NoColor
PROCDEF
PROC name P_configuracao 0 traf Infinite nextproc die
PROC name P_P1 0 traf Infinite nextproc die
PROC name P_P2 0 traf Infinite nextproc die
PROC name P_P3 0 traf Infinite nextproc die
LDTYPE name L_p1 0
	title "Produto1"
 template Feet
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
LDTYPE name L_p2 0
	title "Produto2"
 template Feet
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
LDTYPE name L_p3 0
 picpos begx -84 begy 31 endx -83 endy 31
	title "Produto3"
 template Feet
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
LDTYPE name L_incial 0
 template Feet
310 17
2 2 0 1 1 none
1 1 1 1 1 0 0
end
		create con 5 Seconds stream stream_L_incial_1 First P_configuracao 0 Limit 1
RSRC name r_Maquina1 0 cap 1 prtime con 5 Seconds stream stream_r_Maquina1_1
 dis 0 picpos begx -66 begy 56 endx -65 endy 56
 UserDef template Feet
310 17
2 2 0 1 1 none
4 4 4 4 4 0 0
end

RSRC name r_Maquina2 0 cap 1 prtime con 5 Seconds stream stream_r_Maquina2_1
 dis 0 picpos begx -49 begy 56 endx -48 endy 56
 UserDef template Feet
310 17
2 2 0 1 1 none
4 4 4 4 4 0 0
end

RSRC name r_Maquina3 0 cap 1 prtime con 5 Seconds stream stream_r_Maquina3_1
 dis 0 picpos begx -33 begy 56 endx -32 endy 56
 UserDef template Feet
310 17
2 2 0 1 1 none
4 4 4 4 4 0 0
end

QUEUE name QE 0 cap 1
	title "Fila de Entrada"
dis 0 Stacking OTT_LDDISP
	picpos begx -85 begy 33 endx -84 endy 33
 UserDef template Feet
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end
QUEUE name QF 0 cap 1
dis 0 Stacking OTT_LDDISP
	picpos begx -14 begy 33 endx -13 endy 33
 UserDef template Feet
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end
QUEUE name qE_Maq1 0 cap 1
dis 0 Stacking OTT_LDDISP
	picpos begx -66 begy 52 endx -65 endy 52
 UserDef template Feet
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end
QUEUE name qE_Maq2 0 cap 1
dis 0 Stacking OTT_LDDISP
	picpos begx -49 begy 52 endx -48 endy 52
 UserDef template Feet
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end
QUEUE name qE_Maq3 0 cap 1
dis 0 Stacking OTT_LDDISP
	picpos begx -33 begy 52 endx -32 endy 52
 UserDef template Feet
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end
QUEUE name q1 0 cap 1
dis 0 Stacking OTT_LDDISP
	picpos begx -16 begy 34 endx -15 endy 34
 UserDef template Feet
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end
QUEUE name q2 0 cap 1
dis 0 Stacking OTT_LDDISP
	picpos begx -16 begy 33 endx -15 endy 33
 UserDef template Feet
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end
QUEUE name q3 0 cap 1
dis 0 Stacking OTT_LDDISP
	picpos begx -16 begy 31 endx -15 endy 31
 UserDef template Feet
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end
ATT name t_P1M1 0 type Time
ATT name t_P1M2 0 type Time
ATT name t_P2M1 0 type Time
ATT name t_P2M3 0 type Time
ATT name t_P3M2 0 type Time
ATT name t_P3M3 0 type Time
VAR name Flag_reserva_M1 0 type Integer
VAR name Flag_reserva_M2 0 type Integer
VAR name Flag_reserva_M3 0 type Integer
RNSTREAM stream0 0 type CMRG flags 1
	cmrgseed 1 12345 12345 12345 12345 12345 12345
RNSTREAM stream_r_Maquina1_1 0 type CMRG flags 1
	title "Generated automatically for r_Maquina1"
	cmrgseed 1 3692455944 1366884236 2968912127 335948734 4161675175 475798818
RNSTREAM stream_r_Maquina2_1 0 type CMRG flags 1
	title "Generated automatically for r_Maquina2"
	cmrgseed 1 1015873554 1310354410 2249465273 994084013 2912484720 3876682925
RNSTREAM stream_r_Maquina3_1 0 type CMRG flags 1
	title "Generated automatically for r_Maquina3"
	cmrgseed 1 2338701263 1119171942 2570676563 317077452 3194180850 618832124
RNSTREAM stream_L_incial_1 0 type CMRG flags 1
	title "Generated automatically for L_incial"
	cmrgseed 1 1597262096 3906379055 3312112953 1016013135 4099474108 275305423
RNSTATE 97147054 3131372450 829345164 3691032523 3006063034 4259826321
SFileBegin	name code.m
begin P_configuracao arriving procedure

	set Flag_reserva_M1 to 0 
	set Flag_reserva_M2 to 0 
	set Flag_reserva_M3 to 0
	
/*sequencia de producao e tamanhos de lotes*/
	while 1=1
	begin
		if Space current <= 10 then
		begin
			create 5 loads of load type L_p3 to P_P3		
			create 2 loads of load type L_p1 to P_P1
			create 3 loads of load type L_p2 to P_P2			
		end
		wait for 1.0 min
	end
end	
	
	
begin P_P1 arriving procedure	
	move into QE /*Joga para fila de entrada*/
    
    while Flag_reserva_M1 = 1 do 
    begin
        wait for 0.1 sec
        /*não faz nada enquanto maquina 1 em uso*/
   	end	
   	
    set Flag_reserva_M1 to 1 /*Se maquina um desocupada tornar ela ocupada*/
    
    move into agv1:cp_Entrada /*move de cp_ para a cp_Entrada */
    travel to agv1:cp_Maq1 
    move into qE_Maq1 
    use r_Maquina1 for 2.0 min
    
    while Flag_reserva_M2 = 1 do
    begin
        wait for 0.1 sec
        /*não faz nada enquanto maquina 2 em uso*/
    end
    set Flag_reserva_M2 to 1
    move into agv1:cp_Maq1
    
    set Flag_reserva_M1 to 0 
    travel to agv1:cp_Maq2
    move into qE_Maq2
    use r_Maquina2 for 1.5 min
    
    move into agv1:cp_Maq2
    
    travel to agv1:cp_Saisa
    set Flag_reserva_M2 to 0
    move into q1
    move into QF
    send to die
end
	
begin P_P2 arriving procedure	
	move into QE /*Joga para fila de entrada*/
    
    while Flag_reserva_M1 = 1 do 
    begin
        wait for 0.1 sec
        /*não faz nada enquanto maquina 1 em uso*/
   	end	
   	
    set Flag_reserva_M1 to 1 /*Se maquina um desocupada tornar ela ocupada*/
    move into agv1:cp_Entrada /*move de cp_ para a cp_Entrada */
    travel to agv1:cp_Maq1 
    move into qE_Maq1 
    use r_Maquina1 for 3.0 min
    
    while Flag_reserva_M3 = 1 do
    begin
        wait for 0.1 sec
        /*não faz nada enquanto maquina 2 em uso*/
    end
    set Flag_reserva_M3 to 1
    move into agv1:cp_Maq1
    
    set Flag_reserva_M1 to 0 
    travel to agv1:cp_Maq3
    move into qE_Maq3
    use r_Maquina3 for 4.0 min
    
    move into agv1:cp_Maq3
    
    travel to agv1:cp_Saisa
    set Flag_reserva_M3 to 0
    move into q2
    move into QF
    send to die
end

begin P_P3 arriving procedure	
	move into QE /*Joga para fila de entrada*/
    
    while Flag_reserva_M2 = 1 do 
    begin
        wait for 0.1 sec
        /*não faz nada enquanto maquina 1 em uso*/
   	end	
   	
    set Flag_reserva_M2 to 1 /*Se maquina um desocupada tornar ela ocupada*/
    move into agv1:cp_Entrada /*move de cp_ para a cp_Entrada */
    travel to agv1:cp_Maq2 
    move into qE_Maq2 
    use r_Maquina2 for 2.5 min
    
    while Flag_reserva_M3 = 1 do
    begin
        wait for 0.1 sec
        /*não faz nada enquanto maquina 2 em uso*/
    end
    set Flag_reserva_M3 to 1
    move into agv1:cp_Maq2
    
    set Flag_reserva_M2 to 0 
    travel to agv1:cp_Maq3
    move into qE_Maq3
    use r_Maquina3 for 1.0 min
    
    move into agv1:cp_Maq3
    
    travel to agv1:cp_Saisa
    set Flag_reserva_M3 to 0
    move into q3
    move into QF
    send to die
end
	
	
	




#@!
