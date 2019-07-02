n,q=map(int,input().split())
ans=[]
for i in range(0,q):
    x,y=map(int,input().split())
    x,y=x-1,y-1
    ans.append(str((x*n+y)//2+1 if ((x+y)%2==0) else (n*n)//2+(n%2)+(x*n+y)//2+1))
print("\n".join(ans))