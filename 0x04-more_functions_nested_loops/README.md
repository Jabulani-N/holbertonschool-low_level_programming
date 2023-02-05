instead of printing text normally, you need to send the characters to the _putchar function and have it do the printing instead.

This README is copied from teh 0x02 README.md


square you'll jsut do a 'spam the character n times' loop inside a 'print newline n times' loop. before the 'newline' part.


fizzbuzz:
you'll do a 'print i' loop that iterates n times, but install an if statment that checks if it is multiple of 3 (fizz) - if so, also check 5 (buzz)if yes
then
elif 5 (buzz)
else
print the actual number
FORGET NESTED IF STATEMENTS
multiples of both just means multiples of 15. start it off with a check for 15, then do the elif chain
FIZZBUZZ WILL NEED TO PROVIDE IT'S OWN MAIN FUNCTION
basically, the fizzbuzz.c file needs to have a function called 'main' that returns integer 0.
it doesn't matter whether it calls another funciton to do the comparisons and stuff, but the file we submit must have a main so it know waht to run. compiler will only know to run the function 'main,'
 from  wihc anything we want ot use must be called.

triangles is what you accidentally made in task 7 when you make the spaces bit count backwards in stead of forwards.
have it jsut use i instead of n-i, and youll get the general shape by default.
its up to you to get the characters that go into the the trinangle, though.
- it'll have n-r spaces, and then 'row' number of hashes
- - that means in the for loop taht changes lines, we'll take it's counter and taht'll be the row for the for loops taht create spaces, and the subsequent for loop that'll make hashes.
- it'll be easier to modify  the square tahn the diagonal line ccode, because it'll be easier to look at, and the hash code is already most of what we ant when making the "spaces", and we can paste a modified version to make the hashes.