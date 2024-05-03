Proceso sumPares
	definir totalsum, num como entero;
	totalsum <- 0;
	num <- 100;
	Mientras num <= 200 hacer
		si num %2 =0 Entonces
			totalsum <- totalsum +  num;
		FinSi
		num <- num +1;
	FinMientras
	Escribir "La suma de los numeros pares que se encuentran entre 100 y 200 es de: ", totalsum;
FinProceso