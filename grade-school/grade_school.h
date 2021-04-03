#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <map>
#include <string>

namespace grade_school
{
    class school
    {
    private:
    public:
        school();
        std::map<int, std::string> roster() const;
    };

} // namespace grade_school

#endif // GRADE_SCHOOL_H