#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Link : https://www.geeksforgeeks.org/structures-c/

//The structure in C is a user-defined data type that can be used to group
//items of possibly different types into a single type.

// • A structure allows you to store multiple values of different data types together.
// • Each member of the structure has its own memory space
// • Unlike an array, a structure can contain many different data types (int, float, char, etc.)


NOTE :
 • Structure members cannot be initialized with the declaration.
//	 For example, the following C program fails in the compilation.


//struct Point
//{
//   int x = 0;  // COMPILER ERROR:  cannot initialize members here
//   int y = 0;  // COMPILER ERROR:  cannot initialize members here
//};


//The reason for the above error is simple.
//When a datatype is declared, no memory is allocated for it.
//Memory is allocated only when variables are created.


struct myStructure {
  int myNum;
  char myLetter;
};


int main(){
	
struct myStructure j;

	j.myNum = 9642;
	j.myLetter = 'J';
	
	printf("My number: %d\n", j.myNum);
    printf("My letter: %c\n", j.myLetter);
    
    return 0;
	
}

//---------------------------------------------------

// Assigning Values to Structure using array 
// Note that you don't have to use the strcpy() function for string values with this technique:

struct myStructure {
  int myNum;
  char myLetter;
};


int main(){
	
struct myStructure s1 = {9642,'j'};


	
	printf("My number: %d\n", j.myNum);
    printf("My letter: %c\n", j.myLetter);
    
    return 0;
	
}



struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1  = {"BMW", "X5", 1999};
  struct Car car2  = {"Ford", "Mustang", 1969};
  struct Car car3  = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}



//What About Strings in Structures?


struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}


//----------------------------------- Array Of Structure -----------------

• You can create an array of structures to hold multiple records of structured data. 
//For example, an array of Student structures can store information about multiple students.


#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

int main() {
    struct Student students[2] = {
        {1, "Alice", 85.5},
        {2, "Bob", 90.0}
    };
    for (int i = 0; i < 2; i++) {
        printf("ID: %d, Name: %s, Grade: %.2f\n", students[i].id, students[i].name, students[i].grade);
    }
    return 0;
}

//-----------------------------------  Arrays within Structures -----------------


• A structure can contain an array as one of its fields.
// For instance, a Student structure can have an array to hold multiple grades.


struct Student {
    int id;
    char name[50];
    float grades[3];  // Array to store three grades
};

int main() {
    struct Student s1 = {1, "Alice", {85.5, 90.0, 92.5}};
    printf("ID: %d, Name: %s, Grades: %.2f, %.2f, %.2f\n", s1.id, s1.name, s1.grades[0], s1.grades[1], s1.grades[2]);
    return 0;
}


//-----------------------------------  Structures within Structures -----------------


• A structure can have another structure as a member

#include <stdio.h>

struct Address {
    char city[50];
    int zipCode;
};

struct Student {
    int id;
    char name[50];
    struct Address newname;  // Structure within another structure
};

int main() {
    struct Student s1 = {1, "Alice", {"New York", 10001}};
    printf("ID: %d, Name: %s, City: %s, Zip: %d\n", s1.id, s1.name, s1.address.city, s1.address.zipCode);
    return 0;
}


//-----------------------------------  Structures and Functions	 -----------------


struct Student {
    int id;
    char name[50];
};

void printStudent(struct Student s) {
    printf("ID: %d, Name: %s\n", s.id, s.name);
}

int main() {
    struct Student s1 = {1, "Alice"};
    printStudent(s1);  // Pass by value
    return 0;
}





//------------------ Bit Fields ----------------------------------

Bit Fields: Enable fine control over memory use by specifying exact bit widths for structure members, 
often used for low-level or hardware-specific programming.



Bit fields in structures allow you to specify the exact number of bits for each member.
Bit fields are useful for memory-constrained applications or when working with hardware
where individual bits have special meanings (e.g., status flags).



struct Status {
    unsigned int isOnline : 1;  // 1 bit
    unsigned int hasError : 1;  // 1 bit
    unsigned int priority : 3;  // 3 bits
};

int main() {
    struct Status s = {1, 0, 5};  // Set isOnline = 1, hasError = 0, priority = 5
    printf("isOnline: %u, hasError: %u, priority: %u\n", s.isOnline, s.hasError, s.priority);
    return 0;
}


Output Explanation: 
//Here, isOnline, hasError, and priority are stored in a total of 5 bits 
//within the structure, saving memory compared to using full int types for each.















