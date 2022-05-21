#include <stdio.h>

int main()
{
	int n;
	float f, c, s, s1;

	printf("Enter the value of Fahrenheit: ");
	scanf("%f", &f);
	s = ((f - 32) * 5) / 9;
	printf("Celcsius: %.4f", s);

	printf("\nEnter the value of Celcsius: ");
	scanf("%f", &c);
	s1 = ((c * 9) / 5) + 32;
	printf("Fahrenheit: %.4f", s1);

	return 0;
}