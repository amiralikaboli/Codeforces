#include <iostream>
#include <cmath>

using namespace std;

const int Max=1E5+10;
double a[Max];
pair <double,double> p[Max];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=1;i<n-1;++i){
		p[i].first=min(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]));
		p[i].second=max(abs(a[n-1]-a[i]),abs(a[i]-a[0]));
	}
	p[0].first=abs(a[1]-a[0]);
	p[0].second=abs(a[n-1]-a[0]);
	p[n-1].first=abs(a[n-1]-a[n-2]);
	p[n-1].second=abs(a[n-1]-a[0]);
	for (int i=0;i<n;++i)
		cout << int(p[i].first) << " " << int(p[i].second) << endl;
}