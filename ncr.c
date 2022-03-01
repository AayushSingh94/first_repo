#include<stdio.h>
int factorial(int a)
{
    int fact=1;
    while(a>0)
    {
        fact=fact*a;
        a--;
    }

    return fact;
}
void main()
{
    int n,r;
    int o;
    scanf("%d%d",&n,&r);
    o=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",o);

}
\\hello 

