#include<iostream>
#include <math.h>
#include <string>
using namespace std;


//Char Part
void practiceCharMethod1(char c);
void practiceCharMethod2(char c);
void practiceCharMethod3(char c);
void practiceCharMethod4(char c);

int main()
{
  practiceCharMethod1('f'); // Test with different characters
  
  practiceCharMethod2('%'); // Test with different characters
  
  practiceCharMethod3('L'); // Test with different characters
  
  practiceCharMethod4('a'); // Test with different characters
  
  return 0;
}

// ONLY COPY & PASTE THE SPECIFIC METHOD AS YOUR ANSWER

/* The function must print the inverse capitalization of the character passed as an argument */
  
void practiceCharMethod1(char character)
{
  cout << "Inverse Capitalization: ";
  if(islower(character)){ 
      character=toupper(character);
      cout << character << endl;
  }
  else{ 
      character=tolower(character);
      cout << character << endl;
  }
}
  
/* Print only digits or alphanumeric characters. If other print "none". */
  
void practiceCharMethod2(char character)
{
  cout << "The character is: ";
  if(isalnum(character)){
      cout << character << endl;
  }
  else{
      cout << "none" << endl;
  }
  
  //YOUR CODE GOES HERE
}

/* You will need to verify the character passed as an argument. 
  Some times it can only be a space or a punctuation character. Validate it before using it. 
  If the character is other than a space or a punctuation, then it is okay to use it.
*/
  
void practiceCharMethod3(char character)
{
  bool okToUse;
    
  if(isalnum(character)) okToUse = 1;

  else okToUse = 0;
    
  cout << (okToUse ? "Character is valid" : "Character is not valid") << endl;
}
  
/* You will need to verify if the character passed as an argument is equal to 'a', 'b', or 'c'
  and if so, print "first three letters". 
  It must be CASE INSENSITIVE, so if 'A', 'B' or 'C' is given, it must also print "first three letters". 
*/
  
void practiceCharMethod4(char character)
{
    if(character == 'a' || character == 'A'){
        cout << "first three letters" << endl;
    }
    else if(character == 'b' || character == 'B'){
        cout << "first three letters" << endl;
    }
    else if(character == 'c' || character == 'C'){
        cout << "first three letters" << endl;
    }    
    else{
        cout << "none" << endl;
    }
 
  
}


//Math Part
void radius(double x1, double y1, double xCenter, double yCenter) {
    
    
    double r1=(x1-xCenter)*(x1-xCenter);
    double r2=(y1-yCenter)*(y1-yCenter);
    double result = sqrt (r1+r2);

    
    cout << "The radius is: " << result << endl;
}

void maxRoundedValue(double first, double second) {
    
    cout << "The maximum rounded value is: ";
    first = floor(first);
    second = ceil(second);
    cout << fmax(first,second) << endl;
    
}

void degreeAngleCosine (double d) {
    double pi = 2*acos(0.0);
    d=(d*pi)/180;
    double result = cos(d);
    cout << result << endl;
    
}


//String Part
void stringPractice1(string password);
void stringPractice2(string name, string department, string college);
void stringPractice3(string twoWords);
void stringPractice4(string word);

int second() {
  stringPractice1("1234");
  stringPractice2("Pedro", "CIIC", "Engineering");
  stringPractice3("Two Words");
  stringPractice4("Vehicle");
  
  return 0;
}

/* The function must verify the length of the string passed as an argument. 
  If it is too short (less than 8), it should print "password is too short”.
*/

void stringPractice1(string password) {
    if(password.length() < 8){
        cout << "password is too short" << endl;
    }
    else{
        cout << "none" << endl;
    }    
 
}

/* The function must concatenate the string arguments in order to print a string in the following way:
"Welcome <name> to the department <department> in the College of <college>"
So if the name were "Pedro", the department were CIIC", and the college were "Engineering", your function would print:
"Welcome Pedro to the CIIC department in the College of Engineering"
*/

void stringPractice2(string name, string department, string college) {
  cout << "Welcome" << name << "to the " << department << " department in the College of" << college << endl;
}

/* The function must receive the string and replace the space in it with "_"  (you may assume that the string has only one space)
  and then print the word with the space replaced by “_”
*/

void stringPractice3(string twoWords) {
  // YOUR CODE HERE
  twoWords.replace(twoWords.find(" "), 1,"_");
  cout << twoWords << endl;
}

/* This function must erase  the first 3 characters of a string, and append "---" at the end of the string 
  if given the word "Vehicle", the result would be: "icle---"
  The altered string must be printed.
*/

void stringPractice4(string word) {
  word.erase(0,3);
  word.append("---");
  cout << word << endl;
}



