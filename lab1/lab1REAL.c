#include <stdio.h>
#include <string.h>

void removeWhiteSpace(char *input);

int main()
{
	system("cls");
	char ssn1[25]; //social security number (size 10 yymmddxxxx)
  char ssn2[25]; //social security number (size 10 yymmddxxxx)
  int handler1 = 1;
  int handler2 = 0;
  int handler3 = 0;
  char chartemp[2];
  int temp = 0;

  while(handler1 == 1)
  {
    int totctrl = 0;
    printf("Välkommen! Ange ett personnummer:\n");
    fgets(ssn1, 12, stdin);
    removeWhiteSpace(ssn1);
    printf("\nssn1 is now:%s\n\n", &ssn1);

    printf("Ange ett andra personnummer:\n");
    fgets(ssn2, 12, stdin);
    removeWhiteSpace(ssn2);
    printf("\nssn2 is now:%s\n\n", &ssn2); 

    for (int i = 0; i < 10; i++)
    {
      printf("for1-");
      temp = ssn1[i-1];

      switch (handler3)
      {
      case 0:
      printf("case0-");
        temp = temp*2;
        handler3 = 1;
        break;
      case 1:
      printf("case1-");
        handler3 = 0;
        break;
      default:
        break;
      }
      
      if(temp>10)
      {
        chartemp[2] = temp;
        temp = chartemp[0] + chartemp[1];
        printf("crtlover10-");
      }
      totctrl += temp;
      printf("totctrl: %d \n", &totctrl);
    }
    printf("Kontrollsiffra: %d", &totctrl);
    




		printf("\n\nRun again? 1 = yes. 2 = no\n"); //no errorhandling yet
		scanf("%d", &handler1);
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

