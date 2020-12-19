#include<iostream>
#include"cipher.h"
using namespace std;

int main()
{
	Cipher cipher; 

	cout << "Entering zipcode 20007:\n";
	cipher.setIntZip(20007);
	cout << "Bit zip is: ";
	cout << cipher.getBitZip();
	cout << endl;

	return 0;
}
