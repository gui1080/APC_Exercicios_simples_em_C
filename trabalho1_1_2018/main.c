//default
#include <stdio.h>
#include <stdlib.h>
//#include <termios.h>
#include <fcntl.h>
#ifdef _WIN32
  #define CLEAR "cls"
	#include <conio.h>
	#include <unistd.h>
	#include <time.h>


#else
	#define CLEAR "clear"
	int kbhit()
	{
		struct termios oldt, newt;
		int ch, oldf;
		tcgetattr(STDIN_FILENO, &oldt);
		newt = oldt;
		newt.c_lflag &= ~(ICANON | ECHO);
		tcsetattr(STDIN_FILENO, TCSANOW, &newt);
		oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
		fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
		ch = getchar();
		tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
		fcntl(STDIN_FILENO, F_SETFL, oldf);
		if (ch != EOF)
		{
			ungetc(ch, stdin);
			return 1;
		}
		return 0;
	}
	int getch(void)
	{
		int ch;
		struct termios oldt;
		struct termios newt;
		tcgetattr(STDIN_FILENO, &oldt);
		newt = oldt;
		newt.c_lflag &= ~(ICANON | ECHO);
		tcsetattr(STDIN_FILENO, TCSANOW, &newt);
		ch = getchar();
		tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
		return ch;
	}
#endif


//by zool & halt

#define UP_ARROW_KEY 'w'
#define DOWN_ARROW_KEY 's'

typedef struct{
	int posx, posy;
	char simbolo;
}Elemento;

struct{
	Elemento personagem;
	int combustivel;
}Nave;



void game_grid()
{
    int matriz[10][135];
    int coluna;
    int linha;
	char user_control_input;
	//clock_gettime( CLOCK_REALTIME, &tm );

	Nave.personagem.posx = 0;
	Nave.personagem.posy = 4;
	Nave.personagem.simbolo = '+';

	while (1)
	{
		for (linha = 0; linha < 10; linha++)
		{
			for (coluna = 0; coluna < 135; coluna++)
			{
				if (linha == 0 || linha == 9)
				{
					matriz[linha][coluna] = '#';
				}
				else
				{
					matriz[linha][coluna] = ' ';
				}
			}
		}




		system(CLEAR);
		if(kbhit()){

			user_control_input = getch();
			system(CLEAR);
			if(user_control_input == UP_ARROW_KEY){
				Nave.personagem.posy -= 1;
				if (!(Nave.personagem.posy > 0 && Nave.personagem.posy < 9)){
					Nave.personagem.posy += 1;
				}
			}
			else if (user_control_input == DOWN_ARROW_KEY){
				Nave.personagem.posy += 1;
				if (!(Nave.personagem.posy > 0 && Nave.personagem.posy < 9)){
					Nave.personagem.posy -= 1;
				}
			}
		}

		matriz[Nave.personagem.posy][Nave.personagem.posx] = Nave.personagem.simbolo;

		printf("Combustivel:             Pontuacao Total: \n");

		for (linha = 0; linha < 10; linha++)
		{
			for (coluna = 0; coluna < 135; coluna++)
			{
				printf("%c", matriz[linha][coluna]);
			}
			printf("\n");
		}
		sleep(0.7);
	}
}

void game_menu(){
	int escolha;
	printf("\n\tMENU\n\t1 - Jogar\n\t2 - Configuracoes\n\t3 - Ranking\n\t4 - Instrucoes\n\t5 - Sair\n\tEscolha uma opcao: ");
	scanf("%d", &escolha);

	switch (escolha)
	{
		case 1:
			//system(CLEAR);
			game_grid();
			break;
		case 2:
			system(CLEAR);
			//code
			break;
		case 3:
			system(CLEAR);
			//code
			break;
		case 4:
			system(CLEAR);
			printf("JOGUE COM AS MAOS, NAO SEJA RETARDADO, ATIRE EM TDO Q VER, N SE MATE");
			break;
		case 5:
			system(CLEAR);
			//code
			break;
		default:
			puts("opcao invalida, digite qualquer tecla para retornar ao menu");
			getch();
			system(CLEAR);
			game_menu();
		}
}

int main()
{
	system(CLEAR);

	//Pagina inicial
	puts("    _   __      __     _____                          ____                     __              ");
	puts("   / | / /___  / /_   / ___/____  ____ _________     /  _/___ _   ______ _____/ /__  __________");
	puts("  /  |/ / __ \\/ __/   \\__ \\/ __ \\/ __ `/ ___/ _ \\    / // __ \\ | / / __ `/ __  / _ \\/ ___/ ___/");
	puts(" / /|  / /_/ / /_    ___/ / /_/ / /_/ / /__/  __/  _/ // / / / |/ / /_/ / /_/ /  __/ /  (__  ) ");
	puts("/_/ |_/\\____/\\__/   /____/ .___/\\__,_/\\___/\\___/  /___/_/ /_/|___/\\__,_/\\__,_/\\___/_/  /____/  ");
	puts("                        /_/                                                                    ");

	puts("\n\tPressione qualquer tecla para continuar...");
	getch();


	system(CLEAR);

	game_menu();


	return 0;
}
