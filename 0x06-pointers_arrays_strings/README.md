this readme will have some notes


in question 1-strncat, we'll copy the previous question except:

we're gonna change the while condition on the srcSize finding loop to include AND the size is =< than the ammount alloted by n
- n will be an integer, but the previous task's quiz tells us the byte-size of chars. we can do in-if-statment math to find the position cap

If you use i++ as a reference location in an array, it'll find position i first, and then add 1 to i second.


on number 6 we will just check if the previous entry was a space (|| it is position 0) when we check if hte char is a lowercase.
If it both lowercase and the previous one was spaace, then we make it uppercase
