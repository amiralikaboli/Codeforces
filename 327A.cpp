#include <iostream>
using namespace std;
int s[110];
int main (){
	int n,a,q=0;
	cin >> n;
	for (int i=1;i<=n;++i){
		cin >> a;
		s[i]=s[i-1]+a;
	}
	for (int i=0;i<n;++i)
		for (int j=i+1;j<=n;++j){
			q=max (q,s[n]-2*s[j]+2*s[i]+j-i);
//			cerr << q << " ";
		}
/*	for (int i=0;i<=n;++i)
		cout << s[i] << " ";
*///	cout << endl;
	cout << q;
}
