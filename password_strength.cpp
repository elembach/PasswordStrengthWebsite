//
// Created by Elizabeth Lembach on 10/24/23.
//
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char* argv[]) {
    string input = argv[1];

    // Easy ways to determine strength
    double overallStrength = 0;

    /*
     * Get length of password
     * - Longer password = higher grade
     */
    int lenStrength = 0;
    int length = input.length();
    int difference = length-8;
    /*
     * difference is 0 = 1
     * dif is 1-3 = 2
     * dif is 4-6 = 3
     * dif is 7-10  = 4
     * dif is 11+ = 5
     */
    if(difference == 0){
        lenStrength = 1;
    }else if(difference > 0 && difference < 4){
        lenStrength = 2;
    }else if(difference > 3 && difference < 7){
        lenStrength = 3;
    }else if(difference > 6 && difference < 11){
        lenStrength = 4;
    }else if(difference > 10){
        lenStrength = 5;
    }

    /*
     * Check to see how many unique characters there are
     * - Create set to store all the unique characters
     * - get length of set
     */
    int uniqueStrength = 0;
    set<char> unique;
    for (char character : input){
        unique.insert(character);
    }
    length = unique.size();
    /*
     * 5 unique characters = 1
     * 6,7 unique characters = 2
     * 8-10 = 3
     * 11-15 = 4
     * 16+ = 5
     */
    if(length <= 5){
        uniqueStrength = 1;
    }else if(length > 5 && length < 8){
        uniqueStrength = 2;
    }else if(length > 7 && length < 11){
        uniqueStrength = 3;
    }else if(length > 10 && length < 16){
        uniqueStrength = 4;
    }else if(length > 15){
        uniqueStrength = 5;
    }


    // Calculates strength
    overallStrength = (uniqueStrength + lenStrength)/2;

    cout << " <p> The strength of your password is: " << overallStrength << "</p>" << endl;

    return 0;

}


