#include <stdio.h>
#include <string.h>

void removeWhiteSpace(char *input);
;

int main()
{
	system("cls");
	char ssn[10]; //social security number (size 10 yymmddxxxx)
	

	
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

