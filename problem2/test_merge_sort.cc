#include <cstdio>

#include "merge.hh"
#include "merge_sort.hh"
#include "experiment.hh"

int main()
{
  // demo merge
  {
    double a[3] = {1, 3, 5};
    double b[3] = {2, 4, 6};
    double c[6];
    merge(a, 3, b, 3, c, 0);
    for (int i = 0; i < 6; i++)
    {
      printf("c[%i]=%.2f\n", i, c[i]); 
    }
  }

  // demo merge sort
  {
    int n = 7;
    double a[n] = {4, 3, 2, 4, 6, 7, 11};
    merge_sort(a, n, 0);
    for (int i = 0; i < n; i++)
    {
      printf("a[%i]=%.2f\n", i, a[i]); 
    }
  }

  run_experiment(100, 10);

  return 0;
}

