#include<stdio.h>
#define MAXDIGITS 500
#define EXP 1000

int main()
{
    int largeNum[MAXDIGITS] = {0};
    int i,j,temp,carry,sum;
    
    largeNum[0] = 1;
    for(i=0;i<EXP;i++){
        carry =0;
    for(j=0;j<MAXDIGITS;j++){
        temp =2*largeNum[j]+carry;
        carry =0;
        if(temp>0){
            largeNum[j]=temp%10;
            carry = temp/10;
        }else
        largeNum[j]=temp;
    }
    }
    sum =0;
    for (j=MAXDIGITS-1;j>=0;j--){
        printf("%d", largeNum[j]);
        sum += largeNum[j];
    }
    printf("\n%d\n", sum);
    return 0;
}
