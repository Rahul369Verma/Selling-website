#include<stdio.h>
int Factorial(int);
int main()
{
	int number; 
	printf("Enter number of rows of Pascal's triangle: ");
	scanf("%d", &number);
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j <= (number -i -2); j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", Factorial(i)/(Factorial(j)*Factorial(i-j)));
		}
		printf("\n");
	}
	return 0;
}

int Factorial(int number)
{
	if (number == 0 || number == 1)
	{
		return 1;
	}
	else{
		return number * Factorial(number-1);
	}
}