#include <stdio.h>

int main() {
	int length, width, p, area;
	printf("Input length, width: ");
	scanf("%d%d", &length, &width);
	p = (length + width) * 2;
	area = length * width;
	printf("Perimeter is: %d, Area is: %d", p, area);
	return 0;
}
