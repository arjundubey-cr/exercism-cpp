#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <map>
#include <string>

namespace nucleotide_count
{
    class counter
    {
        std::map<char, int> nucs;

    public:
        counter(std::string s);

        const std::map<char, int> nucleotide_counts() const;
        int count(char ch) const;
    };
} // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H