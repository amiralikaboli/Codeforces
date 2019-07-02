n=int(input())
for i in range(0,n):
	l=int(input())
	s=input()
	print("YES" if(s[ :l/2]==s[l/2: :-1]) else "NO")