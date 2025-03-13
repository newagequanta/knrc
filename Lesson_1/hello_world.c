#include <stdio.h>

/* The standards have changed since the publication of the book and now
* void is not supported for main() apparently. Compiler error asks to change
* main to type int which then needs a return statement*/

//main () was the implementation in the book
int main()
{
  printf("hello, world\n");
  
  return 0; //Needed because the main is now type int
}
