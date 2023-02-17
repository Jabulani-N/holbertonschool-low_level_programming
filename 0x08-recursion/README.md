this readme will have some notes

it seems 
req 1: file exist
req 2: readme exist
req 3: file runnable/compilable


power can just be multply by self, reduce power by 1; if power equals 1, return self; if power equals 0, return 1 (x^0=1 always)
- also if negative power return -1. do this BEFORE REURSIVE IF CAN FIRE

natural number = counting number = whole number > 0
on square root, it only cares if the target  has a whole square root.
- that said, google an answerr. it'll be faster than stubbournly doing already completed work again, ant it'll catch anything oyu overlook

google answer to prime number check as well, since we only have one input to work with
- maybe if we have it return 1 if the input is indivisible by the number below it? WONT WORK
- - that'd return the same thing at the "3" input for both 29 (prime) and 30 (not prime)

TURNS OUT YOU CAN MAKE STATIC (sub) FUNCTIONS

sqrt subfunction will just skim values until squaring one equals the input request. 
if wrong, return result of itself(base,testMeAsRoot - 1)
if correcet, return testMeAsRoot
- this worked, but had to count starting at 1 and hten go up to base as limit, as starting at base and counting down resulted in breaking int limit of 2^32 if the input was more than the 2^16 becasue I tested by squaring input. this way the product of internal tests will neer be above base input.


prime number testing.
basiocally for 5, test 1 times every number up to 5, then 2 times ever number up too 5, and so on until we either get 5, or get (5-1) * (5-1), as adding one to either makes us hit 5 * 1 proves its prime


