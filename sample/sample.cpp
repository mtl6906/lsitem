#include "ls/Item.h"
#include "ls/DefaultLogger.h"
#include "ls/Exception.h"

using namespace std;
using namespace ls;

class Int : public ls::Item
{
	public:
		int parse(const string &text) override
		{
			number = stoi(text);
			return Exception::LS_OK;
		}

		string toString()
		{
			return to_string(number);
		}
	protected:
		int number;
};

int main()
{
	Int i;
	if(i.parseFrom("123465") < 0)
	{
		LOGGER(ls::INFO) << "parse failed" << ls::endl;
	}
	else
	{
		LOGGER(ls::INFO) << i.toString() << ls::endl;
	}

	if(i.parseFrom("1234.3") < 0)
	{
		LOGGER(ls::INFO) << "parse from failed" << ls::endl;
	}
	else
	{
		LOGGER(ls::INFO) << i.toString() << ls::endl;
	}

	return 0;
}
