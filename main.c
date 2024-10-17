#include <stdio.h>

int main(void) {
    int numero;
    float risulato;
    printf("digitare un numero intero: ");
    scanf("%d", &numero);
    for(int i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            printf("%d ", i);
        }
    }

}
