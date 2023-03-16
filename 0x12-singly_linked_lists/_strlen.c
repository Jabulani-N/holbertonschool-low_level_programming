/**
 * _strlen - measures a string
 * @input: input string to measure
 * Return: unsigned int taht is input's length
 */

unsigned int _strlen(char *input)
{
	unsigned int len = 0;

	while (*(input + len))
	{

		len++;
	}
	return (len);
}

