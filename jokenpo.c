#include <stdio.h>

int main(){
    int jog1 = 0;
    int jog2 = 0;
    int nv1 = 0;
    int nv2 = 0;
    int npat = 0;
    int wim = 0;
    do{
        int wim = 
        puts("");
    }while((jog1 - jog2) == 2){
        puts("PLACAR");
        printf("Jogador1: %i, Jogador2: %i, Empate: %i\n", nv1, nv2, npat);
        do{
            puts("Jogador numero 1 escolha sua arma!!! : \n 1 = Pedra \n 2 = Papel \n 3 = Tesoura");
            scanf (" %d", &jog1);
        }while((jog1 != 1) && (jog1 != 2) && (jog1 != 3));

        do{
            puts("Jogador numero 2 escolha sua arma!!! : \n 1 = Pedra \n 2 = Papel \n 3 = Tesoura");
            scanf (" %d", &jog2);
        }while((jog2 != 1) && (jog2 != 2) && (jog2 != 3));
    
    if(jog1 == jog2){
       puts("empate");
       npat += 1;
    }else if(((jog1 == 1) && (jog2 == 3))||
            ((jog1 == 2) && (jog2 == 1))||
            ((jog1 == 3) && (jog2 == 2))){
        puts ("Vitória do Jogador 1");
        nv1 += 1;
    }else{
        puts ("Vitória do Jogador 2");
        nv2 += 1;
    };
    };
}