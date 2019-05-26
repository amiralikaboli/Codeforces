#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int r[111];

bool cmp(int a,int b){
	return a>b;
}

int main (){
	double ans=0;
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> r[i];
	sort(r,r+n,cmp);
	for (int i=0;i<n;i+=2)
		ans+=r[i]*r[i]-r[i+1]*r[i+1];
	cout << fixed << setprecision(6) << ans*3.1415926536;
}