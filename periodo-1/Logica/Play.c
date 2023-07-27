#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdio_ext.h>

int main (){
	int mapPositionX, mapPositionY, gameOver;
	char actionResponse;
	
	printf("Running\n");
	
	mapPositionX = 0;
	mapPositionY = 0;

	printf("D for Action Dictionary\n");

	int describeRoom(){
		if (mapPositionX == 0 && mapPositionY == 0){
			printf("The walls are light gray, light seems to come from the ceiling, there is a door on the North wall\n");
		}
		return 0;
	}

	char action(){
		printf("\nWhat is your action?\n");
		__fpurge(stdin);
		scanf("%c", &actionResponse);
		actionResponse = toupper(actionResponse);
		switch(actionResponse){
			case'C':
			printf("You have chosen to see the Configurations.\n");
			printf("Configuration Text\n");
			break;
			case'D':
			printf("You have chosen to see the Action Dictionary.\n");
			printf("\nC - Open Configurations\nD - Action Dictionary.\nI - Check Inventory\nL - Look Around\nM - Check Map Position\nZ - End the game\n\n This dictionary was written by Charles Action\n");
			break;
			case'I':
			printf("You have chosen to see Inventory.\n");
			printf("Inventory isn't avaliable.\n");
			break;
			case'L':
			printf("You have chosen to Look around.\n");
			describeRoom(mapPositionX, mapPositionY);	
			break;
			case'M':
			printf("You have chosen to check your Map position.\n");
			printf("You are at: X %d Y %d\n", mapPositionX, mapPositionY);
			break;
			/*
			\nW - Walk\n*N - North\n*E - East\n*S - South\n*W - West
			case'W':
			printf("You have chosen to walk, where to?.\n");
			__fpurge(stdin);
			scanf("%c", &actionResponse);
			actionResponse = toupper(actionResponse);
			switch(actionResponse){
				case'N':
				printf("You have chosen to walk north.\n");
				mapPositionY ++; 
				break;
				case'S':
				printf("You have chosen to walk south.\n");
				mapPositionY --; 
				break;
				case'E':
				printf("You have chosen to walk east.\n");
				mapPositionX ++; 
				break;
				case'W':
				printf("You have chosen to walk west.\n");
				mapPositionX --; 
				break;				
			break;
			}
			*/
			case'Z':
			printf("You have chosen to end the game.\n");
			gameOver = 1;
			break;
			default:
			printf("You chose an invalid action\n");
			action();
			break;
		}
		return actionResponse;
	}
	gameOver = 0;

	while(gameOver<1){
		action();
	}

	return 0;
}
