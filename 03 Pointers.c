
• Memory Address
  => When a variable is created in C, a memory address is assigned to the variable.
  => The memory address is the location of where the variable is stored on the computer.
  => When we assign a value to the variable, it is stored in this memory address.
  
  
  ---> To access it, use the reference operator (&),
  
//  Example
int myAge = 43;
printf("%p", &myAge);  // Outputs 0x7ffe5367e044
  
// result represents where the variable is stored



  => You should also note that &myAge is often called a "pointer".
  
//    ---------- A pointer basically stores the memory address of a variable as its value. ------------
   
  => To print pointer values, we use the %p format specifier.
  
  
  
//____________________________ POINTERS _________________________________________

• A pointer is a variable that stores the memory address of another variable as its value.

 => In C, a pointer variable must be declared to point to a specific data type (like int, float, char, etc.),
    and is created with the * operator.
    
  ... This means that a pointer can only point to a memory address that holds data of the same type.
   
    
// Here’s an example demonstrating the importance of pointer types:

int main() {
    int a = 10;
    float b = 5.5;

    int *pInt = &a;       // Pointer to int
    float *pFloat = &b;   // Pointer to float

    printf("Value of a through pInt: %d\n", *pInt);   // Accessing an int
    printf("Value of b through pFloat: %.1f\n", *pFloat); // Accessing a float

    return 0;
}


Explanation:

//  • int *pInt = &a; creates a pointer pInt to hold the address of an int variable (a). Using
//  *pInt correctly dereferences and retrieves the int value.

//• float *pFloat = &b; creates a pointer pFloat to hold the address of a float variable (b).
//  Using *pFloat correctly dereferences and retrieves the float value.




Why Type-Specific Pointers Matter ?????

// When we declare int *pInt, we’re telling the compiler that pInt will hold the address of an 
// integer, and any data accessed through *pInt should be treated as an integer. If you accidentally
// use pInt to access the address of a float or char, the data will likely be misinterpreted.


 

int main() {
int num = 100;
int num1 = 101;
int *myptr = &num;
int *myptr1 = &num1;
printf("%d\n",*myptr);

printf("%p\n",(int *)myptr);
printf("%p",(int *)myptr1);
    return 0;
}
 
