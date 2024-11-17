Dynamic Memory Allocation

• Dynamic Memory Allocation in C allows you to allocate memory at runtime, instead of at compile time.

=> This is useful when you don't know in advance how much memory you will need, 
as it lets your program request memory from the system heap while the program is running.



1) malloc() 
//=> Allocates a specified number of bytes and returns a pointer to the first byte of the allocated memory.

int *ptr = (int*) malloc(5 * sizeof(int));  // Allocates memory for 5 integers



2) calloc() 
//Allocates memory for an array of elements, initializes them to zero, and returns a pointer to the first byte.

int *ptr = (int*) calloc(5, sizeof(int));  // Allocates memory for 5 integers, initialized to 0

3) realloc() 
//Changes the size of previously allocated memory, allowing you to expand or shrink the memory.

ptr = (int*) realloc(ptr, 10 * sizeof(int));  // Expands memory to hold 10 integers

4) free()
//Releases dynamically allocated memory back to the system to avoid memory leaks.

free(ptr);  // Frees the memory previously allocated by malloc, calloc, or realloc


calloc 	
malloc
realloc
free
NULL
Pointer

