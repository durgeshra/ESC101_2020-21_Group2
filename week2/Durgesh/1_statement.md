# Skipping Stones

You have a number line with a stone placed at each integer position. You are standing at position `a`, and your destination is `b`.

Unfortunately, you can take jumps of exactly `n` positions at a time. Hence, it may not always be possible to reach `b`. So, you have to get as close to `b` as possible, such that the final position is less than or at `b`.

## Input

You will be given three numbers in the same line separated by a space in the following format:

`a b n`

Note: `n` will be a positive integer.

## Output

The output will consist of two lines.

In the first line, print your position after each step starting from `a` to your final position.

In the second line, print the number of steps required.

## Examples

### Example 1
#### Input:
```
3 10 2
```
#### Output:
```
3 5 7 9 
3
```

### Example 2
#### Input:
```
10 70 10
```
#### Output:
```
10 20 30 40 50 60 70
7
```