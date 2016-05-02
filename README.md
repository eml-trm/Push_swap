# Push_swap 

Create program that takes as a parameters a stack, as a list of numbers. The first parameter is the top of the stack .
The program should display the following operations to sort the stack. The
the smallest number is at the top.
The aim is to sort the stack with the least possible operations .

## Summary
 1. [Makefile](#makefile)
 2. [Usage](#usage)
 3. [Example](#exemple)

# <a name="makefile">Makefile</a>

| Commande       	|  Actions 	|
|----------------	|----------	|
| `make`      	  | Compile all .c and create an executable 'push_swap'  	|
| `make clean`    | Delete all .o.  	|
| `make flcean`  	| Delete all .o and executable 'push_swap'.  	|
| `make re` 	 	| Execute fclean and make.  	|

# <a name="usage">Usage</a>

* Without option:
>./push_swap 4 88 23  5

* Option -v: Displays the detail of the action executed in the lists .
>./push_swap -v 3 5 4 77 1
  
* Option -n: Displays at the end of the program the number of executed move.
>./push_swap -n 3 4 1 6 2

## <a name="exemple">Example</a>

```c
./push_swap 3 8 6 5

Start:
a: 5 6 8 3
b:

pb sa pb sa pa pa pb sa pa

End:
a: 8 6 5 3
b:
```

```c
./push_swap -nv 3 8 6

Start:
a: 6 8 3
b:

pb
a: 6 8
b: 3

sa
a: 8 6
b: 3

pa
a: 8 6 3
b:

End:
a: 8 6 3
b:

Resolved in 3 moves
```
