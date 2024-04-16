#include <stdio.h>

union test {
	int x;
	char y;
};

int main()
{
	union test p1;
	p1.x = 123;

	// p2 is a pointer to union p1
	union test* p2 = &p1;

	// Accessing union members using pointer
	printf("%d %c", p2->x, p2->y);
	return 0;
}
