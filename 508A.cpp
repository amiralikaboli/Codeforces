#include <iostream>

using namespace std;

const int MaxMN=1E3+10;
bool mark[MaxMN][MaxMN];

bool check(int x,int y){
	if (mark[x][y]==false)
		return false;
	if (mark[x][y+1]==true && mark[x+1][y]==true && mark[x+1][y+1]==true)
		return true;
	if (mark[x][y-1]==true && mark[x+1][y]==true && mark[x+1][y-1]==true)
		return true;
	if (mark[x][y+1]==true && mark[x-1][y]==true && mark[x-1][y+1]==true)
		return true;
	if (mark[x][y-1]==true && mark[x-1][y-1]==true && mark[x-1][y]==true)
		return true;
	return false;
}

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	for (int i=0;i<k;++i){
		int x,y;
		cin >> x >> y;
		mark[x][y]=true;
		if (check(x,y)==true){
			cout << i+1;
			return 0;
		}
	}
	cout << 0;
}