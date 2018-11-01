module merge_sort_mod

implicit none

contains

! merge_arrays
! Merges two already sorted arrays, a (length m) and b (length n) to
! produce an array c of length m+n.  All arrays must already be sized
! upon calling.
subroutine merge_arrays(a, m, b, n, c)
  ! arguments
  double precision, dimension(:), intent(in) :: a, b
  double precision, dimension(:), intent(out) :: c
  integer, intent(in) :: m, n
  ! local variables
  
  ! your code here
end subroutine merge_arrays

! merge_sort
! Sorts an array a of length n in increasing order.
! (note, the recursive keyword is needed to indicate a recursive 
!  subroutine or function)
recursive subroutine merge_sort(a, n)
  ! arguments
  double precision, dimension(:), intent(inout) :: a
  integer, intent(in) :: n
  ! local variables

  ! your code here
end subroutine merge_sort

end module merge_sort_mod
