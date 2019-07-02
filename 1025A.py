len=int(input())
s=input()
arr=[0]*30
for alph in s:
    arr[ord(alph)-ord('a')]+=1
b=True
for i in range(0,26):
    if (arr[i]>1):
        b=False
print("Yes" if(b==False or len==1) else "No")
