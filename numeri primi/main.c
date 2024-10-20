#include <stdio.h>

int main(void)
{
    int num;
    printf("Inserisci un numero: ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++);
    if(num%2==0) {
        printf("numero non primo\n");
    }
    else
        printf("numero primo\n");

}
