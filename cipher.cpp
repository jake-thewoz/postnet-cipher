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
	// Okay. First, we remove the first and last '1'
	zip = zip.substr(1, zip.length() - 2);

	// Then we'll loop through for all the digits
	int intZip(0);
	std::string numberCode;

	while (!zip.empty())
	{
		intZip *= 10;
		numberCode = zip.substr(0,5);
		zip = zip.substr(5, zip.length() - 5);

		switch(std::stoi(numberCode))
		{
			case 11000:
				intZip += 0;
				break;
			case 11:
				intZip += 1;
				break;
			case 101:
				intZip += 2;
				break;
			case 110:
				intZip += 3;
				break;
			case 1001:
				intZip += 4;
				break;
			case 1010:
				intZip += 5;
				break;
			case 1100:
				intZip += 6;
				break;
			case 10001:
				intZip += 7;
				break;
			case 10010:
				intZip += 8;
				break;
			case 10100:
				intZip += 9;
				break;
		}
	}
	return intZip;
}

void Cipher::printPostnet()
{
	for(char i : bitZip)
	{
		if (i == '1') std::cout << "|";
		else std::cout << " ";
	}
	
	std::cout << std::endl;

	for(int i = 0; i < bitZip.length(); i++)
		std::cout << "|";

	std::cout << std::endl;
}
