//Exercício de Compra de Itens: 
//Escreva uma função comprar_itens que não aceite parâmetros e retorne o 
//número de itens comprados pelo programador, com base em um limite pré-definido.
#include <stdio.h>

int compra_itens (){
int limite_itens = 3;
        return limite_itens;
}

int main(){
    printf("Exercicio 2 : \n")
    printf("Itens comprados:  %d\n" , compra_itens());
    return 0;
 }
