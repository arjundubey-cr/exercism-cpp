#include "hamming.h"
#include <stdexcept>
#include <iostream>
using namespace std;
namespace hamming
{
    int compute(string str1, string str2)
    {
        int counter = 0;
        if (str1.length() != str2.length())
        {
            throw domain_error("Unequal Length");
        }
        int endVal = str1.length();
        for (int i = 0; i < endVal; i++)
        {
            if (str1[i] != str2[i])
            {
                counter++;
            }
        }
        return counter;
    }
} // namespace hamming
