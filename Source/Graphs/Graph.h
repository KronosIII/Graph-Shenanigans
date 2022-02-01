//
// Created by Henry Dacres on 1/25/22.
//

#ifndef GRAPHTHEORY_GRAPH_H
#define GRAPHTHEORY_GRAPH_H

#include <string>


/**
 * Enum Represents a Person Object,
 * these nodes serve as the backbone of the app these will be users
 */

struct ObjectNode {

    public:
    int val, cost;
    ObjectNode* next;

    protected:
        long ObjectID;
        double longitude, latitude;
        std::string Description;
};

/**
 * @PersonNode Represents a Person Object,
 * these nodes serve as the backbone of the app these will be users
 */

struct PersonNode : ObjectNode{
    int age;                          //@sex Users Age
    std::string  sex;                 //@sex Users Sex
    std::string  gender;              //@gender Users Gender
    std::string  userName;            //@userName Person userName
    std::string  phone;               //@phone Person
    std::string  firstName, lastName; //@firstName Users FirstName | @lastName Users LastName

};

/**
 * @PlaceNode Represents a Location
 */
struct PlaceNode : ObjectNode{
    std::string  Name;            //@userName Person userName

};

/** PlaceNode Represents an Item of Interest**/
struct ThingNode{

};


// structure to store edges
struct graphEdge {
    int start_ver, end_ver, weight;
};

class Graph {
    struct adjNode {
        int val, cost;
        adjNode* next;
    };
// structure to store edges
    struct graphEdge {
        int start_ver, end_ver, weight;
    };
};


#endif //GRAPHTHEORY_GRAPH_H
