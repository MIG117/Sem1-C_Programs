#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;
	int sum, sub, mul;
	float dive;

	printf("\nEnter the a value: ");
	scanf("%d", &a);
	printf("\nEnter the b value: ");
	scanf("%d", &b);

	sum = a + b;
	sub = a - b;
	mul = a * b;
	dive = a / b;

	printf("1. Addition: %d + %d = %d \n", a, b, sum);
	printf("2. Substraction: %d - %d = %d\n", a, b, sub);
	printf("3. Multiplication: %d x %d = %d\n", a, b, mul);
	printf("4. Dividition: %d / %d = %.2f\n", a, b, dive);

	getch();
	return 0;
}