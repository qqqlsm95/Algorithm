#include <stdio.h>

int main() {
    int a, b;
  
    scanf("%d %d",&a, &b);

    if(a>0 && b<10){
      printf("%.9f", (double) a/b);}
  
    return 0;
}
  