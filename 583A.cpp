#include <iostream>

using namespace std;

const int MaxN=50+10;
bool mark_h[MaxN],mark_v[MaxN];
int h[MaxN*MaxN],v[MaxN*MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n*n;++i)
		cin >> h[i] >> v[i];
	for (int i=0;i<n*n;++i)
		if (mark_h[h[i]]==false && mark_v[v[i]]==false){
			mark_v[v[i]]=true;
			mark_h[h[i]]=true;
			cout << i+1 << " ";
		}
}