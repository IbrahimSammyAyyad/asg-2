
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <cstdlib>
#include <stdio.h>
#include<iostream>
#include "Header.h"

using namespace std;




int main() {
    //creating the people 
    Professional pros(5);
    Nonprofessional nons(10);
    //outputting the predetermined stuff
    cout << "Nonprofessional salary = " << nons.getsalary() << endl;
    cout << "Nonprofessional vacation = " << nons.getvacation() << endl;
    cout << "Nonprofessional insurance = " << nons.getinsurance() << endl;
    cout << "Professional salary = " << pros.getsalary() << endl;
    cout << "Professional vacation = " << pros.getvacation() << endl;

    return 0;

}


