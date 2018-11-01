# Makefile for Homework 8


# problem 1
babylonian_f:
	gfortran -o $@ babylonian_main.f90 babylonian.f90
babylonian_c:
	g++ -o $@ babylonian_main.cc babylonian.cc

# problem 2
merge_sort_c:
	g++ -o $@ test_merge_sort.cc merge.cc merge_sort.cc
merge_sort_f:
	gfortran -o $@ merge_sort.f90 test_merge_sort.f90 

# cleanup up
clean:
	rm -f babylonian_f babylonian_c merge_sort_c merge_sort_f *.o *.mod
