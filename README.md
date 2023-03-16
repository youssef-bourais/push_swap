SUMMARY

The project will make you sort data on a stack, with a limited set of instructions, using the lowest number of actions. To succeed you will have to manipulate various types of algorithms and choose the most appropriate solution for an optimized data sorting.

RULES

The game is composed of 2 stacks named A and B.
To start with:
A contains a random number of either positive or negative numbers without any duplicates.
B is empty.
The goal is to sort in ascending order numbers into stack A.
To do this, you have the following operations.

OPERATIONS

sa - swap a: swap the first 2 elements at the top of stack a. (do nothing if there is only one or no elements).
sb - swap b: swap the first 2 elements at the top of stack b. (do nothing if there is only one or no elements).
ss - ss: swap a and swap b at the same time.
pa - push a: take the first element at the top of b and put it at top of a. (do nothing if b is empty).
pb - push b: take the first element at the top of a an dput it at top of b. (do nothing if a is empty).
ra - rotate a: shift up all elements of stack a by 1. the first element becomes the last one.
rb - rotate b: shift up all elements of stack b by 1. the first element becomes the last one.
rr - rr: rotate a and rotate b at the same time.
rra - reverse rotate a: shift down all elements of stack a by 1. the last element becomes the first one.
rrb - reverse rotate b: shift down all elements of stack b by 1. the last element beoomes the first one.
rrr - rrr: reverse rotate a and reverse rotate b at the same time
