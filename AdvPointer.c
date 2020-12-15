/*
Create a constant int a and set it to 12

int a = 12;

Create a POINTER ptr

set it to the ADDRESS of a (where we have 12 stored in memory)

int *ptr = &a;

Print out our variables.

printf( "a == %d \n", a);

printf( "ptr == %p \n", ptr);

Print out whats stored at ptr

printf( "*ptr == %d \n", *ptr);

Print out the address of a.

printf( "&a == %p \n", &a);

The memory at the address ptr is the same as a!

printf( "*ptr == a \n\n");

The above example shows how ptr is equivalent to the address of a.

(redundant printf statements are ommitted from here)

The index i of ptr is the memory at ptr+i

In other words:

ptr[i] == *(ptr+i)

For example:

ptr[0] == *(ptr+0)

ptr[0] == *ptr

Since ptr[i] is just a notation for *(i+ptr)

We can say: i of ptr is the same as the memory at i+ptr.

i[ptr] == *(i+ptr)

For example:

0[ptr] == *(0+ptr)

0[ptr] == *ptr

Since * and & are essentially opposites you can use them together to cancel eachother out

For example:

*&a == a


*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc , char **argv)
{
	int a = 12;

	int *ptr = &a;

	printf( "\nPointer Example\n\n");

	printf( "a    == %d \n", a);
	printf( "ptr  == %p \n", ptr);
	printf( "*ptr == %d \n", *ptr);
	printf( "&a   == %p \n", &a);

	printf( "*ptr == a \n\n"); 

	printf( "ptr[i] == *(ptr+i) \n"); 

	printf( "ptr[0] == *(ptr+0) \n"); 
	printf( "ptr[0] == *ptr \n");
	printf( "ptr[0] == %d \n\n", ptr[0]);

	printf( "i[ptr] == *(i+ptr) \n");

	printf( "0[ptr] == *(0+ptr) \n");
	printf( "0[ptr] == *ptr \n");
	printf( "0[ptr] == %d \n\n", 0[ptr]);

	printf( "*&a    == %d \n",*&a);
	printf( "*&a    == a \n\n");

	return 0;
}