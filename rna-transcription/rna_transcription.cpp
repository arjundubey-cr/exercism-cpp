#include "rna_transcription.h"

namespace rna_transcription
{
    std::string to_rna(std::string dna)
    {

        for (auto &nuc : dna)
        {
            nuc = pairs.at(nuc);
        }

        return dna;
    }

    char to_rna(char dna)
    {
        return pairs.at(dna);
    }

} // namespace rna_transcription
