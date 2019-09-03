#define XPAINT_FULL
#include "xpaint.h"
int largura = 500;
int altura = 500;
int espessura = 15;
int espessura1 = 10;

void cor_preto(){
    x_set_color(x_make_color(58,50,48,250));
}
void cor_branco(){
    x_set_color(x_make_color(231,231,231,250));
}
void cor_azul(){
    x_set_color(x_make_color(5,113,190,250));
}
void cor_vermelho(){
    x_set_color(x_make_color(198,52,9,250));
}
void corpo(){
    cor_preto();
    x_pen_set_thick(espessura);
    x_pen_set_pos(largura/3, altura/3);
    x_pen_rotate(0);
    x_pen_walk(190);
    x_pen_rotate(90);
    for(int i = 1; i <= 60; i++){
        x_pen_rotate(3);
        x_pen_walk(5);
    }
    x_pen_walk(150);
    for(int i = 1; i <= 30; i++){
        x_pen_rotate(3);
        x_pen_walk(2);
    }
    x_pen_walk(115);
    for(int i = 1; i <= 30; i++){
        x_pen_rotate(3);
        x_pen_walk(2);
    }
    x_pen_walk(153);
}
void perna(){
    cor_preto();
    x_pen_set_thick(espessura);
    x_pen_set_pos(largura/3-1, altura/3+25);
    x_pen_rotate(180);
    for(int i = 1; i <= 30; i++){
        x_pen_rotate(3);
        x_pen_walk(2);
    }
    x_pen_walk(140);
    for(int i = 1; i <= 30; i++){
        x_pen_rotate(3);
        x_pen_walk(2);
    }
    x_pen_walk(20);
    for(int i = 1; i <= 20; i++){
        x_pen_rotate(3);
        x_pen_walk(2);
    }
    /*esquerda /\
               ||
      direita  \/ */
    x_pen_set_pos(largura/2+105, altura/3+25);
    x_pen_rotate(-60);
    for(int i = 1; i <= 30; i++){
        x_pen_rotate(-3);
        x_pen_walk(2);
    }
    x_pen_walk(140);
    for(int i = 1; i <= 30; i++){
        x_pen_rotate(-3);
        x_pen_walk(2);
    }
    x_pen_walk(20);
    for(int i = 1; i <= 20; i++){
        x_pen_rotate(-3);
        x_pen_walk(2);
    }
    x_pen_set_pos(largura/2-30, altura/2+110);
    x_pen_rotate(150);
    x_pen_walk(15);
    for(int i = 1; i <= 30; i++){
        x_pen_rotate(3);
        x_pen_walk(2);
    }
    x_pen_walk(5);
    for(int i = 1; i <= 30; i++){
        x_pen_rotate(3);
        x_pen_walk(2);
    }
    x_pen_walk(20);
}
void skim_peito(){
    cor_azul();
    x_pen_rotate(90);
    x_pen_set_thick(espessura1);
    x_pen_set_pos(largura/2 + 50, altura/3 + 30);
    x_pen_walk(80);
    x_pen_set_pos(largura/2 + 50, altura/3 + 60);
    x_pen_walk(80);
    x_pen_set_pos(largura/2 + 50, altura/3 + 90);
    x_pen_walk(80);
    cor_preto();
    x_pen_set_thick(20);
    x_pen_rotate(90);
    x_pen_set_pos(largura/2 + 10, altura/3 + 110);
    x_pen_walk(60);
}
void skim_cabeca(){
    cor_azul();
    x_pen_rotate(90);
    x_pen_set_thick(espessura1);
    x_pen_set_pos(largura/2 - 70, altura/3 - 20);
    x_pen_walk(18);
    x_pen_set_pos(largura/2 - 35, altura/3 - 20);
    x_pen_walk(20);
    x_pen_set_pos(largura/2 + 5, altura/3 - 20);
    x_pen_walk(20);
    x_pen_set_pos(largura/2 + 40, altura/3 - 20);
    x_pen_walk(20);
    x_pen_set_pos(largura/2 + 70, altura/3 - 20);
    x_pen_walk(20);
    cor_vermelho();
    x_pen_set_pos(largura/2 + 45, altura/3 - 20);
    x_pen_walk(8);
    cor_azul();
    x_pen_set_thick(35);
    x_pen_set_pos(largura/2 - 15, altura/3 - 55);
    x_pen_walk(45);
    cor_preto();
    x_fill_circle(largura/2 + 5, altura/3 - 55, 15);
    cor_branco();
    x_fill_circle(largura/2 + 13, altura/3 - 55, 4);
    x_fill_circle(largura/2 + 2, altura/3 - 60, 5);
}
int main(){
    x_open(largura, altura, "R2D2"); 
    cor_branco();
    x_clear();
    corpo();
    skim_peito();
    skim_cabeca();
    perna();

    x_save();
    x_close();
    return 0;
}