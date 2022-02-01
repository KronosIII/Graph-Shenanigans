//
// Created by Henry Dacres on 1/25/22.
//

#ifndef UNTITLED_DISTANCE_H
#define UNTITLED_DISTANCE_H
//
// Created by Henry Dacres on 1/25/22.
//
#include <cmath>

class Coordinate{

public:

    Coordinate(double Latitude, double Longitude): ObjectLatitude(Latitude),ObjectLongitude(Longitude){}

    double Latitude() const{
        return ObjectLatitude;
    }

    double Longitude() const{
        return ObjectLongitude;
    }

    static double HaversineDistance(const Coordinate &Point1, const Coordinate &Point2);

    static double DegreesToRadians(double DegreeAngle){
        return M_PI * DegreeAngle / 180.0;
    }
protected:
    constexpr static const double EarthRadiusKm = 6372.8;
private:
    double ObjectLatitude;
    double ObjectLongitude;

    static void UserLocation();
};







#endif //UNTITLED_DISTANCE_H
