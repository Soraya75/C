//Exercício de Recuperação de Energia: Crie uma função recuperar_energia que 
//simule a recuperação de energia do personagem após uma batalha. 
//Utilize um loop para aumentar gradualmente a energia do personagem até atingir o máximo permitido.
#include <stdio.h>

int recuperar (){
    int cemig;
    while (cemig <= 100){
        printf("Recuperando luz... (%d%%)\n" , cemig);
        cemig+=10;   
    }
    printf("Energia recuperada");
            return cemig;
}
int main(){
    recuperar();
    return 0;
}
