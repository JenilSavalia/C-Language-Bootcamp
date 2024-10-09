

//An enum is a special type that represents a group of constants (unchangeable values).

enum Level {
  LOW,
  MEDIUM,
  HIGH
};


//By default, the first item (LOW) has the value 0, the second (MEDIUM) has the value 1, etc.
//If you now try to print myVar, it will output 1, which represents MEDIUM:

int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;

  // Print the enum variable
  printf("%d", myVar);

  return 0;
}


//Change Values

enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
printf("%d", myVar); // Now outputs 50




//Note that if you assign a value to one specific item, the next items will update their numbers accordingly:

enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};

