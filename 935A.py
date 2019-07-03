n=int(input())
ans=0
for x in range(1,n):
	if n%x==0:
		ans+=1
print(ans)