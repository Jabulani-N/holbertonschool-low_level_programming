/*it looks like this first task is essentially to make a 1Dimension array of the given size, and fill each slot with the given char (one char)
 * We have to malloc the space we're gonna use. when you memory allocate (malloc), it'll return a pointer to where that memory is.
 * 
 */

/**
 * create_array - preallocates memory, and then makes an array
 * 	if the size requested is 0: allocate null, return null
 * 	otherwise, take the pointer to the preallocation, and shove the arary into it
 *
 * @size: the requested array size
 * @c: character to shove into each slot of the array
 *
 * Return: pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *preallocated;
	/*pointer so base can be an address*/
	preallocated = malloc(size * sizeof(char));
	/*preallocated has become a pointer to the allocated memory*/
	/*it seems to have also kept the char trait,
	 * 	so the mem is allocated to char preallocaetd
	 * 		I think that this has effectively turned it into char array
	 */

	if (preallocated == NULL)
		return (preallocated);
	/*
	 * returns null if pointer was to null
	 * I guess this is a redundancy?
	 */
	

	if (size == 0)
		return (NULL);
	/*return null if size 0 (useless array)*/
 /*
  * beause that'd make the only content null,
  *	but wouldn't that'd make preallocated null?
  */

/*so now that we know the target and array will be valid...*/
	while (size-- >= 1)
	{
		preallocated[size - 1] = c;
		/*shoves requested char into place*/
	}
	return(preallocated);
}
