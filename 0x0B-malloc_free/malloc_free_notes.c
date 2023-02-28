/*
 * notes will go here
 * stack falls down; heap builds up
 * stack holds vars like literal int x=3 and char c[]= "ima string"
 * heap holds malloc'd stuff. this can be freed
 *
 *
 *
 */

char *mallocChar = malloc(100);
/*this starts as a void pointer, that gets promoted to a char pointer*/
/*if you're curious, a pointer itself is always 8 bytes, though char/int are different*/
free(mallocChar);
/*to avoid math errors, we'll instead do*/
*mallocChar = malloc(25 * sizeof(char));
/*so if we want an array of 5 int*/
/*we'd just say int arr[5]*/

/*but if it's a variable... */
int n = 10;
int *arr = malloc(n * sizeof(int));
/*valgrind is a thing taht will tell you if you have memory leaks for not feeing it after yo're done*/
