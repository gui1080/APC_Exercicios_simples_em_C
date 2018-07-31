#include <stdio.h>

int main () {
    int n, fat;
	int i;
	fat=1;
	i=1;
    scanf("%d", &n);
    if(n<0) {
        printf("nao existe\n");
    }
    else if (n==0) {
        printf("1\n");
    }
    while (i<=n) {
        fat=fat*i; 
        i=i+1;
    }
    if(n>0) {
        printf("%d\n", fat);
    }
    return 0;
}
