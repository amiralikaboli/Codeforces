#include <iostream>

using namespace std;

int mn[5],mx[5],ans[5];

int main(){
	int n;
	cin >> n;
	cin >> mn[0] >> mx[0];
	cin >> mn[1] >> mx[1];
	cin >> mn[2] >> mx[2];
	ans[0]=mn[0];
	ans[1]=mn[1];
	ans[2]=mn[2];
	n-=mn[0]+mn[1]+mn[2];
	ans[0]+=min(n,mx[0]-mn[0]);
	n-=min(n,mx[0]-mn[0]);
	ans[1]+=min(n,mx[1]-mn[1]);
	n-=min(n,mx[1]-mn[1]);
	ans[2]+=min(n,mx[2]-mn[2]);
	cout << ans[0] << " " << ans[1] << " " << ans[2];
}