Proceso productoVectores
	Definir long, i, pPunto Como Entero;
    Definir vector1, vector2 Como Real;
    
    Escribir "Digite la longitud de los vectores:";
    Leer long;
	
    Dimensionar vector1[5];
    Dimensionar vector2[5];
	
    Escribir "Digite los elementos del primer vector:";
    Para i <- 1 Hasta long Hacer
        Escribir "En la posicion ", i, ":";
        Leer vector1[i];
    FinPara
	
    Escribir "Digite los elementos del segundo vector:";
    Para i <- 1 Hasta long Hacer
        Escribir "En la posicion ", i, ":";
        Leer vector2[i];
    FinPara
    
    productoPunto <- 0;
    Para i <- 1 Hasta long Hacer
        pPunto <- pPunto + vector1[i] * vector2[i];
    FinPara
    
    Escribir "El producto punto de ambos vectores es de: ", pPunto;
	
FinProceso