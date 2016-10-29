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
        long long int n,limit,sum=0; 
        scanf("%lld",&n);
        n = n-1;
        limit = (n - (n%3))/3;
        sum += limit * (limit + 1)/2 * 3;
        limit = (n - (n%5))/5;
        sum += limit * (limit + 1)/2 * 5;
        limit = (n - (n%15))/15;
        sum -= limit * (limit + 1)/2 * 15;
        printf("%lld\n",sum);
    }
    return 0;
}
