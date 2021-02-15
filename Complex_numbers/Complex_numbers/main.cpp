//
//  main.cpp
//  Complex_numbers
//
//  Created by Petar Vidakovic on 31/1/21.
//

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
#define PI 3.141592654
using namespace std;


void Convert_complex (double real, double imaginary){
    double modulus, theta;
    
    modulus = sqrt((real*real)+(imaginary*imaginary));
    theta = atan2(imaginary, real)*180/PI;
    
    if ((real<0 || real>0) && imaginary<0)
        theta = theta + 360;
        cout << "|Z| = " << setprecision(2) << modulus << " cos " << setprecision(5) <<theta << " + i sin " << theta << endl;
        cout << "|Z| = " << setprecision(2) << modulus << " e^i(360 + " << setprecision(5) <<theta << ")" << endl;
    
    do {
        theta = theta - 360;
    } while (theta > 360);
    cout << "|Z| = " << setprecision(2) << modulus << " e^i(" << setprecision(5) <<theta+360 << ")" << endl;
    
    // a+bi
    cout << "|Z| = " << real << "+" << imaginary << "i" << endl;
    
    
}


int main(){
    double real, imaginary;
    int option;
    cout << "Complex converter." << endl;
    cout << "1 to make a calc 0 to exit: " << endl;
    cin >> option;
    
    while (option == 1) {
        if (option != 1){
            cout << "Thanks" << endl;
            return 0;
        }
        
        cout << "Enter real component: ";
        cin >> real;
        cout << "Enter imaginary component: ";
        cin >> imaginary;
        
        Convert_complex(real, imaginary);
        
    }
}


