#include "string_util.h"
#include <iostream>

int main(int argc, char* argv[])
{
	string str = StringUtil::int_to_str(34);
	cout<<"str="<<str<<endl;

	int num = StringUtil::str_to_int("100");
	cout<<"num="<<num<<endl;
	return 0;
}

