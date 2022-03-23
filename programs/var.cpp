// operating with variables

#include <iostream>
using namespace std;

int main ()
{
  // declaring variables:
  int a, b;
  int result;

  // type declaration:
  int foo = 0;
  auto bar = foo; // bar is an int
  decltype(foo) bar; // bar is an int but not initialized

  // process:
  a = 5;  // can also do a(5) or a {5}
  b = 2;
  a = a + 1;
  result = a - b;

  // print out the result:
  cout << result;

  // terminate the program:
  return 0;
}