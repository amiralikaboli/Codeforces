#include<bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int arr[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> arr[i];
	sort(arr,arr+n);
	int ans=0;
	for (int i=1;i<n;i+=2)
		ans+=arr[i]-arr[i-1];
	cout << ans << endl;
}