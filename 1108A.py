qry=int(input())
for _ in range(qry):
	lrs=list(map(int,input().split()))
	if lrs[0]==lrs[2]:
		print(lrs[0],lrs[3])
	else:
		print(lrs[0],lrs[2])