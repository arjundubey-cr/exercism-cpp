#include "space_age.h"

namespace space_age
{
    double space_age::calculate_age(std::string planet_name) const { return on_earth() / year_wrt_earth.at(planet_name); }
    space_age::space_age(const long long int seconds) { age_in_seconds = seconds; }
    long long int space_age::seconds() const { return age_in_seconds; }
    double space_age::on_earth() const { return age_in_seconds / earth_year_in_seconds; }
    double space_age::on_mercury() const { return calculate_age("Mercury"); }
    double space_age::on_venus() const { return calculate_age("Venus"); }
    double space_age::on_neptune() const { return calculate_age("Neptune"); }
    double space_age::on_mars() const { return calculate_age("Mars"); }
    double space_age::on_jupiter() const { return calculate_age("Jupiter"); }
    double space_age::on_saturn() const { return calculate_age("Saturn"); }
    double space_age::on_uranus() const { return calculate_age("Uranus"); }

} // namespace space_age
