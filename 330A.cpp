#include <iostream>
#include <set>

using namespace std;

set <int> r,c;

int main (){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			char x;
			cin >> x;
			if (x=='S'){
				r.insert(i);
				c.insert(j);
			} 
		}
	cout << m*n-c.size()*r.size();
}