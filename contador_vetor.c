#include <stdio.h>

int main()
{
    int a, b;
    int Numeros[200];
    for (a = 0;a<200;a++){
    scanf("%d", &Numeros[a]);
    
    }
    for (b = 199; b >= 0; b--)
    {
        printf("%d ", Numeros[b]);
    }
    return 0;
}
