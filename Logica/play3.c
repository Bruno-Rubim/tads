#include <stdio.h>
#include <ctype.h>

int main(){

	int screenWidth = 10, screenHeight = 10,
		gameover = 0,
		playerPosX = 3, playerPosY = 3
	;
	char screen[screenWidth][screenHeight],
		resp, playerCharacter = 'P'
	;

	int fillScreen(char character){
		for (int i = 0; i < screenWidth; ++i){
			for (int j = 0; j < screenHeight; ++j){
				screen[i][j] = character;
			}
		}
		return 0;
	}

	int renderScreen(){
		for (int i = 0; i < screenWidth; ++i){
			for (int j = 0; j < screenHeight; ++j){
				printf("%c ", screen[i][j]);
			}
			printf("\n");
		}		
	}

	int renderPlayer(){
		screen[playerPosX][playerPosY] = 'P';
	}

	int movePlayer(){
		switch (resp){
			case 'W':
				playerPosX --;
			break;
			case 'A':
				playerPosY --;
			break;
			case 'S':
				playerPosX ++;
			break;
			case 'D':
				playerPosY ++;
			break;
		}
	}

	int action(){
		printf("What is your action?\n");
		scanf(" %c", &resp);
		resp = toupper(resp);
		switch(resp){
			case 'W':
				movePlayer();
			break;
			case 'A':
				movePlayer();
			break;
			case 'S':
				movePlayer();
			break;
			case 'D':
				movePlayer();
			break;
			case 'Z':
				gameover = 1;
			break;
			default:
			break;
		}
	}

	int game(){
		while(gameover!=1){
			printf("\n");
			fillScreen('.');
			renderPlayer();
			renderScreen();
			action();
		}
		return 0;
	}

	game();

	return 0;
}