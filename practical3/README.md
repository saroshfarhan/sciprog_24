## Problem Statement and algorithm

Find the integral of f(x) = tan(x)from 0→π/3. Compare with the actual result:
$$ \int_0^{\frac{\pi}{3}} tan(x) \, dx = log(2)$$ 


1. So a=0 and b=π/3.
2. Get the firt part of the sum tan(0) +tan(π/3). For C use tan which is part of the maths library. You used the maths library in the last practical for Conversion.c. tan is available in FORTRAN by default.
3. Create a loop that generates 11 equidistant points between 0→π/3. Thus N=12 and x<sub>0</sub>=a=0 and x<sub>12</sub>=b=π/3.
4. Change the loop so that you are adding 2tan(x<sub>i</sub>)for the each of the 11 points.
5. Add that sum to that of the end points and multiply by (b−a)/2N.
6. Compare this against log(2) you should not be too far out.

<br>

### Output

```shell
[sp114@sciprog practical03]$ ./Integral 
The Integral is: 0.6950 
log(2) value is: 0.6931
```