#include "main.h"

int main(void)
{
	char str[20] = "abcdefghij";
	printf("%s\n\n", _strncat(str, "123456", 3));
	printf("%s\n\n", _strncpy(str, "123456", 7));
	return (0);
}
