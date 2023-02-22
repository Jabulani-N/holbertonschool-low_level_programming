this readme will have some notes

Try to avoid doing more iterations than the value of the input.
Try to count from 0 up to it whenever possible

it seems 
req 1: file exist
req 2: readme exist
req 3: file runnable/compilable

object-like macros are very similar to variables, but instead of holding a data type, they hold a literal line of code.
for example, if I

#define EXAMPLE_OBJECT 1,2,3

(notice no semicolon) then it represents the literal text "1, 2, 3", and can go into code like 

int x[] = {EXAMPLE_OBJECT};

for the code to see

int x[] = {1, 2, 3};

In fact, you could even

#define EXAMPLE_OBJECT 1, 2, 3}

and then say

int x[] = {EXAMPLEOBJECT;

and the code would see the exact same thing, because the close bracket is in the macro.

A macro can redefine a variable, and it can also include a variable or another macro, but this is jsut asking for trouble.



Tasks

----

00





----


01




----

02


---


