#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,p,n;
    float si, r;
    for (count=1;count<=3;count++)
    {
        printf("Enter the value of p,r,n\n");
        scanf("%f%d%d",&r,&p,&n);
        si=(p*n*r)/100;
        printf("%f",si);
    }
    printf("Hello world!\n");
    return 0;
}
