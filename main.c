#include <stdio.h>
#include <ctype.h>

#include "User.h"

// Type Identification Function
typedef int(*TypeIdFn)(int);

// This is what I'll use to test functions against their standard library versions.
void TestFunction(TypeIdFn aStandardLibFn,
                  TypeIdFn aUserFn,
                  const char *aFunctionName)
{
  for (int i = 0; i < 128; ++i)
  {
    if (aStandardLibFn(i) != aUserFn(i))
    {
      printf("There was an error with %s, when testing with %d. \n", aFunctionName, i);
    }
  }
}

#define RunTest(aFunction) \
  printf("Testing function %s:\n", #aFunction);          \
  TestFunction(aFunction, user_##aFunction, #aFunction); \
  printf("\n")


int main()
{
  RunTest(isspace);
  RunTest(isdigit);
  RunTest(isxdigit);
  RunTest(islower);
  RunTest(isupper);
  RunTest(isalpha);
  RunTest(isalnum);
  RunTest(iscntrl);
  RunTest(isgraph);
  RunTest(isprint);
  RunTest(ispunct);
}