#include <stdio.h>
int main()
{
    int i ,n, a=0,b=1 , fib ;
    printf("Enter the number of elements:\t");
    scanf("%d",&n);
    printf("0\n1\n");
    for(i=2;i<n;i++)
    {
        fib=a+b;
        printf("%d\n",fib);
        a=b;
        b=fib;
    }
    return 0;
}