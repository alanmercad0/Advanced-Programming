#include <iostream>
#include <string>
#include <math.h>

/*
* The syllabus for the course CODE101 is handed to the students. 
* The professor agreed on rounding up the Grade Letter from F to D if the margin was within 2.5%.
* The grading cutoff is as follows:
*/
std::string getLetterGrade(double grade){
    std::string letterGrade;
    grade=round(grade);
        if(grade>=90){
            letterGrade = "A";
        }
        else if (grade >= 80){
            letterGrade = "B";
        }
        else if (grade >= 70){
            letterGrade = "C";
        }
        else if (grade >= 60){
            letterGrade = "D";
        }
        else{
            letterGrade = "F";
        }

    return letterGrade; 
}

int main()
{
    // Breakpoint goes here
    std::cout << getLetterGrade(89.50) << std::endl;
    std::cout << getLetterGrade(79.50) << std::endl;
    std::cout << getLetterGrade(69.3) << std::endl;
    std::cout << getLetterGrade(59.50) << std::endl;
    std::cout << getLetterGrade(57.80) << std::endl;
    std::cout << getLetterGrade(23.90) << std::endl;
    std::cout << "Master Branch sucks lmaoooo" << std::endl;
}