#include <stdio.h>
#include <stdbool.h> //Incluindo biblioteca para usa o tipo bool

int bombeiros(){
    bool mangueira = true;
    while (mangueira){
        printf("Aviso o SENAI está pegando fogo!! \n");
        mangueira = false;
    }
    return mangueira;
}
int main(){
    bombeiros();
    return 0;
}
