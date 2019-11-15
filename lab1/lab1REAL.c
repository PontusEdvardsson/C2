#include <stdio.h>
#include <string.h>

void removeWhiteSpace(char *input);
;

int main()
{
	system("cls");
	char ssn1[10]; //social security number (size 10 yymmddxxxx)
  char ssn2[10]; //social security number (size 10 yymmddxxxx)
  int handler = 1;

  while(handler == 1)
  {
    printf("Välkommen! Ange ett personnummer:\n");
    fgets(ssn1, 10, stdin);
    removeWhiteSpace(ssn1);
    printf("\nssn1 is now:%s", &ssn1);

    printf("Ange ett andra personnummer:\n");
    fgets(ssn2, 10, stdin);
    removeWhiteSpace(ssn2);
    printf("\nssn2 is now:%s", &ssn2);

		printf("\n\nRun again? 1 = yes. 2 = no\n"); //no errorhandling yet
		scanf("%d", &handler);
    getchar();
  }

	
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

