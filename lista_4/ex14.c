#include <stdio.h>
#include <string.h>

int main(){
  char string[100];
  int stringsize, i;
  
  scanf("%s", string);

  stringsize = strlen(string);
  
  for (i = stringsize; i >= 0; i--){
    printf("%c", string[i]);
  }
  
  printf("\n");
  return 0;
}
