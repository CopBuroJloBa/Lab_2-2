#include <iostream>
#include <math.h>
using namespace std;

void quadraticEquation(double a, double b, double c){
	double D, t = 2, x1, x2;
	D = pow(b,2) - 4 * a * c;
	if(D > 0){
		x1 = (-b + sqrt(D))/(2 * a);
		x2 = (-b - sqrt(D))/(2 * a);
		cout << " x1 = " << x1;
		if(x1 != x2){
			cout << "; x2 = " << x2;
		}
	} else {
		cout << "\nError, D = " << D << " < 0";
	}
}

int main(){
	double a, b, c;
	cout << "ax^2 + bx + c = 0\n";
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;
	quadraticEquation(a,b,c);
	return 0;
}
