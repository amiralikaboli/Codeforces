d=list(map(int,input().split()))
t256=min(d[0],d[2],d[3])
ans=t256*256
d[0]-=t256
t32=min(d[0],d[1])
ans+=32*t32
print(ans)