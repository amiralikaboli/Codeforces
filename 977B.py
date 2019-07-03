import re

n=int(input())
s=input()
ted={}
for i in range(1,n):
	if s[i-1:i+1] in ted:
		ted[s[i-1:i+1]]+=1
	else:
		ted[s[i-1:i+1]]=1
mx=max(ted.values())
for key,val in ted.items():
	if val==mx:
		print(key)
		break