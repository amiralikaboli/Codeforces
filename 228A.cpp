#include <iostream>
#include <set>

using namespace std;

int a[5];
set <int> s;

int main (){
	for (int i=0;i<4;++i){
		cin >> a[i];
		s.insert(a[i]);
	}
	cout << 4-s.size();
}