#include <iostream>
#include <vector>

using namespace std;

string s;
int a[10]={1,2,3,4,6,12};
int t[20];
vector <int> v;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		v.clear();
		cin >> s;
		for (int x=0;x<6;++x){
			for (int j=0;j<20;++j)
				t[j]=0;
			for (int j=0;j<s.size();++j)
				if (s[j]=='X')
					++t[j%a[x]];
			for (int j=0;j<20;++j)
				if (t[j]==12/a[x]){
					v.push_back(a[x]);
					break;
				}
		}
		cout << v.size() << " ";
		for (int j=v.size()-1;j>=0;--j)
			cout << 12/v[j] << "x" << v[j] << " ";
		cout << endl;
	}
}