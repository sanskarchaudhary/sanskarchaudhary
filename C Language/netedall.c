#include <stdio.h>
/* 
trying to collect all the codes in a single program
this codes cover all thr sellibus in second semister
made in 2023 may 19 by bhardwaj_jii1 #CodeQuotient
chitkara university baddi himanchal pradesh
*/

//part of case 4 form a number
int formNumber(int n){
    int i,num;
    int num_formed=0;
    //numbers to be formed
    printf("enter the numbers to be formed\n\n");
    for (i=1;i<=n;i++){
        scanf("%d",&num);
        num_formed=num_formed*10+num;
    }
    return num_formed;        
}


int main()
{
    // using switch case to complete all codes in code question this is module 1 warmup in code question 2nd sem
    {
        printf("[1] > Swap two variables\n");
        printf("[2] > Swap two variables without using a third variable\n");
        printf("[3] > Sum of all the digits of a number\n");
        printf("[4] > Form a number\n");
        printf("[5] > Compare reverse and original number\n");
        printf("you should choose from 1-5\n\n");
    }
int x;
scanf("%d",&x);
    switch (x)
    {
        //this code is to swap variable by using third veriable
        case 1:{
                printf("You have choosed to swap two veriable by third veriable\n\n");
                int a,b,c;
                printf("input the value of a and b.Space is mendatory in between\n\n");
                scanf("%d %d",&a,&b);         
                // here i swap value of a and b by using c
                c=a;   
                a=b;   
                b=c;
                printf("\n%d %d\n",a,b);    
                return 0; 
            }
            break;
        //this code is to swap the veriable by using only two veriables a and b
        case 2:{
                printf("Swap two variables without using a third variable\n\n");
                int a, b;      
                printf("input the value of a and b.Space is mendatory in between\n\n");
                scanf("%d %d",&a,&b);    
                // here i added the two veriable and stored them to 1st onwards i subtracted 2nd veriable in sum and stored in 2nd veriable
                // and again i used the current 2nd veriable to sub from sum to get 1st veriable swap. 
                a=a+b;    
                b=a-b;   
                a=a-b;    
                printf("\n%d %d\n",a,b);    
                return 0; 
            }
            break;
        //this code is to calculate sum of all the digits of a number
        case 3:{
                    int t,n,sum;
                    printf("calculate sum of all digits of number\n\n");
                    printf("how many times to take number from user\n\n");
                    scanf("%d",&t);
                    printf("digits of a number to be formed\n\n");
                    while(t--){
                        scanf("%d",&n);
                        sum=0;
                        while(n!=0){
                            sum=sum+n%10;
                            n=n/10;
                        }
                        printf("%d\n",sum);
                    }
                    return 0;
                }   
            break;
        //this code is to Form a number
        case 4:{
            int n;
            printf("how long should be the number\n\n");
            scanf("%d",&n);
            int ans=formNumber(n);
            printf("\n%d\n",ans);
            return 0;
            }
            break;
        //to Compare reverse and original number
        case 5:{
                int num, orig, rem,a;
                int i=0;
                printf("numbers of tests\n\n");
                scanf("%d",&a);
                printf("numbers in the tests\n\n");
                for(i;i<a;i++){
                    scanf("%d", &num);
                    orig = num;
                    int rev=0;
                    while(num!=0){
                        rem = num%10;
                        rev = (rev*10)+rem;
                        num = num/10;
                    }
                    if(orig==rev)
                        printf("Equal\n");
                    else
                        printf("Not Equal\n");       
                }
                return 0;
            }
            break;
        //
        default:{
            printf( "Choice is other than 1, 2 3, 4, or 5");
        }
            break;
    }
	return 0;
}

