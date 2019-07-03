#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int pp=0,pn=0;
pair <int,int> pos[111],neg[111];

bool cmp (pair <int,int> a,pair <int,int> b){
	return a.first>b.first;
}

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x,a;
		cin >> x >> a;
		if (x>0){
			pos[pp].first=x;
			pos[pp].second=a;
			++pp;
		}
		else{
			neg[pn].first=x;
			neg[pn].second=a;
			++pn;
		}
	}
	sort(pos,pos+pp);
	sort(neg,neg+pn,cmp);
	int ans=0;
	for (int i=0;i<min(pn,pp);++i)
		ans+=pos[i].second+neg[i].second;
	if (pp>pn)
		ans+=pos[pn].second;
	else
		ans+=neg[pp].second;
	cout << ans;
}