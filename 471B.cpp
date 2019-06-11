#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E3+10;
pair <int,int> p[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> p[i].first;
		p[i].second=i+1;
	}
	sort(p,p+n);
	int t=0;
	for (int i=1;i<n;++i)
		if (p[i].first==p[i-1].first)
			++t;
	if (t<2){
		cout << "NO";
		return 0;
	}
	int ind=-1;
	for (int i=2;i<n;++i)
		if (p[i].first==p[i-1].first && p[i].first==p[i-2].first)
			ind=i-2;
	if (ind!=-1){
		cout << "YES" << endl;
		for (int i=0;i<n;++i)
			cout << p[i].second << " ";
		cout << endl;
		swap(p[ind],p[ind+1]);
		for (int i=0;i<n;++i)
			cout << p[i].second << " ";
		cout << endl;
		swap(p[ind],p[ind+2]);
		for (int i=0;i<n;++i)
			cout << p[i].second << " ";
	}
	else{
		cout << "YES" << endl;
		int ind1,ind2;
		for (int i=1;i<n;++i)
			if (p[i].first==p[i-1].first){
				ind1=i-1;
				break;
			}
		for (int i=ind1+2;i<n;++i)
			if (p[i].first==p[i-1].first){
				ind2=i-1;
				break;
			}
		for (int i=0;i<n;++i)
			cout << p[i].second << " ";
		cout << endl;
		swap(p[ind2],p[ind2+1]);
		for (int i=0;i<n;++i)
			cout << p[i].second << " ";
		cout << endl;
		swap(p[ind1],p[ind1+1]);
		for (int i=0;i<n;++i)
			cout << p[i].second << " ";
	}
}