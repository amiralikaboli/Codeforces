n=int(input())
a=list(map(int,input().split()))
dp=[1]*n
for i in range(1,n):
	if (a[i]<=2*a[i-1]):
		dp[i]=dp[i-1]+1
print(max(dp))