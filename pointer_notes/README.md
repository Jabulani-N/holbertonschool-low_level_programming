pointers exist for the purpose of getting to just move a function's piece of variable and work with it osmewhere else. "so you don't have to copy code a milion times."

it can look like int *varName = &sourceNameIThink
- This is not even messing with varName, but rather editing the content of whatever is at varName's addresis

preceding amperstand '&'  is 'address, NOT CONTENT' of the variable referenced. this is an address, not the content of it. you could freehand type a memory address and it'd be the same thing. 
if we have x=4, then &x is the memory locatoin x occupies, and *&x is literally asking "waht is the content that lives at the address of x," but that will probably break the syntax.

*y is "what is the contetn taht lives at LOCATION y"

&x is "what is the memory address of variblae x"

