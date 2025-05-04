// the include delecrate is the import-like statement for working modules
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

// WAIT A DAMN MINUTE? WHY DO I HAVE TO MOVE THIS CODE BLOCK UP HERE?
//
// SO THIS SHIT RESPECT ORDER OF EXECUTION, MID :puke:
void learnTypes() {
  // data types

  int x; // should default nullptr, i believe or null or kind of
  char y = 'A';
  double someNumber = 2.20;
  std::string name = "50-Course"; // ah intersting, so i need to import the
                                  // string module from stdlib to use strings?

  std::cout << name << std::endl;

  // WAIT A DAMN MINUTE, SO TO DEFINE ARRAY IT HAS TO BE
  //
  // <type> varName<arrySize>?
  // not like Golang, varName <arraySize><type>?
  // or like Java, <type><arraySize> varName?
  //
  // interesting!
  char message[40] = "The amount is";
  sprintf(message + strlen(message), "%s", name);
  std::cout << message << std::endl;
}

/*
 * This should be the regular greet me function
 * you know let's get to know about function invoking
 */
std::string greetMe(std::string name) {
  // WTF? so we can't use `+` string catenation like python or regular
  // languages?
  return std::cout << "Hello, ", +name << std::endl;
}

// so the sample Hello World program
//
// it seems when we want to define a function
// its similar to c-based languages
//
// <type> funcName(func-signature)
//
// what i don't know yet, by default is defined functions, public or
// protected?
int main() {

  // cout is the standard output PrintStream
  std::cout << "Hello, World!" << std::endl;
  learnTypes();

  // every c progaram must have an exit status
  // 0 here means success
  return 0;
}
