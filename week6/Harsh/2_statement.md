# Intersection Point

In C, a function can return only a single value. However, one can exploit pointers to make a function return more than one value.

A line in 2-d plane can be uniquely defined by it slope and y-intercept. Given two different lines we need to find the intersection point of the lines. 


## Input

The first and only line of input will contain 4 integers.

```
m1 c1 m2 c2
```

Where m<sub>i</sub> and c<sub>i</sub> are slope and y-intercept of ith line.

## Output

Print the x-cordinate and y-coordinate of point of intersection. (Only till 2 decimal places)
Note: If lines do not intersect then print -1.


## Examples

### Example 1
#### Input:
```
2 4 1 10
```
#### Output:
```
6.00 16.00
```

### Example 2
#### Input:
```
100 3 100 2
```
#### Output:
```
-1
```
