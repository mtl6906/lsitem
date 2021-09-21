#include "ls/Item.h"
#include "ls/Exception.h"
#include "ls/DefaultLogger.h"

using namespace std;

namespace ls
{
    void Item::parseFrom(const string &text)
    {
        parse(text);
        check(text);
    }

    void Item::check(const string &text)
    {
	string str = toString();
        if(text != str)
	{
		LOGGER(ls::ERROR) << text << " is different with " << str << ls::endl;
		throw Exception(Exception::LS_EFORMAT);
	}
    }
}
