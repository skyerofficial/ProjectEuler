#!/bin/python

import sys
from bisect import bisect_left as bl

arr = []
for i in range(999,100,-1):
    for j in range(999,100,-1):
        t = str(i*j)
        if t == t[::-1]:
            arr.append(i*j)
arr.sort()
for _ in range(int(raw_input())):
    i = bl(arr,int(raw_input()))
    print arr[i-1]
