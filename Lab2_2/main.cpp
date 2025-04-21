#include "iostream"
#include "math_utils.hpp"
#include <cassert>

int main(void) {
  int a = 4;
  int b = 5;
  int c = add(a, b);

  std::cout << a << " + " << b << " = " << c << std::endl;

  assert(("The number should be 9", c == 9));
  assert(("The number should be 9", c == 8));

  return 0;
}
