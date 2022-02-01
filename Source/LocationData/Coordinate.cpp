#include "Coordinate.h"
#include "iostream"
void Coordinate::UserLocation(){
#if defined(_WIN32) || defined(__CYGWIN__)
    // Windows (x86 or x64)
   std::cout << "-----------WIN";
#elif defined(__linux__)
    // Linux
   std::cout << "-----------LIN";
#elif defined(__APPLE__) && defined(__MACH__)
    // Mac OS
     std::cout << "-----------APL";

#elif defined(unix) || defined(__unix__) || defined(__unix)
    // Unix like OS
    // ...
#else
#error Unknown environment!
#endif
}

double Coordinate::HaversineDistance(const Coordinate &Point1, const Coordinate &Point2) {
UserLocation();
    double Point1_Latitude_to_Radians  =  Coordinate::DegreesToRadians(Point1.Latitude());
    double Point2_Latitude_to_Radians  =  Coordinate::DegreesToRadians(Point2.Latitude());
    double Point1_Longitude_to_Radians =  Coordinate::DegreesToRadians(Point1.Longitude());
    double Point2_Longitude_to_Radians =  Coordinate::DegreesToRadians(Point2.Longitude());

    double LatitudeDifference = Point2_Latitude_to_Radians - Point2_Latitude_to_Radians;
    double LongitudeDifference = Point2_Longitude_to_Radians - Point1_Longitude_to_Radians;

    double computation = asin(sqrt(sin(LatitudeDifference / 2.0) * sin(LatitudeDifference/ 2.0)
                                   + cos(Point1_Latitude_to_Radians) * cos(Point2_Latitude_to_Radians ) * sin(LongitudeDifference / 2) * sin(LongitudeDifference / 2)));
    return 2 * EarthRadiusKm * computation;
}


