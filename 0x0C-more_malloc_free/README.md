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


