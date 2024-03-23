#include <iostream> //import library
#include <string> //allows use of strings

int main() {
    /*size of string
    std::string txt; //create the str variable txt
    std::cout << "enter a string: "; //print
    std::cin >> txt; //take a user input
    std::cout << "the size of the string is: " << txt.length() << std::endl; //print the size of the string the user entered
//if the user enters more than one string (i.e two words with a space in between) only the first word will be counted
//so if "gay mens" is entered, only gay will be counted and it will output 3 

    
    std::string testString = "Testing";
    std::cout << "the first letter of testing is " << testString[0] << std::endl; //should print 't'
*/
    int testNum;
    std::string customString;
    std::cout << "enter a num ";
    std::cin >> testNum;
    std::cout << std::endl;
    std::cout << "give me a word ";
    std::cin >> customString;
    std::cout << std::endl;
    std::cout << "the " << testNum << "th letter in " << customString <<" is " << customString[testNum - 1];
    




    return 0;
}