Algoritmo OrdenamientoInsercion
	Dimensionar lista(5)
	
	Para i <- 1 Hasta 5 Hacer
		Escribir 'Ingresa el número en la posición ', i, ': '
		Leer lista[i]
	FinPara

	Escribir 'Lista original:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]

	OrdenarInsercion(lista, 5)

	Escribir 'Lista ordenada:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
FinAlgoritmo

SubProceso OrdenarInsercion(lista, n)
	Definir i, j, valor_actual Como Entero
	
	Para i <- 2 Hasta n Hacer
		valor_actual <- lista[i]
		j <- i - 1

		Mientras j > 0 Y lista[j] > valor_actual Hacer
			lista[j + 1] <- lista[j]
			j <- j - 1
		FinMientras

		lista[j + 1] <- valor_actual
	FinPara
FinSubProceso
