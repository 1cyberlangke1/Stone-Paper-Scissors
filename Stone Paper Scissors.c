#include<stdio.h>
#include<stdlib.h>
#include <time.h>
char a = '\0';
int b = 0;
int main() {
	a:
	printf("Stone[O/o] Paper[U/u] Scissors[X/x]\nYour choice?:");
	scanf("%s", &a);
	getchar();
	if(a!='X'&& a != 'x' && a != 'U' && a != 'u' && a != 'O' && a != 'o'){
		printf("err\n");
		goto a;
	}
	if (a == 'X' || a == 'x') a = 2;//X
	else if (a == 'U' || a == 'u')a = 1;//U
	else a = 0;//O
	srand((unsigned)time(NULL));
	b = rand() % 3;
	if (a == b) {
		if (a == 0)printf("Player[O] Vs Bot[O]\n-------------------------\nDraw!!!\n-------------------------\n");
		else if(a==1)  printf("Player[U] Vs Bot[U]\n-------------------------\nDraw!!!\n-------------------------\n");
		else  printf("Player[X] Vs Bot[X]\n-------------------------\nDraw!!!\n-------------------------\n"); 
	}
	else if (a == 2 && b == 1) printf("Player[X] Vs Bot[U]\n-------------------------\nPlayer Win!!!\n-------------------------\n");
	else if (a == 1 && b == 2) printf("Player[U] Vs Bot[X]\n-------------------------\nBot Win!!!\n-------------------------\n");
	else if (a == 2 && b == 0) printf("Player[X] Vs Bot[O]\n-------------------------\nBot Win!!!\n-------------------------\n");
	else if (a == 0 && b == 2) printf("Player[O] Vs Bot[X]\n-------------------------\nPlayer Win!!!\n-------------------------\n");
	else if (a == 1 && b == 0) printf("Player[U] Vs Bot[O]\n-------------------------\nPlayer Win!!!\n-------------------------\n");
	else printf("Player[O] Vs Bot[U]\n-------------------------\nBot Win!!!\n-------------------------\n");
	b:
	printf("Continue(Y y)/(N n)?:");
	scanf("%s", &a);
	getchar();
	if (a != 'Y' && a != 'y' && a != 'N' && a != 'n') { 
		printf("err\n");
		goto b;
	}
	else if (a == 'Y' || a == 'y')goto a;
	return 0;
}