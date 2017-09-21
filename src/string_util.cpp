#include "string_util.h"
#include <iostream>  
#include <sstream>  

StringUtil::StringUtil(void)
{
}

StringUtil::~StringUtil(void)
{
}

string StringUtil::int_to_str(int num)
{
	std::stringstream stream;
	stream << num;
	return stream.str(); 
}

int StringUtil::str_to_int(const string& str)
{
	int num = atol(str.c_str());
	return num;
}
