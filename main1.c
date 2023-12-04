#include "main.h"
#include <stdio.h>

int main(void)
{
	int len1, len2;

	//len = _printf("\nEnoch is a boy");

	len1 = _printf("%c %s %%", 'd', "my project");


	putchar('\n');
	//len2 = printf("\n%c %s %%", 'd', "my printf project");
	len2 = printf("%c %s %%", 'd', "my project");
	//len = printf("%%");
	putchar ('\n');
	_printf("len1 = %d", len1);
	printf("\nlen2 = %d\n", len2);


}
