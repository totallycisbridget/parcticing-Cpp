#include <iostream> //import library
#include <string> //allows use of strings
 //allows use of names of objects and variables from the standard library
//don't need to have above if you just do

/*
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}

/the std:: does the same thing as the using namespace std, instead you just have write std:: everytime you want to use it
*/

int main() { //int is making the function, which is anthing within {}
  /*cout << "Hello World!" << endl; //input/outpuit operator = cout
    //end1 does the same thing as \n
  cout << "\nthis is a new line"; //\n does the same thing as it does in python

  cout << "this should \t have a tab" << endl;  //\t inserts a horizontal tab

  cout << "this inserts a \\" << endl; //insert a backslash

  cout << "this inserts a \"double quote\"" << endl;

  int myAge = 34, myNum = 69; //variable, variable type then name 
  //assigning variable myNum  a value
// you can assign multiple variables of the same type on the same line

  double floatingPoint = 6.9;

  char aLetter = 'p';

  string thisString = "this is a string";

  bool myBoolean = true; 

  int x, y, z;
// you can assign multiple variables the same value in one line
  x = y = z = 60;

  cout << x + y + z << endl; //basic maths operators

  cout << "I am " << myAge << " years old today" << endl;

  cout << myNum << endl; //output the variable

//override the previous value stored within myNum

  const int newNum = 69; //const is a constant which is basically a private variable in python
  //each const needs a value in the variable as it is a read only, if there is no value, it won't work

  int userInput; //create variable
  cout << "number pls: "; //have user enter a valye
  cin >> userInput; //get the user input and apply it to userInput
  cout << "you entered " << userInput << endl;//output it
  cout << myNum << endl; 
*/
/*
  double userNum; //double has a precision of 15 digits whereas flaot has 6 and int is a whole number
  cout << "enter a number ";
  cin >> userNum;

  double userNum1;
  cout << "enter a second number ";
  cin >> userNum1;

  int userChoiceMaths;
  cout << "would you like to divide(1), multiply(2), add(3) or subtract(4)? ";
  cin >> userChoiceMaths;

  if (userChoiceMaths == 1) {
    cout << userNum / userNum1;
  }else if (userChoiceMaths == 2){
    cout << userNum * userNum1;
  }else if (userChoiceMaths == 3){
    cout << userNum + userNum1;
  }else if (userChoiceMaths = 4){
    cout << userNum - userNum1;
  }else{
    cout << "not recognise try again";
  }
  */

//% will return the division remainder
// ++ will increase the value of a varaible by 1
//-- will decrease the value of a variable by 1

/*

  float f1 = 35e3;
  double d1 = 12E4; //the 'e' indicates a power of 10
  cout << f1 << endl << d1 << endl;
  
  string greeting = "sup";

  cout << greeting << endl;


  std::string firstName = "John";

  std::string lastName = "Dungeon";

  std::string fullName = firstName.append(lastName);

  std::cout << fullName;

  //https://www.w3schools.com/cpp/cpp_strings_length.asp
  */


  std::string txt;
  std::cout << "Enter a string " << endl;
  std::cin >> txt;
  return 0; //ends the function
}