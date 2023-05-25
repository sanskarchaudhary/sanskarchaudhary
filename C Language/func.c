#include<stdio.h>
int addf(int d, int f){
    int resut = d+f;
    return resut;
}

void multf(int s, int f){
    int result = s*f;
    printf("%d",result);
}


int main(){
    int a = 9, b =10;
    int c = addf(a,b);
    printf("%d\n",c);
      multf(a,b);
}