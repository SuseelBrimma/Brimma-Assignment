#include <stdio.h>
int main(void)
{
 unsigned sum1=0, sum2 =0, i;
 for (i = 1; i <= 100; i++) {
 sum1 += i*i;
 sum2 += i;
}
printf("%u\n", sum2*sum2- sum1);
return 0;
}
