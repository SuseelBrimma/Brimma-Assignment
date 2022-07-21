#include<stdio.h>
int main(void)
{
    unsigned long long n=600851475143;
    unsigned long long i;
    for (i=2ull;i<n;i++)
    {
        while(n%i==0)
        {
            n/=i;
        }
    }
    printf("%d\n",n);
    return 0;
}
