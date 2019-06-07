#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,sx,sy,ex,ey;
	cin >> n >> sx >> sy >> ex >> ey;
	if(sx==ex && sy==ey){
		cout << 0 << endl;
		return 0;
	}
	for(int i=1;i<=n;++i){
		char c;
		cin >> c;
		if(c=='N' && sy<ey)
			++sy;
		if(c=='S' && sy>ey)
			--sy;
		if(c=='E' && sx<ex)
			++sx;
		if(c=='W' && sx>ex)
			--sx;
		if(sx==ex && sy==ey){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
