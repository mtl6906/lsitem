#include "ls/Item.h"
#include "iostream"

using namespace std;

class Int : public ls::Item
{
	public:
		void parse(const string &text) override
		{
			number = stoi(text);
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
	i.parseFrom("123465");
	cout << i.toString() << endl;
	i.parseFrom("1234.3");
	return 0;
}
