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

int main(){
    double real, imaginary;
    int opiton;
    cout << "Complex converter." << endl;
    cout << "1 to make a calc 0 to exit: " << endl;
    cin >> opiton;
    
    while (opiton == 1) {
        cout << "Enter real component: ";
        cin >> real;
        cout << "Enter imaginary component:";
        cin >> imaginary;
        
        double modulus, theta;
        
        modulus = sqrt((real*real)+(imaginary*imaginary));
        theta = (imaginary/real);
        theta = atan(theta);
        theta = theta*(180/PI);
        
        cout << modulus << endl;
        cout << theta << endl;
        
        // if (real < 0 
        
        if (real>0 && imaginary>0) //Q1
            cout << "Polar Form: " << std::setprecision(2) << modulus << " Cos("<< std::setprecision(2) << theta <<")+i Sin(" << std::setprecision(2) << theta << ")" << endl;
        
        else if (real<0 && imaginary>0) //Q2
            cout << "Polar Form: " << std::setprecision(4) << modulus << " Cos("<< std::setprecision(4) << theta+180.00 <<")+i Sin(" << std::setprecision(2) << theta+180.00 << ")" << endl;
        
        else if (real<0 && imaginary<0) //Q3
            cout << "Polar Form: " << std::setprecision(4) << modulus << " Cos("<< std::setprecision(4) << theta+180.00 <<")+i Sin(" << std::setprecision(2) << theta+180.00 << ")" << endl;
        
        else if (real<0 && imaginary>0) //Q4
            cout << "Polar Form: " << std::setprecision(4) << modulus << " Cos("<< std::setprecision(4) << theta+360.00 <<")+i Sin(" << std::setprecision(4) << theta+360.00 << ")" << endl;
    }
}
