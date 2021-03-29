#include "reverse_string.h"

namespace reverse_string
{
    std::string reverse_string(std::string str)
    {
        std::string c;
        std::copy(str.rbegin(), str.rend(), std::back_inserter(c));
        return c;
    }
} // namespace reverse_string
