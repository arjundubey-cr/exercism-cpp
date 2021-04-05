#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <unordered_map>
namespace rna_transcription
{
    std::string to_rna(std::string dna);
    char to_rna(char dna);

    const std::unordered_map<char, char> pairs = {{'C', 'G'}, {'G', 'C'}, {'A', 'U'}, {'T', 'A'}}; // complementary pairs

} // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H