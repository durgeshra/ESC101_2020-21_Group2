# Matrix Transpose

You are given a 2D matrix of size N x N. You need to find the transpose of the matrix, in place. In place means that you are required to calculate the transpose within the same input matrix and you cannot use any extra 1D or 2D array.

Also, any access of an element in the 2D array (during input, modification, and output) must be done only using pointers. You are not allowed to make use of [] operator for indexing.

Note: An  N x N matrix B is the transpose of a N x N matrix `A` if
    A<sub>i,j</sub> = B<sub>j,i</sub> for all valid i and j.

Here A<sub>i,j</sub> denotes the element in i<sup>th</sup> row and j<sup>th</sup> column.   

## Input

The first line will consist of an integer `N`.
The next  `N` lines will each consist of `N` integers corresponding to each row of the matrix.

## Output

Your output should consist of `N` lines. i<sup>th</sup> line of output corresponding to the i<sup>th</sup> row of transpose matrix.


## Examples

### Example 1
#### Input
```
3
1 2 3
4 5 6
7 8 9
```
### Output
```
1 4 7
2 5 8
3 6 9
```
Note : Value of N can be between 1 and 100 
