#include <iostream>

using namespace std;

int main (){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int ans_misha=max(3*a/10,a-a*c/250);
	int ans_vasya=max(3*b/10,b-b*d/250);
	if (ans_misha>ans_vasya)
		cout << "Misha";
	else if (ans_vasya>ans_misha)
		cout << "Vasya";
	else
		cout << "Tie";
}