#include <stdio.h>
#include <string.h>

void check(char ssn[256]);
void removeWhiteSpace(char *input);

int main()
{
	char run = 'y';
	system("cls");
	char ssn[10]; //social security number (size 10 yymmddxxxx)
	int numberA;
	int numberB;   //oscar

	while(run == 'y')
	{

		printf("Enter Social Security Number: ");
 		fgets(ssn, sizeof(ssn), stdin);
		removeWhiteSpace(ssn);

		check(ssn);
/*
		printf("Hello World\nType a Number: ");
		scanf(" %d", &numberA);

		printf("The number you typed is: %d!\n\n", numberA);


		for (size_t i = 0; i < 1; i++)
		{
			numberB = numberA * numberA;
		}
		printf("%d is your number to the power of 2", numberB);

*/


		printf("\n\nRun again? y/n "); //no errorhandling yet
		fgets(run, 1, stdin);

		printf("_________________________________________\n\n\n");
	}

	printf("\n\n_________________________________________");
	return 0;
}

void check(char ssn[256])
{
	int check = 0;
	int handler = 0;
	for (size_t i = 0; i < 9; i++)
	{
		if (handler == 0) //2
		{
			check = ssn[i] * 2;
		
		}
		else //1
		{
		}
	}
	printf("Your Social Security Number is: %c", ssn[2]);
}

void removeWhiteSpace(char *input) {
  for (int i = 0, exitLoop = 0; i < strlen(input) && exitLoop == 0; i++) {
    if (*(input + i) == '\n') {
      //Replaces \n with \0, and writes it to the address in the input
      *(input + i) = '\0';
      exitLoop = 1;
    }
  }
}