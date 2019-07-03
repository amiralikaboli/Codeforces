#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pi acos(-1)
#define point complex<ld>
#define X real()
#define Y imag()

const int MaxN=1E5+10;
const ld EPS=1E-8;
const int INF=1E9+7;
const int MOD=1000*1000*1000+7;

int32_t main(){
	ld px,py,vx,vy;
	ld a,b,c,d;
	cin >> px >> py >> vx >> vy >> a >> b >> c >> d;
//find arrow
	point p=point(px,py);
	point v=point(vx,vy);
//find point triangle
	point tri1=point(px-a/2,py);
	point tri2=point(px,py+b);
	point tri3=point(px+a/2,py);
//find point rectangle
	point rec1=point(px-c/2,py-d);
	point rec2=point(px-c/2,py);
	point rec3=point(px+c/2,py);
	point rec4=point(px+c/2,py-d);
//scale & rotate
	//scale to (0,0)
		tri1-=p;
		tri2-=p;
		tri3-=p;
		rec1-=p;
		rec2-=p;
		rec3-=p;
		rec4-=p;
	//rotate
		point r=point(sin(arg(v)),cos(arg(v)));
		tri1/=r;
		tri2/=r;
		tri3/=r;
		rec1/=r;
		rec2/=r;
		rec3/=r;
		rec4/=r;
	//scale to original coordinate
		tri1+=p;
		tri2+=p;
		tri3+=p;
		rec1+=p;
		rec2+=p;
		rec3+=p;
		rec4+=p;
//output
	cout << fixed << setprecision(12);
	cout << tri2.X << " " << tri2.Y << endl;
	cout << tri1.X << " " << tri1.Y << endl;
	cout << rec2.X << " " << rec2.Y << endl;
	cout << rec1.X << " " << rec1.Y << endl;
	cout << rec4.X << " " << rec4.Y << endl;
	cout << rec3.X << " " << rec3.Y << endl;
	cout << tri3.X << " " << tri3.Y << endl;
}