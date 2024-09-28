Algoritmo Ejercicio8
	//Definir variables
	Definir Num_ident1, Num_ident2, Num_ident3, Num_aux Como Entero
	Definir Tiemp_repar1, Tiemp_repar2, Tiemp_repar3, Tiemp_aux Como Entero
	Definir opc_1, opc_2, opc_3, opc_Aux Como Entero
	Definir Tmp_tot, promedio Como Entero
	
	//Entrada
	Escribir "************ PC Nº1 ***********"
	Escribir "INGRESAR:"	
	Escribir "Nº de indentificación: " Sin Saltar
	Leer Num_ident1
	Escribir "Tiempo de repacion (exp. en min.): " Sin Saltar
	Leer Tiemp_repar1
	Escribir "RESOLVER:"
	Escribir "1. Problema de Hardware"
	Escribir "2. Problema de Software"
	Leer opc_1
	
	Escribir "************ PC Nº2 ***********"
	Escribir "INGRESAR:"	
	Escribir "Nº de indentificación: " Sin Saltar
	Leer Num_aux
	Escribir "Tiempo de repacion (exp. en min.): " Sin Saltar
	Leer Tiemp_aux
	Escribir "RESOLVER:"
	Escribir "1. Problema de Hardware"
	Escribir "2. Problema de Software"
	Leer opc_2
	
	//Proceso 
	Si Tiemp_aux > Tiemp_repar1 Entonces
		Tiemp_repar2 = Tiemp_repar1
		Num_ident2 = Num_ident1
		
		Tiemp_repar1 = Tiemp_aux
		Num_ident1 = Num_aux
	SiNo
		Tiemp_repar2 = Tiemp_aux
		Num_ident2 = Num_aux
	Fin Si
	
	//Entrada
	Escribir "************ PC Nº3 ***********"
	Escribir "INGRESAR:"	
	Escribir "Nº de indentificación: " Sin Saltar
	Leer Num_aux
	Escribir "Tiempo de repacion (exp. en min.): " Sin Saltar
	Leer Tiemp_aux
	Escribir "RESOLVER:"
	Escribir "1. Problema de Hardware"
	Escribir "2. Problema de Software"
	Leer opc_3
	
	//Proceso 
	Si Tiemp_aux > Tiemp_repar1 Entonces
		Tiemp_repar3 = Tiemp_repar2
		Num_ident3 = Num_ident2
		Tiemp_repar2 = Tiemp_repar1
		Num_ident2 = Num_ident1
		Tiemp_repar1 = Tiemp_aux
		Num_ident1 = Num_aux
	SiNo 
		Si Tiemp_aux > Tiemp_repar2 Entonces
			Tiemp_repar3 = Tiemp_repar2
			Num_ident3 = Num_ident2
			Tiemp_repar2 = Tiemp_aux
			Num_ident2 = Num_aux
		SiNo
			Tiemp_repar3 = Tiemp_aux
			Num_ident3 = Num_aux
		Fin Si
	Fin Si
	
	Tmp_tot = Tiemp_repar1 + Tiemp_repar2 + Tiemp_repar3
	promedio = Tmp_tot / 3
	
	//Salida
	Escribir "El tiempo total de las tares de mantenimiento es: ",Tmp_tot," minutos."
	
	Si Tiemp_repar1 <> Tiemp_repar2 Entonces
		Escribir "PC con mayor tiempo de mantenimiento es:"
		Escribir "Nº de idenf.: ",Num_ident1," con ",Tiemp_repar1," minutos"
		Si opc_1 = 1 Entonces
			Escribir " Problema de Hardware"
		Fin Si
		Si Tiemp_repar2 <> Tiemp_repar3 Entonces
			Escribir "PC con mayor tiempo de mantenimiento es:"
			Escribir "Nº de idenf.: ",Num_ident2," con ",Tiemp_repar2," minutos"
			Si opc_2 = 1 Entonces
				Escribir " Problema de Hardware"
			Fin Si
			Si Tiemp_repar1 <> Tiemp_repar3 Entonces
				Escribir "PC con mayor tiempo de mantenimiento es:"
				Escribir "Nº de idenf.: ",Num_ident3," con ",Tiemp_repar3," minutos"
				Si opc_3 = 1 Entonces
					Escribir " Problema de Hardware"
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	
	Escribir "Tiempo promedio de mantenimiento: ",promedio
	
FinAlgoritmo
