#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdio_ext.h>

int main (){
	int mapPositionX, mapPositionY, gameOver, actionResponse;
	
	printf("Running\n");
	
	mapPositionX = 0;
	mapPositionY = 0;
	
	int renderRoom(){
		if (mapPositionX == 0){
			if (mapPositionY == 0){
				printf("\n");
			}
		}
	}

	char action(){
		__fpurge(stdin);
		scanf("%d", &actionResponse);
		switch(actionResponse){
			case 9:
			printf("You have chosen to end the game.\n");
			gameOver = 1;
			break;
			default:
			printf("---\n");
			action();
			break;
		}
		return actionResponse;
	}
	gameOver = 0;

	while(gameOver<1){
		renderRoom();
		action();
	}

	return 0;
}
