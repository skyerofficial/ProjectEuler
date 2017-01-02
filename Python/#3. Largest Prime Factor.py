#!/bin/python

import sys


t = int(raw_input().strip())
for a0 in xrange(t):
    n = long(raw_input().strip())
    i = 2
    largest_prime = 2
    while i*i <= n:
        while n % i == 0:
            largest_prime = i
            n //= i    
        i += 1
    if n>largest_prime:
        largest_prime = n
    print largest_prime
    