// Question 1 ) write a collection of programs p1,p2,p3 such that they execute sequentially with the same process id and each program should also print its PID. The user should be able to invoke any combination of these programs to achieve the required functionality.
// For example consider three program $twice, $half and $square which accepts only one integer as one argument and doessome specifc operations.

// $twice 10 prints 20 and some integer which is its process ID as output.
// $square 10 prints 100 ...
// $half 10 prints 5 ...


// Now the user should be able to combine these programs with any combination to achieve the desire the result.

// ex1: $ twice square half twice half 10
//        === (half(twice(half(square(twice(10)))))); thus the result is 200.

// ex2: $ square twice 2
//        === (twice(square(2))); thus the result is 8.

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<time.h>

int main(int argc, char const *argv[])
{
	int t;
	
	return 0;
}