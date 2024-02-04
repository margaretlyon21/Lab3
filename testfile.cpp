#include "Measure.h"
#include "Measure.cpp"
#include <iostream>
#include <string>
using namespace std;


int main(){
while (true){
     // input values for obj1
        int littles1, lots1, heaps1;
        cout << "Enter values for obj1 (littles lots heaps): ";
        cin >> littles1 >> lots1 >> heaps1;

        Measure obj1(littles1, lots1, heaps1);

        // choose operation
        int operation;
        cout << "Enter the number for the operation to perform (1. +, 2. -, 3.  /, 4.  *, 5.  ==): ";
        cin >> operation;

        // input values for obj2
        int littles2, lots2, heaps2;
        cout << "Enter values for obj2 (littles lots heaps): ";
        cin >> littles2 >> lots2 >> heaps2;

        Measure obj2(littles2, lots2, heaps2);

    //Branching to chosen operation
    if (operation == 1){
        // obj1 + obj2
        Measure result = obj1 + obj2;
        cout << "Result: " << static_cast<std::string>(result) << endl;

    }
    else if(operation ==2){
        // obj1 - obj2
        Measure result = obj1 - obj2;
        cout << "Result: " << static_cast<std::string>(result) << endl;

    }
    else if (operation == 3){
        //obj1 / obj2
        Measure result = obj1 / obj2;
        cout << "Result: " << static_cast<std::string>(result) << endl;


    }
    else if (operation ==4){
        // obj1 * obj2
        Measure result = obj1 * obj2;
        cout << "Result: " << static_cast<std::string>(result) << endl;


    }
    else if (operation ==5){
        //obj1 == obj2
        bool result = (obj1 == obj2);
        if (result) {
		    cout << "Equal: True" << endl;
	    }
	    else {
		    cout << "Equal: False" << endl;
	    }

    }
    else{
        cout << "Invalid operation entered. Please try again.";
    }
    //allow user to perform actions again
    cout << "\n Do you wish to continue? (y/n)";
    char yn;
    cin >> yn;
	cout << "\n"
    if (yn == 'N' | yn == 'n'){
        cout << "Thanks, have a nice day :)";
        break;
    }
}


}
