#include "ls/Item.h"
#include "ls/Exception.h"

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
        if(text != toString())
            throw Exception(Exception::LS_EFORMAT);
    }
}
