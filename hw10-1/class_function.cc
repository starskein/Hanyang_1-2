#include <iostream>
#include "class_function.h"
using namespace std;

void A::test1(){
	cout << "A::test1()" << endl;
}
void A::test2(){}
void B::test2(){
	cout << "B::test2()" << endl;
}
void C::test1(){
	cout << "C::test1()" << endl;
}
void C::test2(){
	cout << "C::test2()" << endl;
}
void BB::test1(){
	cout << "BB::test1()" << endl;
}
