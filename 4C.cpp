#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
string s[MaxN];
pair <string,int> p[MaxN]; 
int ind[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> s[i];
		p[i].first=s[i];
		p[i].second=i;
	}
	sort(p,p+n);
	int t=1;
	ind[p[0].second]=0;
	for (int i=1;i<n;++i)
		if (p[i].first==p[i-1].first){
			ind[p[i].second]=t;
			++t;
		}
		else{
			ind[p[i].second]=0;
			t=1;
		}
	for (int i=0;i<n;++i){
		if (ind[i]==0)
			cout << "OK" << endl;
		else
			cout << s[i] << ind[i] << endl;
	}
}