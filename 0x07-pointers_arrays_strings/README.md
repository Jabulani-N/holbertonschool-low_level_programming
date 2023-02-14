this readme will have some notes
it seems 
req 1: file exist
req 2: readme exist
req 3: file runnable/compilable

according to man memset, we're changing the content of memory location s. we can do that via *s, which manipulates the content itelf


_strspn takes the part befroe the fifrst space and then counts how many times it matched a part of accept. we can do that by makign iteration end if it equals space.
- at the end, return the number of times it hit

when using a pointer to a char array's name to iterate through its index, it'll default to position zero.
-  if you add 1 to that name, it'll do position 1
- - therefore, you can use 
- - - while *(arrayName + index != 0) … index++ or
- - - while (*arrayname) … arrayName++

if you do s += 2, you get everything in array s from position 2 up
- s -= 2 is position 2 down
- s == 2 is position 2 only
