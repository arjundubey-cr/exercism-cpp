#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <string>
#include <map>

namespace space_age
{
    class space_age
    {

        double const earth_year_in_seconds = 31557600;
        std::map<std::string, double> year_wrt_earth =
            {{"Mercury", 0.2408467},
             {"Venus", 0.61519726},
             {"Mars", 1.8808158},
             {"Jupiter", 11.862615},
             {"Saturn", 29.447498},
             {"Uranus", 84.016846},
             {"Neptune", 164.79132}};

    private:
        long long int age_in_seconds;

    public:
        explicit space_age(const long long int seconds);
        long long int seconds() const;
        double calculate_age(std::string planet_name) const;
        double on_earth() const;
        double on_mars() const;
        double on_venus() const;
        double on_mercury() const;
        double on_jupiter() const;
        double on_uranus() const;
        double on_saturn() const;
        double on_neptune() const;
    };

} // namespace space_age

#endif // SPACE_AGE_H