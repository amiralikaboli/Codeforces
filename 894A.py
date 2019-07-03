s=input()
ans=0
for i in range(len(s)):
	for j in range(i+1,len(s)):
		for l in range(j+1,len(s)):
			if s[i]=='Q' and s[j]=='A' and s[l]=='Q':
				ans+=1
print(ans)