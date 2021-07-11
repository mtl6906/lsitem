#ifndef LS_ITEM_H
#define LS_ITEM_H

#include "string"

namespace ls
{
    class Item
    {
        public:
            virtual std::string toString() = 0;
            void parseFrom(const std::string& text);
        protected:
            virtual void parse(const std::string& text) = 0;
            void check(const std::string& text);
    };
}

#endif