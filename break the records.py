#!/bin/python3

import math
import os
import random
import re
import sys

score = []
array = []

# Complete the breakingRecords function below.
#def breakingRecords(scores):




x = int(input())

for i in range (0,x):
    ele = int(input())
    score.append(ele)

    
array = list(set(score)) 

print(len(array)-1)

