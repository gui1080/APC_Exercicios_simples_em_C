#include <stdio.h>
#include <string.h>

int main() {
	char x[100], y[100];
	int i, sizex, sizey;
	
	scanf("%s %s", x, y);
	
	sizex = strlen(x);
	sizey = strlen(y);
	
	if (sizex > sizey) {
		for (i = 0; i < sizex; i++) {
			printf("%c%c", x[i], y[i]);
			
			if (y[i+1] == '\0') {
				for (i += 1; i < sizex; i++) {
					printf("%c", x[i]);
				}
			}
		}
	}

	if (sizey > sizex) {
		for (i = 0; i < sizey; i++) {
			printf("%c%c", x[i], y[i]);
			
			if (x[i+1] == '\0') {
				for (i += 1; i < sizey; i++) {
					printf("%c", y[i]);
				}
			}
		}
	
	} else {
		for (i=0; i<sizex; i++) {
			printf("%c%c", x[i], y[i]);
			
			if (x[i+1]=='\0') {
				break;
			}
		}
	}
	
	printf("\n");
	return 0;
}
