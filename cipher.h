#pragma once
#include<bitset>
#include<string>

class Cipher
{
public:
	Cipher();
	void setIntZip(int &zip);
	void setBitZip(std::string &zip);
	int getIntZip();
	std::string getBitZip();
private:
	int intZip;
	std::string bitZip;
	std::string intToBit(int &zip);
	int bitToInt(std::string &zip);
}
