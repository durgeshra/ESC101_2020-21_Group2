# Skipping Stones

You have a number line with a stone placed at each integer position. You are standing at position `a`, and your destination is `b`.

Unfortunately, you can take jumps of exactly `n` positions at a time. Hence, it may not always be possible to reach `b`. So, you have to get as close to `b` as possible.

## Input

You will be given three numbers in the same line separated by a space in the following format:

`a b n`

## Output

Print two numbers `c` and `s` where `c` is your final position and `s` is the minimum number of steps taken to get to `c`. In case there are more than one possible values of `c` that are equally distant from `b`, output the answer that takes lesser number of steps. The format will be:

`c s`

## Examples

### Example 1
#### Input:
`3 10 2`
#### Output:
`9 3`

### Example 2
#### Input:
`10 200 10`
#### Output:
`200 19`