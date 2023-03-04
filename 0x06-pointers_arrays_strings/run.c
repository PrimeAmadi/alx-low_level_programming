#include "main.h"

int main(void)
{
	char str[20] = "abcdefgh";
	const int n = 7;
	int i_ary[7] = {1,2,3,4,5,6,7};

//	printf("%s\n\n", _strncat(str, "123456", 3));
//	printf("%s\n\n", _strncpy(str, "123456", 7));

	reverse_array(i_ary, n);
	for(int i = 0; i < n; i++)
		printf("%d, ", i_ary[i]); //printf("%d ", reverse_array(str, 10));
	printf("\n");
	return (0);
}
