#include <stdio.h>
int main () {
int i, b, limite;
int numeros[150];
limite=0;
for(i=0;i<150;i++) {
 scanf("%d", &numeros[i]);
}

scanf("%d", &limite);

for(b=0;b<150;++b) {
 if(numeros[b]<limite) {
  printf("%d ", numeros[b]);
}
}

return 0;
}
