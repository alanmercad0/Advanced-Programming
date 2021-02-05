#include<iostream>
#include<string>
using namespace std;

double taxDue(double taxableIncome) {

    double (x) = 0;

    if (taxableIncome < 9000){
        x = 0;
    }
    else if (taxableIncome > 9000 && taxableIncome < 25000){
        x = (taxableIncome - 9000) * 0.07;
    }
    else if (taxableIncome >= 25000 && taxableIncome < 50000){
        x = ((taxableIncome - 25000) * 0.15) + 1120;
    }
    else if (taxableIncome >= 50000 && taxableIncome < 75000){
        x= ((taxableIncome - 50000) * 0.25) + 4870;
    }
    else {
        x = ((taxableIncome - 75000) * 0.35) + 11120;
    }
    return x;
}
