#include <stdio.h>

int main() {
    int age, mens;

    scanf("%d", &age);

    if (age<10) {
    	mens=30;
	printf("R$ %d,00\n", mens);

    } else if (age>=10 && age<30) {
    	mens=60;
        printf("R$ %d,00\n", mens);

    } else if (age>=30 && age<46) {
        mens=120;
        printf("R$ %d,00\n", mens);

    } else if (age>=46 && age<60) {
        mens=150;
        printf("R$ %d,00\n", mens);

    } else if (age>=60 && age<66) {
        mens=250;
        printf("R$ %d,00\n", mens);

    } else if (age>=66) {
        mens=400;
        printf("R$ %d,00\n", mens);
    }
    return 0;
}
