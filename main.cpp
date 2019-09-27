//
//  main.cpp
//  Grade Organizer
//
//  Created by John Lutz on 2018-04-29.
//  Copyright © 2018 John Lutz. All rights reserved.
//

#include <iostream>
#include <string> //use of strings
#include <vector> //vector to store/add up all variables
#include <numeric> //for adding all numbers in a vector

using namespace std;

void ottawauGPA();
void carletonGPA();
void usaGPA();
int gpaOption;
int cu;
int average;

int main() {
    int classCounter; //Counts number of classes inputted
    int i;
    int grade;
    string studentName;
    string word = "class";
    vector<string> classVector;
    vector<int> gradesVector;
    string classString; // Names of classes
    
    //Title
    cout << "*********************************\n";
    cout << "      John's GPA Profiler\n";
    cout << "*********************************\n";
    
    //Asks user for name and stores it in studentName
    cout << "Enter the student's name:\n";
    getline(cin,studentName); //getline let us have multiple words in our string for our studentName
    
    classCounter = 0;
    i = 1; //Has 1 as "i"'s value to keep loop going until user decides he's done input
    
    while (i != 0) {
        
        cout << "Enter the class name:\n";
        cin >> classString;
        classVector.push_back(classString);
        
        
        cout << "What grade do you have in this course?\n";
        cin >> grade;
        gradesVector.push_back(grade);
        
        
        
        classCounter = classCounter + 1;
        cout << "Are you done naming classes? Enter any number other than 0 to keep going!) \n";
        cin >> i;
    }
    // ^^ Loop for class name inputs
    
    if (classCounter != 1){
        word = "classes";
    }
    
    //classCounter = ( classCounter - 1 ); may need in future class counting?
    
    cout << "Your name is " << studentName << " and you have " << classCounter << " " << word << "\n";
    
    
    cout << "Your classes are: ";
    
    // Let's display the thing to the user.
    for (size_t n = 0; n < classVector.size(); n++)
        cout << classVector[ n ] << " ";
    cout << endl;
    
    int sumGrades = accumulate(gradesVector.begin(), gradesVector.end(), 0);
    
    average = (sumGrades/classCounter);
    
    cout << "Your average is throughout these courses is: " << average << endl;
    
    cout << "What type of GPA system would you like your average calculated in? \n";
    cout << "Enter (1) for Carleton, Enter (2) for OttawaU, and Enter (3) for the USA standard 4.0 scale: \n";
    cin >> gpaOption;
    
    if (gpaOption == 1 ){
        carletonGPA();
    }
    if (gpaOption == 2){
        ottawauGPA();
    }
    if (gpaOption == 3){
        usaGPA();
    }
    
    
    return 0;
}

void carletonGPA() {
    int gr;
    gr = average;
    if (gr > 100 ) {
        cout << "Grade average too high for a GPA input";
    }
    if (gr >= 90) {
        cout << "You have an A+ and a 12 GPA. ";
        cout << endl;
    }
    if (gr < 90 == gr >= 85) {
        cout << "You have an A and a 11 GPA.";
    }
    if (gr < 85 == gr >= 80) {
        cout << "You have an A- and a 10 GPA.";
    }
    if (gr < 80 == gr >= 77) {
        cout << "You have a B+ and a 9 GPA.";
    }
    if (gr < 77 == gr >= 73) {
        cout << "You have a B and a 8 GPA.";
    }
    if (gr < 73 == gr >= 70) {
        cout << "You have a B- and a 7 GPA.";
    }
    if (gr < 70 == gr >= 67) {
        cout << "You have a C+ and a 6 GPA.";
    }
    if (gr < 67 == gr >= 63) {
        cout << "You have a C and a 5 GPA.";
    }
    if (gr < 63 == gr >= 60) {
        cout << "You have a C- and a 4 GPA.";
    }
    if (gr < 60 == gr >= 57) {
        cout << "You have a D+ and a 3 GPA.";
    }
    if (gr < 57 == gr >= 53) {
        cout << "You have a D and a 2 GPA.";
    }
    if (gr < 53 == gr >= 50) {
        cout << "You have a D- and a 1 GPA.";
    }
    if (gr < 50 )
        cout << "You average of the class input is a fail.";
}


void ottawauGPA() {
    int gr;
    gr = average;
    if (gr > 100) {
        cout << "Grade average too high for a GPA input.";
    }
    if (gr >= 90) {
        cout << "You have a A+ and a 10 GPA.";
    }
    if (gr < 90 == gr >= 85) {
        cout << "You have a A and a 9 GPA.";
    }
    if (gr < 85 == gr >= 80) {
        cout << "You have an A- and a 8 GPA.";
    }
    if (gr < 80 == gr >= 75) {
        cout << "You have a B+ and a 7 GPA.";
    }
    if (gr < 75 == gr >= 70) {
        cout << "You have a B and a 6 GPA.";
    }
    if (gr < 70 == gr >= 65) {
        cout << "You have a C+ and a 5 GPA.";
    }
    if (gr < 65 == gr >= 60) {
        cout << "You have a C and a 4 GPA.";
    }
    if (gr < 60 == gr >= 55) {
        cout << "You have a D+ and a 3 GPA.";
    }
    if (gr < 55 == gr >= 50) {
        cout << "You have a D and a 2 GPA.";
    }
    if (gr < 50 == gr >= 40) {
        cout << "You have a E and a 1 GPA.";
    }
    if (gr < 40 == gr >= 0) {
        cout << "You have a F and a 0 GPA.";
    }
    if (gr < 0 )
        cout << "Impossible negative input.";
}

void usaGPA() {
    int gr;
    gr = average;
    if (gr > 100) {
        cout << "Grade average too high for a GPA input.\n";
    }
    if (gr >= 97) {
        cout << "You have a A+ and a 4.0 GPA.\n";
    }
    if (gr < 97 == gr >= 93) {
        cout << "You have a A and a 4.0 GPA.\n";
    }
    if (gr < 93 == gr >= 90) {
        cout << "You have a A- and a 3.67 GPA.\n";
    }
    if (gr < 90 == gr >= 87) {
        cout << "You have a B+ and a 3.33 GPA.\n";
    }
    if (gr < 87 == gr >= 83) {
        cout << "You have a B and a 3.0 GPA.\n";
    }
    if (gr < 83 == gr >= 80) {
        cout << "You have a B- and a 2.67 GPA.\n";
    }
    if (gr < 80 == gr >= 77) {
        cout << "You have a C+ and a 2.33 GPA.\n";
    }
    if (gr < 77 == gr >= 73) {
        cout << "You have a C and a 2.0 GPA.\n";
    }
    if (gr < 73 == gr >= 70) {
        cout << "You have a C- and a 1.67 GPA.\n";
    }
    if (gr < 70 == gr >= 67) {
        cout << "You have a D+ and a 1.33 GPA.\n";
    }
    if (gr < 67 == gr >= 63) {
        cout << "You have a D and a 1.00 GPA.\n";
    }
    if (gr < 63 == gr >= 60) {
        cout << "You hav a D- and a 0.67 GPA.\n";
    }
    if (gr < 60 == gr >= 0) {
        cout << "You have a F and a 0.0 GPA,\n";
    }
    if (gr < 0 )
        cout << "Impossible negative input.\n";
}
