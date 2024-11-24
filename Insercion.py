def insercion(lista):
    for i in range(1, len(lista)):
        clave = lista[i]  
        j = i - 1
        while j >= 0 and lista[j] > clave:
            lista[j + 1] = lista[j]
            j -= 1
        lista[j + 1] = clave 
        print(f"Después de la inserción {i}: {lista}")

print("Ordenamiento por Inserción - Insertion Sort")
n = int(input("Ingrese el número de elementos: "))
lista = [int(input(f"Ingrese el número en la posición {k + 1}: ")) for k in range(n)]

print("Lista original:", lista)
insercion(lista)
print("Lista ordenada:", lista)
