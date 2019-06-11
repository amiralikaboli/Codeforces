#include <iostream>
using namespace std;
int maximum[111],minimum[111];
int main (){
	int m,s,x,n;
	cin >> m >> s;
	x=s;
	if (s==0 && m>1){
		cout << "-1 -1";
		return 0;
	}
	if (s>9*m){
		cout << "-1 -1";
		return 0;
	}
	--x;
	n=x;
	++maximum[m-1];
	++minimum[m-1];
	for (int i=m-1;i>=0;--i)
		if (x>=9){
			x-=9-maximum[i];
			maximum[i]=9;
		}
		else {
			maximum[i]+=x;
			x=0;
		}
	for (int i=0;i<m;++i)
		if (n>=9){
			n-=9-minimum[i];
			minimum[i]=9;
		}
		else {
			minimum[i]+=n;
			n=0;
		}
	for (int i=m-1;i>=0;--i)
		cout << minimum[i];
	cout << " ";
	for (int i=m-1;i>=0;--i)
		cout << maximum[i];
}
