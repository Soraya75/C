//Exercício de Uso de Habilidades: Implemente uma função usar_habilidade que simule o uso de uma
//habilidade especial pelo personagem do jogador durante a batalha.
// Utilize um loop para permitir que o jogador use a habilidade várias vezes antes de retornar à batalha.

#include <stdio.h>

char habilidade (){
    char  aceitar = 's';

    while (aceitar == 's'){
        printf("Deseja usar habilidade? \n");
        scanf("%s" , &aceitar);
        printf("Você usa habilidade!")
    }
    return aceitar;
}
int main(){
    habilidade();
    return 0:
}
