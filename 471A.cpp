#include <iostream>

using namespace std;

int l[15],d[15];

int main (){
	for (int i=0;i<6;++i){
		cin >> l[i];
		++d[l[i]];
	}
	bool foot=false,bear=false,elephant=false;
	for (int i=0;i<10;++i){
		if (d[i]>=4)
			foot=true;
		if (d[i]==1)
			bear=true;
	}
	if (foot==false)
		cout << "Alien";
	else if (bear==true)
		cout << "Bear";
	else
		cout << "Elephant";
}