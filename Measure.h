#include <iostream>
#include <string>
using namespace std;

class Measure{
private:
    int little;
    int lot;
    int heap;
public: 
    int getLittle();
    int getLot();
    int getHeap();
    void setLittle(int a);
    void setLot(int a);
    void setHeap(int a);

    //default constructor
    Measure();
    //overloaded constructor: passing values for all attributes (littles, lots, and heaps)
    Measure(int little, int lot, int heap);
    //overloaded constructor: setting values for just the littles attribute.
    Measure(int &little);


    //task 3 modifications:


};

