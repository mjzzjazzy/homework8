#include <cstdio>

void merge(double *a, int m, double *b, int n, double *c, int p)
{
  int i=0, j=0, k=0;
  while(i < m && j<n) {
      if(a[i] <= b[j]) {
         c[k] = a[i];
         i++;
      }else{
         c[k] = b[j];
         j++;
      }
      k++;
   }
   while(i<m) {       //extra element in left array
      c[k] = a[i];
      i++; k++;
   }
   while(j<n) {     //extra element in right array
      c[k] = b[j];
      j++; k++;
   }
}

