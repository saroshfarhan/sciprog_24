## Practcal 9

This practical we see a property of a nxn square matrix to be a magic square where the row, column main diagonal and secondary diagonal adds up to be `n(n^2 + 1)/2`.

## Output

```shell
[sp114@sciprog practical9]$ gcc main.c -o magic
[sp114@sciprog practical9]$ ./magic
Enter file name: magic_square.txt
No. lines, 3
M = 15
This is a magic square
[sp114@sciprog practical9]$ ./magic
Enter file name: not_magic_square.txt
No. lines, 3
M = 15
Row 1 does not sum to 15 (row sum = 6).
This is not a magic square
```