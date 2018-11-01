program test_merge_sort

use merge_sort_mod

implicit none

double precision :: a(3), b(3), c(6), d(7)
integer :: i

! demo merge 
a = (/ 1, 3, 5 /)
b = (/ 2, 4, 6 /)
call merge_arrays(a, 3, b, 3, c)
do i = 1, 6
  print '(a,i1,a,f9.4)', 'c(', i, ')=', c(i) 
end do


! demo merge sort
d = (/ 4, 3, 2, 4, 6, 7, 11 /)
call merge_sort(d, 7)
do i = 1, 7
  print '(a,i1,a,f9.4)', 'd(', i, ')=', d(i) 
end do

end program test_merge_sort
