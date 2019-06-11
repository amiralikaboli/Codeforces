#include <iostream>
#include <algorithm>

using namespace std;

const int MaxN=100*1000+10;
pair <int,int> p[MaxN];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> p[i].first >> p[i].second;
	sort(p,p+n);
	for (int i=0;i<n-1;++i)
		if (p[i].second>p[i+1].second){
			cout << "Happy Alex";
			return 0;
		}
	cout << "Poor Alex";
}