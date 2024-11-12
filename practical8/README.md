## Practical 8

This practical was all about calculating GCD of two numbers using the Euclid's method.
For this we studied two methods of calculation:
* Iterative method - Using while loop
* Recursive method - Calling th function again with modified parameters.

## Output
Positive test cases

```shell
[sp114@sciprog practical8]$ ./gcc
Please enter two positive numbers: 
6 36
Iterative GCD(6 36) is 6
Recursive GCD(6 36) is 6
[sp114@sciprog practical8]$ ./gcc
Please enter two positive numbers: 
91 53
Iterative GCD(91 53) is 1
Recursive GCD(91 53) is 1
```

Negative test cases

```shell
[sp114@sciprog practical8]$ ./gcc
Please enter two positive numbers: 
-3 8
Please enter positive integers

[sp114@sciprog practical8]$ ./gcc
Please enter two positive numbers: 
5
q
Please enter two integers!
```

## Calculating GCD by using random number

We also generated random number from 1 to 100 and calculated GCD of the generated number
We used ```srand(time(NULL))``` for seed and then generated random number by ```(rand() % 100) + 1```.

## Output

```shell
[sp114@sciprog practical8]$ ./gccR
Iterative GCD(25 27) is 1
Recursive GCD(25 27) is 1
[sp114@sciprog practical8]$ ./gccR
Iterative GCD(64 30) is 2
Recursive GCD(64 30) is 2
```
