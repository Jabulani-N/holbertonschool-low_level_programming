this readme will have some notes

Try to avoid doing more iterations than the value of the input.
Try to count from 0 up to it whenever possible

it seems 
req 1: file exist
req 2: readme exist
req 3: file runnable/compilable

----
---

#Structures

Structures seem to be wayas to package varibales.

- Held variables can be acessed like array elements

- - via their position: exampleStructure{first will become this, second will become this}

- - Via direct call: exampleStructure.variableName will behave as the variable variableName that is held within structure exampleStructure

- - via combining the two: exampleStructure{.variableName2 = x, .variableName1 = y} will change the reespective variables within, regardless of their position in the structure.


#Typedef

typedef seems to essentially create macros of data types

- for example, this includes things like shortening "unsigned int i" into "lol i"

- can also be used for making jokes like substituting "rofl j" for "char j"

- *most relevantly*, this allows us to rename/add names to struuctures, and to compress their declaration

- - for example, we normall have to type "struct exampleStructure createdStructure" in order to create an exampleStructure

- - - Typedef will instead allow us to say "typedef struct exampleStructure exampleStructure" and now you can create an exampleStructure jsut by saying "exampleStructure createdStructure"

#Betty

Structures are documented as follows:

................

struct exampleStruct - description of exmapleStruct

@examplevar1: description of relevant varaible examplevar1

Description: optional really long description
................

for the structure and it's varaibles (don't have to put them adjacent, probably)


task 4: it the firs couple lines in 4-main.c are just declaring my_dog. don't worry about those.

- our function code gets summoned "my_dog = new_dog" line.

- - we just have to take the pointers and shove the parameters into the structure, same as normal

- - - note that we'll have to return a whole dog sructure for it to copy, since we're not recieving any addresses.

Ultimately, we need to create and return a dog structure with the inputted paramters

- likely hangups include formatting the return statement

- - try return(dogStructure) format first, as it makes the most sense

- - - if that fails, consider returning it's address (&), as the function itself is prototyped as a pointer (*)

----




