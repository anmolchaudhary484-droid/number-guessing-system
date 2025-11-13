#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int random, guess;
	int  no_of_guess=0;
srand(time(NULL));
	printf("welcome to the world of guessing numbers\n");
	random=rand()% 100 +1; //generating between 0 to 100
	printf("number generated is : %d" ,random);
	do{
		printf("\nplease enter your guess between(1 to100 ):");
		scanf("%d", &guess);
	 no_of_guess++;
	if(guess <random){
		printf("guess larger number.\n");
	} else if (guess >random){
		printf("guess a smaller number.\n");
	} else {
		printf("congrtulations!!! you have successfully gussed the number in %d attempts,no_of_guess");
	}
	} while(guess != random);
	printf("\n bye bye, thanks for playing.");
	printf("\n developed by: ANMOL");
}
