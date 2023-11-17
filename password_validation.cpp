//
// Created by Elizabeth Lembach on 10/24/23.
//
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    // Needs: at least one uppercase letter, at least one lower case letter,
    // at least one special character(!,@,#,$,%,^,&,*,?), has to have a vowel, at least 8 characters long
    // can't have two of the same character next to each other

    string input = argv[1];
    // Checks if length is >= 8
    int length = input.length();
    if (length < 8) {
        cout << "<p>" << "Not long enough" << "</p>" << endl;
    }

    // Checks for lower case character
    bool lowerCase = false;
    for (int i = 0; i < length; i++) {
        if (islower(input[i])) {
            lowerCase = true;
        }
    }
    if (!lowerCase) {
        cout << "<p>" << "Password must contain a lower case!" << "</p>" <<endl;
    }

    // Checks for upper case variable
    bool upperCase = false;
    for (int i = 0; i < length; i++) {
        if (isupper(input[i])) {
            upperCase = true;
        }
    }
    if (!upperCase) {
        cout << "<p>" << "Password must contain a upper case!" << "</p>"<< endl;
    }


    if(input.find("'") == string::npos && input.find("~") == string::npos && input.find("!") == string::npos && input.find("@") == string::npos && input.find("#") == string::npos && input.find("$") == string::npos
       && input.find("%") == string::npos && input.find("^") == string::npos && input.find("&") == string::npos && input.find("*") == string::npos&& input.find("(") == string::npos && input.find(")") == string::npos
       && input.find("_") == string::npos && input.find("-") == string::npos && input.find("=") == string::npos && input.find("+") == string::npos && input.find("?") == string::npos && input.find("/") == string::npos&&
       input.find("|") == string::npos && input.find("\\") == string::npos && input.find("{") == string::npos && input.find("}") == string::npos && input.find("[") == string::npos && input.find("]") == string::npos &&
       input.find(";") == string::npos && input.find(":") == string::npos && input.find("\'") == string::npos && input.find("\"") == string::npos && input.find(".") == string::npos && input.find(",") == string::npos &&
       input.find("<") == string::npos && input.find(">") == string::npos){
        cout << "<p>" << "Password must contain a special character" << "</p>" << endl;
    }


if(input.find("a") == string::npos && input.find("A") == string::npos && input.find("e") == string::npos && input.find("E") == string::npos && input.find("i") == string::npos && input.find("I") == string::npos
&& input.find("o") == string::npos && input.find("O") == string::npos && input.find("u") == string::npos && input.find("U") == string::npos&& input.find("y") == string::npos && input.find("Y") == string::npos){
    cout << "<p>" << "Password must contain a vowel (capital or lowercase)" << "</p>" << endl;
}


    cout << "<p>" << input << "<p>"<< endl;
    return 0;
}