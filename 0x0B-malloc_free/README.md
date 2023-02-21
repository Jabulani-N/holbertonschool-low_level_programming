this readme will have some notes

Try to avoid doing more iterations than the value of the input.
Try to count from 0 up to it whenever possible

it seems 
req 1: file exist
req 2: readme exist
req 3: file runnable/compilable



Tasks

----

00


it looks like this first task is essentially to make a 1Dimension array of the given size, and fill each slot with the given char (one char)


We have to malloc the space we're gonna use. when you memory allocate (malloc), it'll return a pointer to where that memory is.


----


01


same as 00, but after allocating, make it scan through the string provied and shove it into the target memory

----

02


we can mostly use the code of the duping program, since we're jsut duping two different things.


we'll need an additional variable to hold the total sizes.


we can then walk through s1 (change while to be s1 relevant) and then, WITHOUT resetting the Index, walk through s2 to add it to hte heap.

we'll need one index to keep track of our position in the resultantt char[], and one other index to afford us to start at the beginning of s2 when we add it to resultant char[index] 

----

due to current time, I think it'll be wise to directly copy another's so I have it for points now and reference later. subsequent tasks for this project will be as such.


