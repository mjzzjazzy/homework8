# ME 701 - Homework 8

This assignment is all about the elements of C++.  All problems
will involve compilation using a Makefile.  Each problem folder has
its own Makefile.


## Problem 1 (2 points)

You are to implement the following function:

```c++
double babylonian(double x);
```


This function accept a (double-precision) floating-point value `x` and
returns its square root by using the Babylonian algorithm.  Converge completely,
i.e, iterate until no apparent error remains but do *not* use a built in
`sqrt` function of any kind as part of that process.

You should declare your function in `babylonian.hh` and implement
it in `babylonian.cc`.  Produce a main program file named `test_babylonian.cc`.
When compiled, I should be able to run it as follows:

```
$ ./test_babylonian 3.0
Square root of 3.0000000000000000 is 1.73205080756888
```

Note that this is using the command line argument!

## Problem 2 (2 points)

You  will use C++ to implement the *merge sort*
algorithm for an array of double-precision numbers.  I have produced starting
code for you based on my ME 400 presentation of the topic.  You do *not* need
to use any of the code I provide, but I should be able to use the final function
in the same way.  Example use:

```c++
double a[6] = {4, 3, 2, 4, 6, 7};
double a_sorted[6];
merge_sort(a, 6); // a now has the value {2, 3, 4, 4, 6, 7}
````

Once you have your code working, use the built-in Linux command line
tool `time` to see what impact using `-O3` in place of `-g -O0` in your
make file.  You may use the `run_experiment` function (declared in
`experiment.hh` and defined in `experiment.cc`).


## Problem 3 (2 points)

For this problem, you will be adding just a bit of code that lets you 
explore the object-oriented shape example from class.  Read the comments
in the starter code for details.





