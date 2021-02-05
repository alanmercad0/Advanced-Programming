#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>

using namespace std;

void  printable(char character){
    bool print = isprint(character);
        if (print){
            bool digit = isdigit(character);
            if(digit){
                cout << "It is printable and digit" << endl;
            }
            else{
                cout << "It is printable" << endl;
            }    
        }
        else cout << "It is not printable" << endl;  
 
}

void sinlog(double number1, double number2){
    double sin_1 = sin(number1);
    double sin_2 = sin(number2);
    double log_1 = log2(sin_1 + sin_2);
    cout << sin_1 << endl;
    cout << sin_2 << endl;
    cout << log_1 << endl;
}

void startWithA(string input){
    size_t lowerfound = input.find("a");
    size_t upperfound = input.find("A");
    if((lowerfound == 0 || upperfound == 0) && (size_t != string::npos)){
        cout << "Starts with A." <<endl;
    }
    else{
        cout << "Doesn't start with A." << endl;
    }
}

int main(){
    startWithA("America");
    return 0;

}