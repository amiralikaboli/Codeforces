init,goal=map(int,input().split())
i,g=init,goal
ti=[0,0]
tg=[0,0]
while True:
	if i%2 and i%3:
		break
	if i%2==0:
		ti[0]+=1
		i//=2
	if i%3==0:
		ti[1]+=1
		i//=3
while True:
	if g%2 and g%3:
		break
	if g%2==0:
		tg[0]+=1
		g//=2
	if g%3==0:
		tg[1]+=1
		g//=3
# print(i,g)
# print(init,goal)
# print(ti,tg)
init*=(2**(tg[0]-ti[0]))*(3**(tg[1]-ti[1]))
if ti[0]>tg[0] or ti[1]>tg[1] or init!=goal:
	print(-1)
else:
	print(sum(tg)-sum(ti))