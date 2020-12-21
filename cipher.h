#pragma once
#include<string>

class Cipher
{
public:
	Cipher();
	friend int numberOfDigits(int zip);
	void setIntZip(int zip);
	void setBitZip(std::string zip);
	int getIntZip();
	std::string getBitZip();
	void printPostnet();
private:
	int intZip;
	std::string bitZip;
	std::string intToBit(int zip);
	int bitToInt(std::string zip);
};
