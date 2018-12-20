#include <iostream>
//#include "C:\masm32\include\masm32rt.inc"

using namespace std;

//extern "C" { 
//	int main2();
//}
//extern "C" char* zomb();
extern "C" char* zomb();

int main() {

	char* value = zomb();
	cout << "Message: " << value << endl;
	//int address = (int)&value;
	//cout << "Testing: " << &value << endl;
	//cout << "Int: " << address << endl;
	//value++;
	//cout << "Testing: " << &value << endl;
	//cout << "Int: " << address << endl;


	//cout << "The result is: " << zomb() << endl;
	/*char* stuff = zomb();
	cout << "The result is: " << (char)&stuff << endl;
	for (int i = 0; i < 64; i++) {
		cout << "The value of pointer is " << (int)stuff << endl;
		cout << (char)stuff << endl;
		stuff++;
	}*/

	return 0;
}