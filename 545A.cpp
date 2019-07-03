#include <iostream>
#include <vector>

using namespace std;

int a[111][111];
bool b[111];
vector <int> v;

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		b[i]=true;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j){
			cin >> a[i][j];
			if (a[i][j]==3 || a[i][j]==1)
				b[i]=false;
		}
	for (int i=0;i<n;++i)
		if (b[i]==true)
			v.push_back(i);
	cout << v.size() << endl;
	for (int i=0;i<v.size();++i)
		cout << v[i]+1 << " ";
}