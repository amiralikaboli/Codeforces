arr=list(map(int,input().split()))
arr=sorted(arr)
for i in range(3):
	print(arr[3]-arr[i],end=' ')