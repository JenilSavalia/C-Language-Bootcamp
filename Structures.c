#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
