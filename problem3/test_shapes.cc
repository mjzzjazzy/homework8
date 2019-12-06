#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>

// Put some other includes here...
#include <algorithm>
#include <vector>
#include <assert.h>
#include "Parallelogram.hh"
#include "Rectangle.hh"
#include "Square.hh"

int main(int argc, char* argv[])
{

  // Here, we make a vector whose elements are 
  // Parallelogram*, i.e., pointers to the parallelogram
  // type.  That the elements are pointers is important.  
  // Remember, the Parallelogram we defined is abstract,
  // so we can't actually make "a parallelogram."

  std::vector<Parallelogram*> shapes;

  // Add a rectangle.
  shapes.push_back(new Rectangle(3.0, 2.0));
  // Add a square
  shapes.push_back(new Square(4.0));
  // Add another rectangle.
  shapes.push_back(new Rectangle(4.0, 3.0));
  // Add another square
  shapes.push_back(new Square(1.0));

  // Now, sort these shapes in increasing order of area
  // using the sort function provided by <algorithm>. 

  std::sort (shapes.begin(),shapes.end(),Parallelogram::lessThan());

  // Now, use a loop to print the shape in the current order.

  for(int i=0; i<4; i++){
    std::cout<<shapes[i]->area()<<std::endl;
  }

  // A sanity check!
  assert(std::abs(shapes[0]->area()-1.0)<1e-14); 

  // Make sure to clean up any memory... use valgrind if you're
  // not sure!
  for(int i=0; i<4; i++){
    delete shapes[i];
  }

  return 0;
}
