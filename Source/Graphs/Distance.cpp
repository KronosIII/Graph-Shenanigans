//
// Created by Henry Dacres on 1/25/22.
//
#include "Distance.h"
#include <iostream>
#include <cmath>

class Coordinate {

public:
    Coordinate(double Latitude, double Longitude): ObjectLatitude(Latitude),ObjectLongitude(Longitude){}

    double Latitude() const{
        return ObjectLatitude;
    }

    double Longitude() const{
        return ObjectLongitude;
    }

private:
    double ObjectLatitude;
    double ObjectLongitude;
};

double HaversineDistance(double x, double y, double z, double w) {

    Coordinate D(1,2);
    return 0;
}

double VincentyDistance(double x, double y, double z, double w) {
    return 0;
}
