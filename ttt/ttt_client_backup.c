/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "ttt.h"
#include "ttt_lib.h"


void ttt_1(char *host)
{
	printf("%d\n\n\n\n", MAX_BUFFER_LEN);
	CLIENT *clnt;
	char * *result_1;
	char*  currentboard_1_arg;
	int  *result_2;
	play_args  	play_1_arg;
	int  *result_3;
	char*  checkwinner_1_arg;

	/*variaveis para o ciclo de jogo*/
	int player = 0;
	int go = 0;
	int play_res;
	int row = 0;                                  
	int column = 0; 
	/*extra*/

	int winner=-1;

	clnt = clnt_create(host, TTT, V1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror(host);
		exit(1);
	}
    
	play_1_arg.player =0; /*Cria o jogador inicial, tal como no local_main*/

	result_1 = currentboard_1((void*)&currentboard_1_arg, clnt);
	if (result_1 == NULL) {
		clnt_perror(clnt, "call failed:");
	}
	result_2 = play_1(&play_1_arg, clnt);
	if (result_2 == NULL) {
		clnt_perror(clnt, "call failed:");
	}
	result_3 = checkwinner_1((void*)&checkwinner_1_arg, clnt);
	if (result_3 == NULL) {
		clnt_perror(clnt, "call failed:");
	}

	puts("Fase1 over");

    do {
    /* Get valid player square selection */
    do {
      /* Print current board */
      player = play_1_arg.player;
      
      currentboard_1((void*)&currentboard_1_arg, clnt);
      
      printf("Estado do tabuleiro:\n%s\n", *currentboard_1((void*)&currentboard_1_arg, clnt));
      
      printf("\nPlayer %d, please enter the number of the square "
	     "where you want to place your %c (or 0 to refresh the board): ", player,(player==1)?'X':'O');
      scanf(" %d", &go);

      if (go == 0){
		play_res = 0;
		continue;
      }if (go == 10){
		trocaSimbolos();	
		continue;
	  }

	  row = --go/3;                                 /* Get row index of square      */
      column = go%3;                                /* Get column index of square   */
      
 	  play_1_arg.row = row;
 	  play_1_arg.column = column;

	  play_res = *(int *)play_1(&play_1_arg, clnt);

	  printf("+-----------------------------+\n+ O jogador: %d                +\n+ Jogou na Linha: %d Coluna: %d +\n+ O resultado foi: %d          +\n+-----------------------------+\n\n",player, row, column, play_res);

      if (play_res != 0) {
			switch (play_res) {
			case 1:
			  printf("Position outside board.");
			  break;
			case 2:
			  printf("Square already taken.");
			  break;
			case 3:
			  printf("Not your turn.");
			  break;
			case 4:
			  printf("Game has finished.");
			  break;
			}
	printf(" Try again...\n");
      }
    } while(play_res != 0);
    
    //winner = checkWinner();
	winner = *(int *)checkwinner_1((void*)&checkwinner_1_arg, clnt);    


	 play_1_arg.player = (player+1)%2;                           /* Select player */
 
    printf("Jogue player %d\n", player);

  } while ( winner == -1);
  
  /* Game is over so display the final board */
  //currentBoard(buffer);

  puts("Jogo temrinado!!!\n\n");
  currentboard_1((void*)&currentboard_1_arg, clnt);
  printf("%s\n", *currentboard_1((void*)&currentboard_1_arg, clnt));

  /* Display result message */
  if(winner == 2)
    printf("\nHow boring, it is a draw\n");
  else
    printf("\nCongratulations, player %d, YOU ARE THE WINNER!\n", winner);
	
	clnt_destroy( clnt );
}


int main(int argc, char *argv[]){
	char *host;

	if(argc < 2) {
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	ttt_1( host );
}
