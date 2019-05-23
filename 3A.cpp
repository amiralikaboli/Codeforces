#include <iostream>
#include <cmath>
using namespace std;
string s,t;
int main (){
	cin >> s >> t;
	int x=abs(s[0]-t[0]),y=abs(s[1]-t[1]);
	cout << max(x,y) << endl;
	if (x==s[0]-t[0] && y==s[1]-t[1]){
		for (int i=0;i<min(x,y);++i)
			cout << "LD" << endl;
		if (x>y)
			for (int i=0;i<x-y;++i)
				cout << "L" << endl;
		else
			for (int i=0;i<y-x;++i)
				cout << "D" << endl;
	}
	if (x!=s[0]-t[0] && y==s[1]-t[1]){
		for (int i=0;i<min(x,y);++i)
			cout << "RD" << endl;
		if (x>y)
			for (int i=0;i<x-y;++i)
				cout << "R" << endl;
		else
			for (int i=0;i<y-x;++i)
				cout << "D" << endl;
	}
	if (x==s[0]-t[0] && y!=s[1]-t[1]){
		for (int i=0;i<min(x,y);++i)
			cout << "LU" << endl;
		if (x>y)
			for (int i=0;i<x-y;++i)
				cout << "L" << endl;
		else
			for (int i=0;i<y-x;++i)
				cout << "U" << endl;
	}
	if (x!=s[0]-t[0] && y!=s[1]-t[1]){
		for (int i=0;i<min(x,y);++i)
			cout << "RU" << endl;
		if (x>y)
			for (int i=0;i<x-y;++i)
				cout << "R" << endl;
		else
			for (int i=0;i<y-x;++i)
				cout << "U" << endl;
	}
}
