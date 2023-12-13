# Search Algorithms

this is a c project that will use prototypes.

Reference my own previous work in this repository for notes on the structure of c programming

The header file is `search_algos.h`.

Requirements:

* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

* You are not allowed to use global variables

* No more than 5 functions per file

* You are only allowed to use the `printf` function of the standard library. Any call to another function like `strdup`, `malloc`, … is forbidden.


## Task0

prototype: `int linear_search(int *array, size_t size, int value);`

* tested via `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear`
each check will need to print in this format:

* `Value checked array[2] = [42]`

* * this means it checked index 2 and found `42`

The algorithm will print each checked index, either up to and including the index containing the targt value, or the final index. Whichever comes first.

## task1

prototype: `int binary_search(int *array, size_t size, int value);`

tested via `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary`


Uses a [Binary Search](https://en.wikipedia.org/wiki/Binary_search_algorithm) algorithm.

<img src="[simple-shell spreadsheet.PNG](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c1/Binary-search-work.gif/330px-Binary-search-work.gif)" width="400\"/>

This will first check the center value of the array in question. if it is not the value, it will check either the values above or below the center value, depending on whether the target is higher or lower than hte center value. that "half" of the array is the new "array in question."

repeat until arraqy is length 2/1, or hte center value actually is the target value.
