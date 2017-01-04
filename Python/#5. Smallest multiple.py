#!/bin/python

import sys
import math

def is_prime(n):
    flag = 0
    for i in range(2,int(math.sqrt(n))+1):
        if (n%i == 0):
            flag = 1
            break
    if (flag ==1):
        return 0
    else:
        return 1


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    result = 1
    if (n == 1):
        print(n)
    else:
        for i in range(2,n+1):
            if (is_prime(i)):
                j =2
                while (math.pow(i, j) <= n):
                    j += 1
                result *= math.pow(i, j-1)
        print(int(result))
