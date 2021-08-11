//Expressões relacionais
/*
Boolean 1(true) 0(false) "bool"
	> greater
	< lesser
	== equal
	>= greater or equal
	<= lesser or equal
	!= not equal
*/

/*
Logic Expressions
	(AND)                  (OR)				(NOT)
	A   B  A&&B			A	B  A||B			A  !A
	V	V   V			V	V	V			V	F
	V	F	F			V	F	V			F	V
	F	V	F			F	V	V
	F	F	F			F	F	F
*/

/*
Conditional Comands
	if () {
	comands...
	
	} else {
	comands
	};

*/

#include<iostream>

using namespace std;

int main () {
	int a;
	
	cin >> a;
	
	if((a%2) != 0) {
		cout << "O valor e impar. \n";
    } else {
		cout << "Hello There";	
	}
	return 0;
	
}
