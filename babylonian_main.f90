program babylonian_main

double precision :: x, sr


x = 2.0 ! read this from command line
sr = babylonian(x)

print '(a, f20.16, a, f20.16)', 'Square root of ', x, ' is ', sr

end program babylonian_main
