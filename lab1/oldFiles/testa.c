#include <stdio.h>

int main()
{
	system("cls"); //i was here
	int numberA;
	int numberB;

	printf("Hello World\nType a Number: ");

	scanf("%d", &numberA);

	printf("The number you typed is: %d!\n\n", numberA);



	for (size_t i = 0; i < 1; i++)
	{
		numberB = numberA * numberA;
	}
	printf("%d is your number to the power of 4", numberB);


	printf("\n\n_________________________________________");
	return 0;
}