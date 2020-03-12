#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>

int main(){
    //games variables
    const int width_t = 640; //largura
    const int height_t = 480; //altura

    //INIT ALLEGRO
    ALLEGRO_DISPLAY *display = NULL; 
    if(!al_init()){ 
        al_show_native_message_box(
            NULL,
            "AVISO!","ERRO",
            "Allegro não pode ser incializado",
            NULL,
            ALLEGRO_MESSAGEBOX_ERROR
        );
        return -1;
    }
    display = al_create_display(width_t, height_t);

    if(display == NULL){ 
        al_show_native_message_box(
            NULL,
            "AVISO!",
            "ERRO",
            "Display não pode ser criado",
            NULL,
            ALLEGRO_MESSAGEBOX_ERROR
        );
        return -1;
    }

    //INNIT ADDONS
    al_init_primitives_addon();

    //DRAW IN ALLEGRO BOX    

    al_draw_pixel(  //Desenhar pixel
        40.0,   //posição eixo x do pixel
        40.0,   //posição eixo y do pixel
        al_map_rgb(255, 255, 255) //cor do pixel
    );

    al_draw_line(   //Desenhar linha
        100,    //posição x0 linha
        100,    //posição y0 linha
        width_t - 100,  //posição x1 linha
        100,            //poosição y1 linha
        al_map_rgb(255, 255, 255),  //cor linha
        10  //grossura da linha
    );

    al_flip_display();//DOUBLE BUFFERING

    //TIME BOX 
    al_rest(5.0);
    //DESTROY DISPLAY
    al_destroy_display(display);
    return 0;

}

