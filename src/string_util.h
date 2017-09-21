#ifndef _COMMON_STRING_UTILITY_H_
#define _COMMON_STRING_UTILITY_H_
#include <string>
using namespace std;

class StringUtil
{
public:
	StringUtil(void);
	~StringUtil(void);
	static string int_to_str(int num);
	static int str_to_int(const string& str);
};
#endif