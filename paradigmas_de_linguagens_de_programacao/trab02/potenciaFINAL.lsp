; Segundo Trabalho de Paradigmas de Linguagem de Programacao - Turma A
; Alunos:
;	 Hugo Poloni Amancio da Silva,       RA: 254150
;	 Fabio Cassarotti Parronchi Navarro, RA: 254371
;
; Programa para calcular potencia
; Sintaxe de uso:
;		 Iterativo: (potenciaI base expoente)
;		 Recursivo: (potenciaR base expoente)
;
;		 Restricoes: base -> numero real
;			     expoente -> numero natural


(defun potenciaR (base expoente)                 ; Funcao recursiva
  (cond                                          ; Verifica as condicoes
    
    ((> expoente 0)                              ; Caso o expoente seja positivo
    	(* base                                  ;  Multiplica a base pelo
		(potenciaR base (1- expoente) )) ;  resultado da chamada recursiva
	)
   
    ((< expoente 0)                     ; Caso o expoente seja negativo
    	(if (zerop base)                ;  Verifica se a base eh igual a zero
		nil                     ;  Caso a base seja zero retorna nil para funcao invalida
		(/ (potenciaR base (1+ expoente)) ; Caso a base seja diferente de zero, realiza
		     base                         ; uma divisao de uma chamada recursiva pela base
		)	
	)
    )
    
    ((zerop expoente)      ; Caso o expoente seja zero, retorna um
    		     1
    )
  )
)



(defun potenciaI (base expoente)
  (cond
  
    ((> expoente 0)             ;Caso o expoente seja positivo, retorna a multiplicacao da base
    	(let ((result 1))       ;por ela mesma (expoente) vezes
		(do ((cont expoente (1- cont))) 
			((zerop cont) result)  
				(setq result (* result base))
		)
	)
    )
	
    ((< expoente 0)                    ;Caso o expoente seja negativo e a base nula, retorna nil
    	(if (zerop base)               ; para funcao invalida
	               nil             ;Caso o expoente seja negativo e a base diferente de zero,
			  (let ((result 1))                     ;realiza a divisao 
			  	(do ((cont expoente (1+ cont))) ;a divisao do valor temporario
					((zerop cont) result)   ;pela base (-expoente) vezes
						(setq result (/ result base))
				)
			  )
	
	)    
    )
    
    ((zerop expoente)      ;Caso o expoente seja zero, a funcao retorna um
    		     1
    )
    
  )
)
