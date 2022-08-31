#ifndef LS_ITEM_H
#define LS_ITEM_H

#include "string"

namespace ls
{
    class Item
    {
        public:
            virtual std::string toString() = 0;
            int parseFrom(const std::string& text);
        protected:
            virtual int parse(const std::string& text) = 0;
            int check(const std::string& text);
    };
}

#endif
