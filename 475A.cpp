#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if (n==0){
		cout << "+------------------------+" << endl;
		cout << "|#.#.#.#.#.#.#.#.#.#.#.|D|)" << endl;
		cout << "|#.#.#.#.#.#.#.#.#.#.#.|.|" << endl;
		cout << "|#.......................|" << endl;
		cout << "|#.#.#.#.#.#.#.#.#.#.#.|.|)" << endl;
		cout << "+------------------------+" << endl;
		return 0;
	}
	if (n==1){
		cout << "+------------------------+" << endl;
		cout << "|O.#.#.#.#.#.#.#.#.#.#.|D|)" << endl;
		cout << "|#.#.#.#.#.#.#.#.#.#.#.|.|" << endl;
		cout << "|#.......................|" << endl;
		cout << "|#.#.#.#.#.#.#.#.#.#.#.|.|)" << endl;
		cout << "+------------------------+" << endl;
		return 0;
	}
	if (n==2){
		cout << "+------------------------+" << endl;
		cout << "|O.#.#.#.#.#.#.#.#.#.#.|D|)" << endl;
		cout << "|O.#.#.#.#.#.#.#.#.#.#.|.|" << endl;
		cout << "|#.......................|" << endl;
		cout << "|#.#.#.#.#.#.#.#.#.#.#.|.|)" << endl;
		cout << "+------------------------+" << endl;
		return 0;
	}
	--n;
	int t1=n/3;
	int t2=n/3;
	int t3=n/3;
	n%=3;
	if (n==1)
		++t1;
	else if (n==2){
		++t2;
		++t1;
	}
	cout << "+------------------------+" << endl;
	cout << "|";
	for (int i=0;i<t1;++i)
		cout << "O.";
	for (int i=0;i<11-t1;++i)
		cout << "#.";
	cout << "|D|)" << endl;
	cout << "|";
	for (int i=0;i<t2;++i)
		cout << "O.";
	for (int i=0;i<11-t2;++i)
		cout << "#.";
	cout << "|.|" << endl;
	cout << "|O.......................|" << endl;
		cout << "|";
	for (int i=0;i<t3;++i)
		cout << "O.";
	for (int i=0;i<11-t3;++i)
		cout << "#.";
	cout << "|.|)" << endl;
	cout << "+------------------------+" << endl;
}