#include "Measure.h"
#include <iostream>
#include <string>
using namespace std;

void inputobjects(){
    cout << "Enter values for the first object: \n";
    Measure obj1;
    cout << "Littles: ";
    int little1;
    cin >> little1;
    obj1.setLittle(little1);
    cout << "\nLots: ";
    int lots1;
    cin >> lots1;
    obj1.setLot(lots1);
    cout << "\nHeaps: ";
    int heaps1;
    cin >> heaps1;
    obj1.setHeap(heaps1);
    
    cout << "\n Enter the values for the second object: \n ";
    Measure obj2;
    cout << "Littles: ";
    int little2;
    cin >> little2;
    obj2.setLittle(little2);
    cout << "\nLots: ";
    int lots2;
    cin >> lots2;
    obj2.setLot(lots2);
    cout << "\nHeaps: ";
    int heaps2;
    cin >> heaps2;
    obj2.setHeap(heaps2);
}

int main(){
while (true){

    inputobjects();

    //input chosen operation
    cout << "What operations would you like to perform? (1. + 2. - 3. / 4. * 5. ==)";
    int operation; 
    cin >> operation;

    //Branching to chosen operation
    if (operation == 1){
        // obj1 + obj2
    }
    else if(operation ==2){
        // obj1 - obj2
    }
    else if (operation == 3){
    }
    else if (operation ==4){
        // obj1 * obj2
    }
    else if (operation ==5){
        //obj1 == obj2
    }
    else{
        cout << "Invalid operation entered. Please try again.";
    }
    
    //output results of object 1 using string overload function
    cout << "Result: " << static_cast<std::string>(result) <<"\n";

    //allow user to perform actions again
    cout << "Do you wish to continue? (y/n)";
    char yn;
    cin >> yn;
    if (yn == 'N' | yn == 'n'){
        cout << "Thanks, have a nice day :)";
        break;
    }
}


}
