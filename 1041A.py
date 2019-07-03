n=int(input())
arr=sorted(list(map(int,input().split())))
ans=0
for i in range(1,n):
	ans+=arr[i]-arr[i-1]-1
print(ans)