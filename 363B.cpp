#include <iostream>

using namespace std;

int s[155555];

int main (){
	int n,k;
	cin >> n >> k;
	int a;
	cin >> a;
	s[0]=a;
	for (int i=1;i<n;++i){
		cin >> a;
		s[i]=s[i-1]+a;
	}
	int ind=0;
	int ans=s[k-1];
	for (int i=1;i<n-k+1;++i)
		if (ans>s[i+k-1]-s[i-1]){
			ans=s[i+k-1]-s[i-1];
			ind=i;
		}
	cout << ind+1;
}