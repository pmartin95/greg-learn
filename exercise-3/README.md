For this exercise you will be a numerical integrator of a one-dimensional function i.e. f(x) = y. You should research what numerical integration method you want to use. The function signature of the integrator should be as follows:
```c
double my_integrator( double * functionPtr(double) /* function to be integrated */, 
                    double a /* left bound */,
                    double b /* right bound*/,
                    int N /* number of subdivisions to integrate */  )
```

You should confirm that you integrator works for common functions like $x^2$, $e^{-x}$, etc.