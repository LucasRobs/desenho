#define XPAINT_FULL
#include "xpaint.h"
#include <time.h>
void desenha_desgraca(int x, int y, int r){
    x_set_color(X_COLOR_RED);
    x_pen_set_pos(x, y);
    x_fill_circle(x, y, r);
    puts("Digite o tamanho do traço da caneta");
    scanf("%d", &x);
    x_pen_set_thick(x);
    puts("digite -1 para sair do paint");
    x_save();
    while (1){
        srand(time(NULL));
        x_set_color(x_make_color(rand() % 255,rand() % 255,rand() % 255, 255));
        puts("Digite posição X Y e o raio do circulo");
        scanf("%d%d%d", &x, &y, &r);
        if(x == -1){
            break;
        }
        x_fill_circle(x, y, r);
        x_pen_goto(x, y);
        x_save();
    } 
}
int main(){
    int largura = 600, altura = 500;
    x_open(largura, altura, "bolinhas");
    int x = 0, y = 0, r = 0;
    puts("Digite posição X Y e o raio do circulo");
    scanf("%d%d%d", &x, &y, &r);
    desenha_desgraca(x, y, r);
    x_close();
    return 0;
}