#include <stdio.h>
#include <stdlib.h> 

void insercion(int lista[], int n) {
    for (int i = 1; i < n; i++) { 
        int valor_actual = lista[i]; 
        int j = i - 1;

        while (j >= 0 && lista[j] > valor_actual) { 
            lista[j + 1] = lista[j]; 
            j--;
        }
        lista[j + 1] = valor_actual; 
    }
}

int main() {
    int n;
    printf("¿Cuántos números quieres ingresar? ");
    scanf("%d", &n); 

    if (n <= 0) {
        printf("Por favor, ingresa un número mayor que 0.\n");
        return 1; 
    }
    int *lista = (int *)malloc(n * sizeof(int)); 
    for (int i = 0; i < n; i++) {
        printf("Ingresa el número en la posición %d: ", i + 1);
        scanf("%d", &lista[i]); 
    }
    printf("Lista original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]); 
    }
    printf("\n");

    insercion(lista, n); 

    printf("Lista ordenada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]); 
    }
    printf("\n");
    free(lista);
    return 0; 
}
