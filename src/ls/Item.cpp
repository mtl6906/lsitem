#include "ls/Item.h"
#include "ls/Exception.h"
#include "ls/DefaultLogger.h"

using namespace std;

namespace ls
{
    int Item::parseFrom(const string &text)
    {
        int result = parse(text);
	if(result < 0)
		return result;
        return check(text);
    }

    int Item::check(const string &text)
    {
	string str = toString();
        if(text != str)
	{
		LOGGER(ls::ERROR) << text << " is different with " << str << "(" << (int)text.size() << ", " << (int)str.size() << ")" << ls::endl;
		return Exception::LS_EFORMAT;
	}
	return Exception::LS_OK;
    }
}
