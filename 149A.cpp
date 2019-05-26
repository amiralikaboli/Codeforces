#include <iostream>
#include <algorithm>
using namespace std;
int a[20];
int main (){
	int k;
	cin >> k;
	for (int i=0;i<12;++i)
		cin >> a[i];
	sort (a,a+12);
	int sum=0,cnt=0;
	for (int i=11;i>=0;--i)
		if (sum<k){
			sum+=a[i];
			++cnt;
		}
		else 
			break;
	if (sum<k){
		cout << "-1";
		return 0;
	}
	cout << cnt;
	return 0;
}
