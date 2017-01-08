#!/bin/python

import sys
from math import sqrt

t = int(raw_input().strip())
primes=[2,3]
for a0 in xrange(t):
    n = int(raw_input().strip())
    t=primes[-1] + 2
    while len(primes) < n:
        count=0
        for i in primes:
            if i>sqrt(t):
                count=0
                break
            if t%i==0:
                count=1
                break

        if(count==0):
            primes.append(t)
        t+=2
    print(primes[n-1])
