
it seems each "nibble" is 4 binary values that code a division or something

	 1111
	 ____
	-8421
where each 1 starting from the left means "do make this division by 2 to get the next number

- this means starting with a 0 makes the int positive, while starting with 1 makes it negative.

# right shift 

Right shift by 1 is equal to divide by two

Right shifting fills the empty leftmost slot with whatever the leftmost value was

- unlike left shift, which just fills the emptied right side with 0

- this preserves the sign of the integer


