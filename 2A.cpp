#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;;
string name[MaxN];
int point[MaxN];
map <string,int> mp1,mp2;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> name[i] >> point[i];
		mp1[name[i]]+=point[i];
	}
	int mx=0;
	for (int i=0;i<n;++i)
		mx=max(mx,mp1[name[i]]);
	int ind=0;
	for ( ;(mp1[name[ind]]<mx || (mp2[name[ind]]+=point[ind])<mx);++ind);
	cout << name[ind];
	return 0;
}