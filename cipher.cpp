#include"cipher.h"
#include<string>

/*
public:
	Cipher();
	void setIntZip(int &zip);
	void setBitZip(std::string &zip);
	int getIntZip();
	std::string getBitZip();
private:
	int intZip;
	std::string bitZip;
	void intToBit(int &zip);
	void bitToInt(std::string &zip
*/

Cipher::Cipher(){}

void Cipher::setIntZip(int &zip)
{
	intZip = zip;
	bitZip = intToBit(zip);
}

void Cipher::setBitZip(std::string &zip)
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

std::string Cipher::intToBit(int &zip)
{
	return "1111";
}

int Cipher::bitToInt(std::string &zip)
{
	return 1234;
}
