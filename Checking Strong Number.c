#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int temp =n;
    while(temp!=0){
        int x;
        x=temp%10;
        int fac=1;
        while(x>1){
            fac*=x;
            x--;
        }
        sum+=fac;
        temp /= 10;
    }
    
    if(sum == n){
        printf("Strong number");
    }
    else
        printf("Not a strong number");

    return 0;
}
