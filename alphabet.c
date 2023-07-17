#include <stdio.h>
#include <stdlib.h>
int main(){
  int n, i;
  char c;
  printf("Enter an input: ");
  scanf("%d", &n);
  for(i=0; i<n; i++){
    for(c='A'; c<='Z'; c++){
      printf("%c", c);
    }
    printf("\n");
  }
}
  
