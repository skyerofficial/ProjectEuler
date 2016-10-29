#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int isPalindrome(int num)
{
    int rev=0,n=num;
    while(num){
        rev = rev*10 + num%10;
        num /= 10;
    }
    if(rev==n){
        return 1;
    }
    return 0;
}
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n,val,i,j,flag=0,max=0; 
        scanf("%d",&n);
        for(i=100;i<1000;i++){
            for(j=100;j<1000;j++){
                val = i*j;
                if((val<n)&&(isPalindrome(val))&&(max<val)){
                    max = val;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
