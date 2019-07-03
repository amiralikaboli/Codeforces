costs=[100,20,10,5,1]
n=int(input())
ans=0
for cost in costs:
	ans+=n//cost
	n%=cost
print(ans)