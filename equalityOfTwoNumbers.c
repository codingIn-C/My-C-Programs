#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter two numbers to swap a:\n");
    scanf("%d",&a);
    
    printf("enter b:\n");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    
    printf("a=%d and b=%d",a,b);

    return 0;
}
