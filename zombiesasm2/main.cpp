#include <iostream>
//#include "C:\masm32\include\masm32rt.inc"

using namespace std;

extern "C" char* zomb();

int main() {

	char* value = zomb();
	cout << "Message: " << value << endl;

	return 0;
}