#include <stdio.h>

/**
 * main - simple calculator skeleton program
 *
 * Return: Always 0
 */
int main(void)
{
	int choice;
	int scan_result;

	while (1)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		scan_result = scanf("%d", &choice);
		if (scan_result != 1)
		{
			printf("Invalid choice\n");
			return (0);
		}

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
	}

	return (0);
}
