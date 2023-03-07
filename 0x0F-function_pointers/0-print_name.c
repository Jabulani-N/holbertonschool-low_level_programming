


/**
 * basically we jsut recieve a funciton and some other garbage
 * creat ea pointer to said function (it'll look like a variable)
 * 	and interact like a function-like macro
 *
 *
 * print_name - purts recievevd arg1 into recieved function
 *
 * @name: received argument
 * @f: received function
 * Return: void
 *
 */
/*
 * basically, just take recieved function f
 * 	make sure it is valid
 * run f with the received argument name
 * 	make sure it is also valid
 * that's all you need.
 */
void print_name(char *name, void (*f)(char *name2))
{
	
	if (f == NULL || name == NULL)
		return (NULL);

	f(name);
}

