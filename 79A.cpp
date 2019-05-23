#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	for (int i=0; ;++i){
		if (i%2==0){
			if (a>=2 && b>=2){
				a-=2;
				b-=2;
			}
			else if (a>=1 && b>=12){
				--a;
				b-=12;
			}
			else if (b>=22)
				b-=22;
			else{
				cout << "Hanako";
				return 0;
			}
		}
		else{
			if (b>=22)
				b-=22;
			else if (a>=1 && b>=12){
				--a;
				b-=12;
			}
			else if (a>=2 && b>=2){
				a-=2;
				b-=2;
			}
			else{
				cout << "Ciel";
				return 0;
			}	
		}
		//cerr << a << " " << b << endl;
	}
}