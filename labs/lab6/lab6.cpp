#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>

void new_func1(void);

void func1()
{
	for (int i = 0; i < 100000000; i++)
	{
		if (i > 10000000) {
			break;
		}
	}
	printf("\n End of func1()\n");
}

void func2()
{
	for (int i = 0; i < 10000000; i++)
	{
	}
	printf("\nEnd of func2()\n");
}

int main(void)
{
	printf("\n Inside main()\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 10000000; j > 0; j--)
		{
			func1();
			if (j < 9999995) {
				break;
			}
		}
	}

	return 0;
}
