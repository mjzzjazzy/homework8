#include "merge.hh"
void merge_sort(double *a, int n, int low)
{
  double b[n];
  if (n > 1)
  {
    double *a_L = &a[0];
    int n_L = n/2;
    double *a_R = &a[n/2];
    int n_R = n - n_L;
    merge_sort(a_L, n_L, 0);  // fills b with 
    merge_sort(a_R, n_R, n_L);  // sorted values
    // now, merge into b
    merge(a_L, n_L, a_R, n_R, b, low);
    // and copy b to a
    for (int i = 0; i < n; i++)
      a[i] = b[i];
  }
}
