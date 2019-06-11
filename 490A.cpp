#include <iostream>
#include <algorithm>
using namespace std;
const int INF=1e9;
int t[5555],andis[5555],ted[5],p[5];
int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		andis[i]=i+1;
		cin >> t[i];
		++ted[t[i]];
	}
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			if (t[j]<t[i]){
				swap (t[i],t[j]);
				swap (andis[i],andis[j]);
			}
//	for (int i=0;i<n;++i)
//		cerr << andis[i] << " ";
//	cerr << endl;
	int q=INF;
	q=min (ted[1],ted[2]);
	q=min (q,ted[3]);
	cout << q << endl;
	p[1]=ted[1]-1;
	p[2]=p[1]+ted[2];
	p[3]=p[2]+ted[3];
	for (int i=0;i<q;++i)
		cout << andis[p[1]-i] << " " << andis[p[2]-i] << " " << andis[p[3]-i] << endl;
}
