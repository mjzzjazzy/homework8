#include <cstdlib>

#include "merge_sort.hh"

void run_experiment(const int n, const int m)
{
  std::srand(1234);

  const double scale = 1.0/RAND_MAX;

  // create the master copy of the array
  double *x = new double[n];
  for (int i = 0; i < n; ++i)
  {
    x[i] = std::rand()*scale;
  }

  double *y = new double[n];
  for (int trial = 0; trial < m; ++trial)
  {
    // copy the array
    for (int i = 0; i < n; ++i)
      y[i] = x[i];

    // sort the array
    merge_sort(y, n);
  }

}
