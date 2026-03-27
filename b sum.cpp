#include <stdio.h>
int SUMofDigits(int n)
{
	if (n == 0)
	return 0;
	else
	return (n % 10) + SUMofDigits(n / 10);

}
int main()
{
	int num;
	printf("Enter A Number: ");
	scanf("%d", &num);
	if (num < 0) {
		num = -num;
	}
	int result = SUMofDigits(num);
	printf("sum of %d is %d\n", num, result);
	return 0;
}
