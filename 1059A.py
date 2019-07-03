tbl=input()
cards=input().split()
flag=False
for card in cards:
	if card[0]==tbl[0] or card[1]==tbl[1]:
		flag=True
if flag:
	print('YES')
else:
	print('NO')