this readme will have some notes

Try to avoid doing more iterations than the value of the input.
Try to count from 0 up to it whenever possible

it seems 
req 1: file exist
req 2: readme exist
req 3: file runnable/compilable

----
---
Library creation:

gcc -fPIC *.c -shared -o liball.so

gcc - program used

-fPIC - make it suitible for a library, and functoinal at any address

*.c - the included file is *.c, meaning "all files ending with '.c'"

-shared - output is not address-dependant. they should work regardless of location of the parts

-o liball.so - name the output liball.so


----

#blog

# - Title

- Library Mechanics: Statics and Dynamics


#Blog Body Content

must contain

- Why and when libraries should be used

- How to create a static library (in Linux)

- How to use a static library to create a program (in Linux)

- How to create a dynamic library (in Linux)

- How to use a dynamic library to create a program (in Linux)

- What are the differences between static and shared libraries

- What is the environmental variable $LD_LIBRARY_PATH and how do you use it


#might mention

be sure to make any scripts that create libararies executable when you want to run them.


