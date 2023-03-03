#include "main.h"

int main(void)
{
	char str[20] = "abcdef";
	printf("%s\n\n", _strncat(str, "123456", 3));
	return (0);
}
