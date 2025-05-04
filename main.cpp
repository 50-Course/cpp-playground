// the include delecrate is the import-like statement for working modules
#include <cassert>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <optional>
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
  std::cout << message << someNumber
            << std::endl; // :eyes: so the `<<` sign can act
                          // as a contactanation command?
}

/*
 * This should be the regular greet me function
 * you know let's get to know about function invoking
 */
std::string greetMe(std::string name, std::optional<std::string> prefix) {

  if (!prefix.has_value()) {
    // so here we know it doesn't have a value, we just default to something?
    prefix = "Hello, ";
    return prefix.value() + name;
  }

  // WTF? so we can't use `+` string catenation like python or regular
  // languages?
  return prefix.value() +
         name; // so when we working with `optional` values form `stdlib`
               // w need to call the `.has_value()` to check if the variable has
               // some value - think of it as a data validator like django,
               // `serializer.is_valid()?` but if it does have a value we would
               // be able to get it in the function call `.value()` just like
               // django, `.validated_data`
}

/*
 * Pointers? Le'ts speak in Golang..
 *  so in Go, * deferences the memory, & gets the memory address, and you define
 * a new variable like normal let's see what that is in C++
 */
std::string learnPointers() {
  std::string people[5] = {"bobby", "gina", "junny", "jonah", "go"};
  double pi = 3.142;

  double *MathPI = &pi;

  // so here we get the memory address
  std::cout << "Memory location of the list of people: " << &people
            << std::endl;

  // then deference it to get the value at that memory location
  // so for sttarters let's try to get one value
  std::string gina = people[1];
  std::cout << gina << "is " << *MathPI << " short of today's trade."
            << std::endl;

  return gina;
}

/**
 * Memory Allocation?
 */
void learnMemoryAllocation() {
  // so i think we should make this par interesting - how about we make a 3x3
  // grid?

  std::cout << "Already in the memory allocation function " << std::endl;
  // first we sould allocate a simple array of 3 numbers;
  int *arr = new int[3];

  // now let's try to create our grid;
  std::cout << *arr << std::endl;
  std::cout << "Exiting the memory allocation function" << std::endl;
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

  std::cout << greetMe("Eri", "Good Morning,") << std::endl;
  std::cout << learnPointers() << std::endl;
  learnMemoryAllocation();

  // every c progaram must have an exit status
  // 0 here means success
  return 0;
}
