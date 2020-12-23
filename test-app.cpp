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

	cout << "Entering postnet back in:\n";
	cipher.setBitZip(cipher.getBitZip());
	cout << "Int zip is: ";
	cout << cipher.getIntZip();
	cout << endl;

	cout << "Testing the print function:\n";
	cipher.printPostnet();


	cout << "Entering zipcode 10128:\n";
	cipher.setIntZip(10128);
	cout << "Bit zip is: ";
	cout << cipher.getBitZip();
	cout << endl;

	cout << "Entering postnet back in:\n";
	cipher.setBitZip(cipher.getBitZip());
	cout << "Int zip is: ";
	cout << cipher.getIntZip();
	cout << endl;

	cout << "Testing the print function:\n";
	cipher.printPostnet();

	return 0;
}
