#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    char number;
    cout << "1. Water" << endl << "2. Coke" << endl << "3. Sprite" << endl << "4. Fruit Punch" << endl << "5. Iced Tea" << endl;
    cout << "Please select the number corresponding to the drink you would like: ";
    cin >> number;
    switch(number){
        case '1':
            cout << "Water" << endl;
            break;
        case '2':
            cout << "Coke" << endl;
            break;
        case '3':
            cout << "Sprite" << endl;
            break;
        case '4':
            cout << "Fruit Punch" << endl;
            break;
        case '5':
            cout << "Iced Tea" << endl;
        default :
            cout << "Error" << endl;         
    }
    return 0;
}

