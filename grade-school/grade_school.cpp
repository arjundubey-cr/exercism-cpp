#include "grade_school.h"

#include <map>
#include <string>
#include <algorithm>

namespace grade_school
{
    school::school()
    {
        studentList = {};
    }
    std::map<int, std::vector<std::string>> school::roster() const
    {
        return studentList;
    }
    void school::add(std::string name, int grade)
    {
        studentList[grade].emplace_back(name);
        sort(studentList[grade].begin(), studentList[grade].end());
    }
    std::vector<std::string> school::grade(int grade) const
    {
        if (studentList.count(grade) == 0)
            return {};
        return studentList.at(grade);
    }
} // namespace grade_school
