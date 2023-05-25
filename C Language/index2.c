#include<stdio.h>
int main()
{
    int first,second,third;
    scanf("%d %d %d ",&first,&second,&third);
    if(third<(first+second)) {
        printf( "Valid");
    }
    else
    {
        printf( "Not Valid");
    }
    return 0;
}