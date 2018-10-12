#include <stdio.h>

int main() {
	char string[80];
	int i = 0;
	
	scanf("%s", string);
	
	while (string[i] != '\0') {
		i++;
	}
	
	printf("%d\n", i);
	return 0;
}
