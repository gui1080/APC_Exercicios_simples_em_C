#include <stdio.h>

int main() {
	int ha, hb, t=0;

	scanf("%d %d", &ha, &hb);

	while (ha != hb) {
		ha += 2;
		hb += 3;
		t++;
	}
	printf("%d\n", t);
	return 0;
}
