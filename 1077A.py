import math

qry=int(input())
for _ in range(qry):
	a,b,k=map(int,input().split())
	print(math.ceil(k/2)*a-math.floor(k/2)*b)