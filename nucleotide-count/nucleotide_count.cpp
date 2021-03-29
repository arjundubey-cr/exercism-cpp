#include "nucleotide_count.h"
#include <string>
#include <map>
#include <stdexcept>

namespace nucleotide_count
{
    counter::counter(std::string s)
    {
        nucs = {
            {'A', 0},
            {'T', 0},
            {'C', 0},
            {'G', 0},
        };
        for (char c : s)
        {
            if (nucs.find(c) == nucs.end())
            {
                throw std::invalid_argument(std::string("Invalid Nucleotide Value"));
            }
            ++nucs[c];
        }
    }
    const std::map<char, int> counter::nucleotide_counts() const
    {
        return nucs;
    }

    int counter::count(char ch) const
    {
        if (nucs.find(ch) == nucs.end())
        {
            throw std::invalid_argument(std::string("Invalid Nucleotide value"));
        }
        return nucs.at(ch);
    }

} // namespace nucleotide_count
