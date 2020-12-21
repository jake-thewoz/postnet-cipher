#include"cipher.h"
#include<string>
#include<iostream> // For testing

Cipher::Cipher(){}

int numberOfDigits(int zip)
{
	std::string strZip = std::to_string(zip);
	return strZip.length();
}

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
	strZip.insert(0, "1");

	// Because postnet is not a true 'binary' system, we'll use a switchcase to assign the appropriate number strings
	int currentDigit;
	int totalDigits = numberOfDigits(zip);

	for(int i = 0; i < totalDigits; i++)
	{
		currentDigit = zip % 10;
		zip /= 10;

		switch(currentDigit)
		{
			case 0:
				strZip.insert(0, "11000");
				break;
			case 1:
				strZip.insert(0, "00011");
				break;
			case 2:
				strZip.insert(0, "00101");
				break;
			case 3:
				strZip.insert(0, "00110");
				break;
			case 4:
				strZip.insert(0, "01001");
				break;
			case 5:
				strZip.insert(0, "01010");
				break;
			case 6:
				strZip.insert(0, "01100");
				break;
			case 7:
				strZip.insert(0, "10001");
				break;
			case 8:
				strZip.insert(0, "10010");
				break;
			case 9:
				strZip.insert(0, "10100");
				break;
		}
	}

	// And now to add the first 1 to the code
	strZip.insert(0, "1");

	return strZip;
}

int Cipher::bitToInt(std::string zip)
{
	return 1234;
}
