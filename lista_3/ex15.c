#include <stdio.h>

int main() {
	int n, h, l, a=0;

	scanf("%d", &n);
	
	while (n > 0) {
		scanf("%d %d", &h, &l);
		
		a += (h * l);
		n--;
	}
	printf("%d\n", a);
	return 0;
}
