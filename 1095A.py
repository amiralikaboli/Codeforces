n=int(input())
s=input()
ind=0
ans=''
while True:
	if ind*(ind+1)//2>=n:
		break
	ans+=s[ind*(ind+1)//2]
	ind+=1
print(ans)