#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long int n,a=2,b=0,temp,sum=0; 
        scanf("%lld",&n);
        while(a<=n){
            temp = a;
            sum += a;
            a = 4*a + b;
            b = temp;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
