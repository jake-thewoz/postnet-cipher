#include"cipher.h"
#include<string>
#include<iostream> // For testing

Cipher::Cipher(){}

void Cipher::setIntZip(int zip)
{
	intZip = zip;
	bitZip = intToBit(zip);
}

void Cipher::setBitZip(std::string zip)
{
	bitZip = zip;
	intZip = bitToInt(zip);
}

int Cipher::getIntZip()
{
	return intZip;
}

std::string Cipher::getBitZip()
{
	return bitZip;
}

std::string Cipher::intToBit(int zip)
{
	std::string strZip;
	
	// All postnet codes start and end with 1:
	strZip += ("1");

	// Because postnet is not a true 'binary' system, we'll use a switchcaseto assign the appropriate number strings
	int currentDigit;

	for(int i = 5; i > 0; i--)
	{
		currentDigit = zip % 10;
		zip /= 10;

		std::cout << currentDigit;
		std::cout << std::endl;
		std::cout << zip;
		std::cout << std::endl;
		

		switch(currentDigit)
		{
			case 0:
				strZip += ("11000");
				break;
			case 1:
				strZip += ("00011");
				break;
			case 2:
				strZip += ("00101");
				break;
			case 3:
				strZip += ("00110");
				break;
			case 4:
				strZip += ("01001");
				break;
			case 5:
				strZip += ("01010");
				break;
			case 6:
				strZip += ("01100");
				break;
			case 7:
				strZip += ("10001");
				break;
			case 8:
				strZip += ("10010");
				break;
			case 9:
				strZip += ("10100");
				break;
		}
	}

	// And now to add the first 1 to the code
	strZip += ("1");

	return strZip;
}

int Cipher::bitToInt(std::string zip)
{
	return 1234;
}
