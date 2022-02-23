#include <stdio.h>

int main(void)
{
	int num, notprime = 0;
	int i = 2;
	printf("Ange ett tal som du vill undersöka om det är ett primtal: ");	
	scanf("%d",&num);
	while (i <= num / 2 && !notprime) {
		if (num % i == 0)
			notprime = 1;
		i++;
	}
	if (notprime == 1)
		printf("%d är inte ett primtal\n", num);
	else
	   	printf("%d är ett primtal\n", num);

	return 0;
}
