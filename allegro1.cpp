#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>

int main(){
    ALLEGRO_DISPLAY *display = NULL; // criando um display(a partir de um ponteiro)
    if(!al_init()){ //verificando se o allegreo foi inicializado
        al_show_native_message_box(
            NULL,
            "AVISO!","ERRO",
            "Allegro não pode ser incializado",
            NULL,
            ALLEGRO_MESSAGEBOX_ERROR
        );//enviando mensagem de erro, e avisando ao sistema
        return -1;
    }
    display = al_create_display(640,400);//criando uma tela de 640 de largura e 400 de altura

    if(display == NULL){ // se display nao for criado envia msg de erro
        al_show_native_message_box(
            NULL,
            "AVISO!",
            "ERRO",
            "Display não pode ser criado",
            NULL,
            ALLEGRO_MESSAGEBOX_ERROR
        );//enviando mensagem de erro, e avisando ao sistema
        return -1;
    }

    //al_sh

    al_rest(5.0); //vai permanecer com a tela do jogo aberto durante 5s

    al_destroy_display(display);

    return 0;

}

