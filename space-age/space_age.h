#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age
{
    class space_age
    {

        double const EARTH_YEAR_IN_SECS = 31557600;

    private:
        long long int age_in_seconds;

    public:
        space_age(const long long int age)
        {
            age_in_seconds = age;
        }
        int seconds() const;
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