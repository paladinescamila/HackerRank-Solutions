# Staircase
# https://www.hackerrank.com/challenges/staircase/problem

n = int(input())

for i in range(1,n+1):
    text = ""
    for j in range(n-i):
        text += " "
    for k in range(i):
        text += "#"
    print(text)