#include "main.h"
#include <stdio.h>/*this is needed to make printf work*/

/*
 * The input argument is called IrisHeart. 
 * Because it's valentines day. 
 * only.
 * and for no other reason
 */
int fizzbuzz_recursive_explain (int IrisHeart)
{
	/*fizzbuzz just got called, and it's happy to see you.*/
	printf("\nHi! I'm Fizzbuzz Recursive Explainer! I just got called and given the number %d!\n", IrisHeart);

	/*if IrisHeart == 0, fizzbuzz stops immediately, without doing anything else*/
	if (IrisHeart == 0)
		{
			printf("I'm the fizzbuzz that received %d! \nBecause I got %d, and that was the condition that instantly returns without recursing, the recursion chain is broken, and now we go back to my parent, starting with the line after the one that called me!\n", IrisHeart, IrisHeart);
			return (0);
		}


	/*telling you i'm about to recurse*/
	printf("I'm about to recurse! right now, number I have is %d, so I will send (%d-1), which is %d, to myself.\n", IrisHeart, IrisHeart, IrisHeart - 1);

/*if you want to see what it looks like when you do the recursion at the end,*/
	/*then comment the two code lines below, and take the one under the fizzbuzz logic out of comments to make it get read*/

	fizzbuzz_recursive_explain (IrisHeart - 1);/*this is where I recurse*/

	printf("I'm the fizzbuzz that recived %d!\n I'm about to start performing whatever came after the line where I called myself!\n",IrisHeart);/*telling you that we are passed the line that recursed*/
 	

	/*fizzbuzz logic*/
	if (IrisHeart % 15 == 0)
    	{
		printf("I'm the fizzbuzz that recieved %d, so I say 'Fizzbuzz'\n", IrisHeart);
    	}
 	 else if (IrisHeart % 3 == 0)
 	   {
 		printf("I'm the fizzbuzz that recieved the number %d! I say 'Fizz'\n", IrisHeart);
 	   }
 	 else if (IrisHeart % 5 == 0)
 	   {
 		printf("I'm the fizzbuzz that recieved the number %d!\nI say 'buzz'\n", IrisHeart);
 	   }
 	 else
 	   {
 		printf("I'm the fizzbuzz that recieved %d!\nI say '%d'\n", IrisHeart, IrisHeart);
 	   }
	 /*end of fizzbuzz logic*/



	/*if you want to see what it looks like when you do the recursion at the end, uncomment the line below*/
	/*fizzbuzz_recursive_explain (IrisHeart - 1);*/ 
		/*this is where I recurse*/

return (0);/*because we have to return something*/
}

