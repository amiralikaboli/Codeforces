#include <iostream>
#include <algorithm>
using namespace std;
int a[111],andis[111];
int main (){
	int n,k,sum=0,cnt=0;
	cin >> n >> k;
	for (int i=0;i<n;++i){
		cin >> a[i];
		andis[i]=i+1;
	}
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			if (a[j]<a[i]){
				swap (a[i],a[j]);
				swap (andis[i],andis[j]);
			}
	for (int i=0;i<n;++i)
		if (sum<=k && sum+a[i]>k)
			break;
		else if (sum<=k && sum+a[i]<=k){
			sum+=a[i];
			++cnt;
		}
	cout << cnt << endl;
	for (int i=0;i<cnt;++i)
		cout << andis[i] << " ";
}
