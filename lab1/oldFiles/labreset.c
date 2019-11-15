#include <stdio.h>
#include <string.h>

int control(char ssn[10]);
void removeWhiteSpace(char *input);
void newSsn(char *input );

int main()
{
	system("cls");
	char ssn[10]; //social security number (size 10 yymmddxxxx)
	char run = 'y';
	int ctrlnbr = 0;
	while(run == 'y')
	{
		newSsn(ssn);
		removeWhiteSpace(ssn);
		ctrlnbr = control(ssn);





		printf("\n\nRun again? y/n: "); 
		fgets(run, sizeof(run), stdin);
		removeWhiteSpace(run);

	}
	return 0;
}

int control(char ssn[10])
{

	return 0;
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

void newSsn(char *input )
{
	printf("Enter Social Security Number: ");
 	fgets(*input, sizeof(input), stdin);
	removeWhiteSpace(*input);

}