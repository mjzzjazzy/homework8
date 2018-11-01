# ME 701 - Homework 8

This assignment is all about the elements of C++ and Fortran.  All problems
will involve compilation that requires a Makefile.  A template Makefile
is provided in this repository.


## Problem 1 (2 points)

You are to implement the following functions:

```c++
double babylonian(double x);
```

and

```Fortran
double precision babylonian(x)
```

Both functions accept a (double-precision) floating-point value `x` and
returns its square root by using the Babylonian algorithm.  Converge completely,
i.e, iterate until no apparent error remains but do *not* use a built in
`sqrt` function of any kind as part of that process.

For the C++ version, declare your function in `babylonian.hh` and implement
it in `babylonian.cc`.  For Fortran, implement the function in `babylonian.f90`.
For both versions, produce a main program file named `babylonian_c.cc`
and `babylonian_f.f90`.  When compiled, I should be able to run it as follows:

```
$ ./babylonian_c 2.0
Square root of 2.0000000000000000 is 1.41421356237310
```


## Problem 2 (2 points)

You are to choose either C++ or Fortran to implement the *merge sort*
algorithm for an array of double-precision numbers.  I have produced starting
code for you based on my ME 400 presentation of the topic.  You do *not* need
to use any of the code I provide, but I should be able to use the final function
or subroutine in the same way.  Example use

```c++
double a[6] = {4, 3, 2, 4, 6, 7};
double a_sorted[6];
merge_sort(a, 6); // a now has the value {2, 3, 4, 4, 6, 7}
```

and

```fortran
double precision :: a(6) = (/4, 3, 2, 4, 6, 7/)
call merge_sort(a, 6) ! now has value (/2, 3, 4, 4, 6, 7/)
```

BONUS POINT FOR DOING THE SECOND LANGUAGE.

## Problem 3 (2 points)

Connect your solutions to Problems 1 and 2 to Python using f2py and SWIG.  We'll
see in class how to do this M and F.



