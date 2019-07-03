person=list(map(int,input().split()))
grape=list(map(int,input().split()))
flag=True
if person[0]>grape[0]:
	flag=False
if person[1]>grape[0]+grape[1]-person[0]:
	flag=False
if sum(person)>sum(grape):
	flag=False
if flag:
	print('YES')
else:
	print('NO')