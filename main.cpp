#include <iostream>
using namespace std;

int main(){
	double a, b, c;
	cout << "ax^2 + bx + c = 0\n";
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;
	quadraticEquation(a,b,c);
	return 0;
}
