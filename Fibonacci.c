#include<stdio.h>
#include<conio.h>
void main()
{
    int f0=0, f1=1, f;
    int i,n;

    printf("Enter your length for fibonacCi: \n ");
    scanf("%d",&n);

    for( i=0; i<=n; i++)
    {
        f=f0+f1;
        printf("%5d",f);
        f1=f0;
        f0=f;
    }
    getch ();
}
