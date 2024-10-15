# Exercises
* Calculate the values of tan(x)wherexis in radians in the range[0,60]every five degrees. Placethe results in an array. Print the array. Make the array a global variable.

    1. Use the function (or subroutine) from the third lecture inWeek 4, to convert degrees toradians.
    2. Construct main, in main have a loop where the loop counter does *0,1,2···12*.
    3. Use the loop counter to generate the degree angles.
    4. Use the function to generate the radian values.
    5. Compute tan(x), store in the array.

 * Create a function/subroutine that calculates the area under the curve of tan(x)from 0→60 degrees using the Trapezoidal Rule.

 * When compiling with C use 
    ```c
    #include<math.h>
    ```
    and compile with “-lm” . This will ensure thetan function is available.



# Solution output

```shell
sp114@sciprog practical4]$ gcc trapRule.c -o trapRule -lm
[sp114@sciprog practical4]$ ./trapRule 
TanArr [0] - 0.000000
TanArr [1] - 0.087489
TanArr [2] - 0.176327
TanArr [3] - 0.267949
TanArr [4] - 0.363970
TanArr [5] - 0.466308
TanArr [6] - 0.577350
TanArr [7] - 0.700208
TanArr [8] - 0.839100
TanArr [9] - 1.000000
TanArr [10] - 1.191754
TanArr [11] - 1.428148
Initial area (sum at x(0) and x(12)) = 0.000000
The value of the sum after the loop is: 14.197204

 Trapezoidal result is: 0.619470
Real result is: 0.693147
```
