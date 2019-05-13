//============================================================================
// Name        : singleton.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "singleton.hpp"


int main() {


	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

Singleton::Instance()->test();
Singleton::Instance()->test();


	cout<<"endd prog"<<endl;

	return 0;
}
