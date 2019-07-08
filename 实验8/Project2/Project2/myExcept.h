#pragma once
class MyExcept
{ public:
	virtual const char* getWhat()=0;
};
class MyFormatError:public MyExcept
{ public:
	const char* getWhat(){return "Format Error.";}
};
class MyIllegal:public MyExcept
{ public:
	const char* getWhat(){return "Illegal.";}
};