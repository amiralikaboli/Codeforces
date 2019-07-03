#include <iostream>

using namespace std;

string a[15]={" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string b[15]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string ten[15]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

int main (){
	int n;
	cin >> n;
	if (n>=10 && n<=19){
		cout << ten[n%10];
		return 0;
	}
	if (n/10==0){
		cout << b[n];
		return 0;
	}
	if (n%10==0){
		cout << a[n/10];
		return 0;
	}
	cout << a[n/10] << "-" << b[n%10];
}