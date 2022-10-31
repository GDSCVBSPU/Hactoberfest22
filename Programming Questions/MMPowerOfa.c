#include<stdio.h>

int isPowerOfa(int n, int a){
    if(n==0)
    {
        return 0;
    }
    else if(n%a==0)
    {
        return isPowerOfa(n/a, a);
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main(){
    int n, a;
    printf("Enter the numbers you wish to check:\n");
    scanf("%d%d", &n, &a);
    if(isPowerOfa(n, a)==1)
    {
        printf("%d is the power of %d", n, a);
    }
    else
    {
        printf("%d is not a power of %d", n, a);
    }
}