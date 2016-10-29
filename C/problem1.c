/*
Project Euler #4: Largest palindrome product

A palindromic number reads the same both ways. The smallest 6 digit palindrome made from the product of two 3-digit numbers is 101101 = 143 X 707.
. 
Find the largest palindrome made from the product of two 3-digit numbers which is less than N.

Input Format:
First line contains T that denotes the number of test cases. This is followed by T lines, each containing an integer, N.
*/
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
