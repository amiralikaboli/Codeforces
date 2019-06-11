#include <iostream>

using namespace std;

const long long MaxN=1E5+10;
long long a[MaxN]; 

int main(){
	long long n,k;
	cin >> n >> k;
	for (long long i=0;i<k;++i)
		cin >> a[i];
	long long t=0;
	for (long long i=1;i<k;++i)
		if (a[i]<a[i-1]){
			++t;
			//cerr << i << " ";
		}
	//cerr << endl << t << " " << n << " " << a[k-1] << endl;
	cout << t*n+a[k-1]-1 << endl;
}