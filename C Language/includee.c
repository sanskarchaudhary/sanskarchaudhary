#include <stdio.h>
/* Include other headers as needed */
int main()
{
int n,a,reverse,b;
  scanf("%d",&n);
  a=n%10;
  b=n/1000;
  reverse=a+b;
  printf("%d",reverse);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}