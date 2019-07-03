#include <iostream>

using namespace std;

int d[10];

int tavan(int ind){
	int cnt=1;
	for (int i=0;i<ind;++i)
		cnt*=10;
	return cnt;
}

void change(int n){
	int ind=0;
	while (n!=0){
		d[ind]=n%10;
		n/=10;
		++ind;
	}
}

void print(){
	int x=0;
	for (int i=0;i<10;++i)
		x=max(x,d[i]);
	cout << x << endl;
	for (int j=0;j<x;++j){
		int cnt=0;
		for (int i=0;i<10;++i)
			if (d[i]>0){
				--d[i];
				cnt+=tavan(i);
			}
		cout << cnt << " ";
	}
}

int main (){
	int n;
	cin >> n;
	change(n);
	print();
}