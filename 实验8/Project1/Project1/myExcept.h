#pragma once
class myExcept
{
public:
	virtual char* getWhat() = 0;
};
class MyFormatError :public myExcept
{
public:
	char* getWhat() const
	{
		char* a=new char[100];
		strcpy(a,"Format Error.");
		return a;
	}
};
class MyIllegal :public myExcept
{
public:
	char* getWhat() 
	{
		char* a = new char[100];
		strcpy(a, "Format Error.");
		return a;
	}
};
