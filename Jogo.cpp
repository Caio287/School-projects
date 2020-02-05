#include <stdio.h>
#include <allegro.h>
#define MAX 800
#define MAY 600
 
int main()
{
	allegro_init();
	install_keyboard();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, MAX,MAY,0,0);
	allegro_message("Ola");
	allegro_message("Meu primeiro programa em Allegro");
	while(!key[KEY_ESC])
        {      
		textout_ex(screen,font,"Outra forma de Escrever",0,0,makecol(0,255,0),-1);
        }
        return 0;
}
END_OF_MAIN();
