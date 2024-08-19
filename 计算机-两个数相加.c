





#pragma comment(lib, "legacy_stdio_definitions.lib")
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int s = 0;
	scanf("%d %d", &a, &b);
	s = a + b;
	printf("%d", s);
	return 0;
}