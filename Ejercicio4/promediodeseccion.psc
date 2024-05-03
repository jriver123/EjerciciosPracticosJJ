Proceso promediodeseccion
    Definir total, notas, promedio Como Real;
    Definir contador Como Entero;
    total <- 0;
    contador <- 1;
    Mientras contador <= 10 Hacer
        Escribir "Digite la nota del estudiante", " ", contador, ":";
        Leer notas;
        Si notas >= 0 Y notas <= 100 Entonces
            total <- total + notas;
            contador <- contador + 1;
        Sino
            Escribir "Ingrese una nota valida entre 0 y 100...";
        FinSi
    FinMientras
    promedio <- total / 10;
    Escribir "El promedio general de la sección es :", " ", promedio;
FinProceso