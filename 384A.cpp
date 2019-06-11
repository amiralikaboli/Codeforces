#include <iostream>

using namespace std;

int main (){
	int n;
	cin >> n;
	if (n%2==1){
		cout << n*n/2+1 << endl;
		for (int i=0;i<n*n;++i){
			if (i%n==0 && i!=0)
				cout << endl;
			if (i%2==0)
				cout << "C";
			else 
				cout << ".";
		}
	}
	else{
		cout << n*n/2 << endl;
		int ind=0;
		for (int i=0;i<n*n;++i){
			if (i%n==0 && i!=0){
				cout << endl;
				ind=1-ind;
			}
			if (i%2==ind)
				cout << "C";
			else
				cout << ".";
		}
	}
}