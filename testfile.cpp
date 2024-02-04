#include "Measure.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
while (true){
     // Prompt user to input values for obj1
        int littles1, lots1, heaps1;
        std::cout << "Enter values for obj1 (littles lots heaps): ";
        std::cin >> littles1 >> lots1 >> heaps1;

        Measure obj1(littles1, lots1, heaps1);

        // Prompt user for the operation to perform
        char operation;
        std::cout << "Enter the number for the operation to perform (1. +, 2. -, 3.  /, 4.  *, 5.  ==): ";
        std::cin >> operation;

        // Prompt user to input values for obj2
        int littles2, lots2, heaps2;
        std::cout << "Enter values for obj2 (littles lots heaps): ";
        std::cin >> littles2 >> lots2 >> heaps2;

        Measure obj2(littles2, lots2, heaps2);

    //Branching to chosen operation
    if (operation == 1){
        // obj1 + obj2
        Measure result_add = obj1 + obj2;
        cout << "Addition: " << static_cast<string>(result_add) << endl;

    }
    else if(operation ==2){
        // obj1 - obj2
        Measure result_sub = obj1 - obj2;
        cout << "Subtraction: " << static_cast<string>(result_sub) << endl;

    }
    else if (operation == 3){
        //obj1 / obj2
        Measure result_divide = obj1 / obj2;
        cout << "Divide: " << static_cast<string>(result_divide) << endl;

    }

    else if (operation ==4){
        // obj1 * obj2
        Measure result_mult = obj1 * obj2;
        cout << "Multiplication: " << static_cast<string>(result_mult) << endl;


    }
    else if (operation ==5){
        //obj1 == obj2
        bool result_equal = (obj1 == obj2);
        if (result_equal) {
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
    cout << "Do you wish to continue? (y/n)";
    char yn;
    cin >> yn;
    if (yn == 'N' | yn == 'n'){
        cout << "Thanks, have a nice day :)";
        break;
    }
}


}
}
