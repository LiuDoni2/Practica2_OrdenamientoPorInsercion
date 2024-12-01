def insercion(lista):
    for i in range(1, len(lista)): 
        valor_actual = lista[i]
        j = i - 1
        while j >= 0 and lista[j] > valor_actual:  
            lista[j + 1] = lista[j] 
            j -= 1
        lista[j + 1] = valor_actual  

print("Ordenamiento por Inserción - Insertion Sort")
n = int(input("Ingrese el número de elementos: "))  
lista = [int(input(f"Ingrese el elemento {k + 1}: ")) for k in range(n)]  

print("Lista original:", lista)
insercion(lista)
print("Lista ordenada:", lista)
