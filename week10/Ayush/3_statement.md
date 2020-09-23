# Insertion in Sorted Cyclic Linked List

You are given a cyclic linked list containing `N` integers sorted in ascending order. A cyclic linked list is a linked list where the next pointer of the last node points to the head. Note that due to this definition, a cyclic linked list does not have a head or a tail node. You are given a node `start` of this cyclic linked list which could be any node of the list (not necessarily the node with the smallest or largest integer), and an integer `x` along with it. You need to insert `x` in the correct position so that after the insertion, the cyclic linked list remains sorted. After insertion, return the address of the original given node `start`.

If there are multiple possible positions where x could be inserted, then insert at the first possible position after `start`. Also, if the given list is empty (i.e. the given node `start` is `NULL`), then create a node corresponding to `x` and return its address.

Note: The sample code for taking the input and printing the output is already provided to you. You should NOT edit or modify these sections of the code. You only need to add your code in the `insertInSortedCyclicList()` function template that has been provided.
Also, the insertion must be performed in place and in linear time (Time Complexity `O(N)`).


## Input

- The first line contains an integer `N`.
- The next line consists of `N` space-separated integers corresponding to the nodes of the linked list (Since the linked list is cyclic, these values could be cyclically permuted in any order to get the same cyclic linked list but in each case only the node corresponinding to the first value will be passed into your function).
- The next line contains the value `x` which has to be inserted into the list.

Note that the input has already been handled for you.

## Output

- The first line of the output should contain `N+1` space-separated integers corresponding to the nodes of the cyclic linked list after insertion (The first value should be corresponding to the node which was passed into your function, or the new node created if `NULL` was passed).

Note that the output has already been handled for you.


## Examples

### Example 1
#### Input
```
6
31 34 1 5 15 27
30
```
### Output
```
31 34 1 5 15 27 30
```

### Example 2
#### Input
```
5
10 25 41 80 4
1
```
### Output
```
10 25 41 80 1 4
```

### Example 3
#### Input
```
0
5
```
### Output
```
5
```

Note : Value of N can be between 0 and 1000
