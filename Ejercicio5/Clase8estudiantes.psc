Proceso Clase8estudiantes
	Definir n, notas, suma, aprobados, reprobados como entero;
	definir promedio como real;
	n <- 1;
	suma <- 0;
	aprobados <- 0;
	reprobados <- 0;
	Mientras n <= 8 Hacer
		Escribir "Digite la nota del estudiante #", n;
		Leer notas;
		Si notas >= 0 y notas <= 100 Entonces
			suma <- suma+notas;
			Si notas >= 70 Entonces
				aprobados <- aprobados +1;
			SiNo
				reprobados <- reprobados +1;
				
			FinSi
			n <- n+1;
		SiNo
			Escribir "Digite una valida...";
		FinSi
	FinMientras
	promedio <- suma/8;
	Escribir "La cantidad de alumnos aprobados es de: ", aprobados;
	Escribir "La cantidad de alumnos reprobados es de: ", reprobados;
	Escribir "El promedio fue de: ", promedio;
FinProceso