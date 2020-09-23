#include<stdio.h>
#include<stdlib.h>

int main(){
    int op;
    do{
        printf("1) Capturar enteros\n");
        printf("2) Mostar cadena n veces\n");
        printf("3) Agregar personaje\n");
        printf("0) Salir\n");
        scanf("%i",&op);
        fflush(stdin);

    }while (op !='0');
    return 0;
}