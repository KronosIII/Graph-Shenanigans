//
// Created by Henry Dacres on 2/1/22.
//

#ifndef GRAPHTHEORY_DATANODES_H
#define GRAPHTHEORY_DATANODES_H
#include "Source/LocationData/Coordinate.h"
#include <iostream>
#include <string>

class DataNodes {
     struct AbstractNode {
         Coordinate LocationData;
         virtual int ObjectID() = 0;
    };

    struct LocationNode{};
    struct ObjectNode {


    };

    struct PersonNodeQ {
        int age{};                            //@sex Users Age
        std::string  sex;                   //@sex Users Sex
        std::string  gender;                //@gender Users Gender
        std::string  userName;              //@userName Person userName
        std::string  phone;                 //@phone Person
        std::string  firstName, lastName;   //@firstName Users FirstName | @lastName Users LastName
        std::string  UserBio;

    };







};



#endif //GRAPHTHEORY_DATANODES_H
