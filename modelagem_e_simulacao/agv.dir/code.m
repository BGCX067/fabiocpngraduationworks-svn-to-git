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
	
	
	




