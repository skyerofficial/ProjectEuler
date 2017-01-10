#!/bin/python

import sys


t = int(raw_input().strip())
for a0 in xrange(t):
    n,k = raw_input().strip().split(' ')
    n,k = [int(n),int(k)]
    num = raw_input().strip()
    num = str(num)
    p = 0
    for i in range(0,n-k+1):
        if('0' not in num[i:i+k]):
            product = 1
            for j in range(i,i+k):
                product = product * int(num[j])
            if product > p:
                p = product

    print p
