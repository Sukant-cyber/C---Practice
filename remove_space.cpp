#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

int main(){
    // Creating a string containing multiple whitespaces.
    std::string s = "Sukant Krishna Kaushik";

    std::cout << "String s before removing whitespaces: " << s << std::endl << std::endl;

    // Using the erase, remove_if, and ::isspace functions.
    s.erase(std::remove_if(s.begin(), s.end(), ::isspace),
        s.end());

    std::cout << "String s after removing whitespaces: " << s;

    return 0;
}

