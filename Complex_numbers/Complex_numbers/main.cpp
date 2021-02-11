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
        if (opiton != 1){
            return 0;
            
        }
        
        cout << "Enter real component: ";
        cin >> real;
        cout << "Enter imaginary component:";
        cin >> imaginary;
        
        double modulus, theta;
        
        modulus = sqrt((real*real)+(imaginary*imaginary));
        theta = atan2(imaginary, real)*180/PI;
        
        if ((real<0 || real>0) && imaginary<0)
            theta = theta + 360;

        cout << "|Z| = " << setprecision(2) << modulus << " cos " << theta << " + i sin " << theta << endl;
    }
}
