#include <iostream>
#include "Source/Graphs/Graph.h"
#include "Source/Graphs/Graph.cpp"
#include "Source/LocationData/Coordinate.h"
using namespace std;

void display_AdjList(ObjectNode* ptr_, int i)
{
    while (ptr_ != nullptr) {
        cout << "(" << i << ", " << ptr_->val
             << ", " << ptr_->cost << ") ";
        ptr_ = ptr_->next;
    }
    cout << endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    Coordinate Tokyo(35.689487,139.691711);
    Coordinate NYC(40.714268,-74.005974);

    NYC.Longitude();
    cout<< Coordinate::HaversineDistance(Tokyo,NYC) << " KM";


//    // graph edges array.
//    graphEdge edges[] = {
//            // (x, y, w) -> edge from x to y with weight w
//            {0,1,2},{0,2,4},{1,4,3},{2,3,2},{3,1,4},{4,3,3}
//    };
//    int N = 6;      // Number of vertices in the graph
//    // calculate number of edges
//    int n = sizeof(edges)/sizeof(edges[0]);
//    // construct graph
//    DiaGraph diagraph(edges, n, N);
//    // print adjacency list representation of graph
//    cout<<"Graph adjacency list "<<endl<<"(start_vertex, end_vertex, weight):"<<endl;
//    for (int i = 0; i < N; i++)
//    {
//        // display adjacent vertices of vertex i
//        display_AdjList(diagraph.head[i], i);
//    }
    return 0;
}
