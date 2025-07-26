#include <stdio.h>

int main()
{
	char arr[] = { '1', 'B', 'C', 'D', 'E' };
	char* p;

	p = &arr[2];

	printf("%c%c", *p, *(p - 2)); //C1

	return 0;
}