#include <stdio.h>
/* Include other headers as needed */
int main()
{
   int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if( (a + b) > c){
    printf("Valid");
  }
  else if( (a + c) > b){
    printf("Valid");
  }
  else if( (b + c) > a){
    printf("Valid");
  }
  else{
    printf("Not Valid");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}