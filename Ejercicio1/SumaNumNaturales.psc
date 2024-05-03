Proceso SumaNumNaturales
	Definir numN, sumaT, n Como Entero;
	Escribir "Digite un numero: ";
	Leer numN;
	sumaT <-0;
	Para n <- 1 Hasta numN Con Paso 1 Hacer
		sumaT<- sumaT + n;
	FinPara
	Escribir "La suma de todos los numeros desde 1 hasta", " ", numN, " ", "es", " ", sumaT;
	
FinProceso