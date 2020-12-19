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
	strZip.append("1");

	// Because postnet is not a true 'binary' system, we'll use a switchcaseto assign the appropriate number strings
	int currentDigit;

	for(int i = 5; i > 5; i--)
	{
		currentDigit = zip % 10;
		zip /= 10;

		switch(currentDigit)
		{
			case 0:
				strZip.append("11000");
			case 1:
				strZip.append("00011");
			case 2:
				strZip.append("00101");
			case 3:
				strZip.append("00110");
			case 4:
				strZip.append("01001");
			case 5:
				strZip.append("01010");
			case 6:
				strZip.append("01100");
			case 7:
				strZip.append("10001");
			case 8:
				strZip.append("10010");
			case 9:
				strZip.append("10100");
		}
	}

	// And now to add the first 1 to the code
	strZip.append("1");

	return strZip;
}

int Cipher::bitToInt(std::string zip)
{
	return 1234;
}
