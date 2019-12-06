#include <cstdio>

#include "babylonian.hh"

int main(int argc, char* argv[])
{
  double x;
  double sr = babylonian(x);

  printf("Square root of %.16f is %.16f\n", x, sr);

  return 0;
}
