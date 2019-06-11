#include <iostream>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];
int t[5];

int main(){
	bool b=true;
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		a[i]/=25;
		if (a[i]==1)
			++t[1];
		if (a[i]==2){
			if (t[1]==0){
				cout << "NO";
				return 0;
			}
			++t[2];
			--t[1];
		}
		if (a[i]==4){
			if (t[1]>=1 && t[2]>=1){
				++t[4];
				--t[2];
				--t[1];
				continue;
			}
			if (t[1]>=3){
				++t[4];
				t[1]-=3;
				continue;
			}
			cout << "NO";
			return 0;
		}
		//cerr << t[1] << " " << t[2] << " " << t[4] << endl;
	}
	cout << "YES";
}