n=int(input())
arr=list(map(int,input().split()))
ted=[0 for i in range(110)]
for x in arr:
	ted[x]+=1
print(max(ted))