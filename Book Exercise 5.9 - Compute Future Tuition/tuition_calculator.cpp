//
//  tuition_calculator.cpp
//  Book Exercise 5.9 - Compute Future Tuition
//
//  Created by ax on 9/21/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "Let us Calculate Future Tuition, Shall We?" << endl;
    cout << "Starting tuition this year: $10,000" << endl;
    cout << "Tuition increases by 5% each year." << endl;
    double tuition = 10000;
    double calculated_total_tuition = 0.0;
    
    for (int year = 1; year < 15; year++) {
        
        if (year > 10) {
            calculated_total_tuition = calculated_total_tuition + tuition;
        }
        
        tuition = tuition + tuition * .05;
    }

    cout << "Four years worth of tuition starting ten years from now is: " << calculated_total_tuition << endl;
    
    return 0;
}
