#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//File Handling
//In C, you can create, open, read, and write to files by declaring a pointer of type FILE,
// and use the fopen() function

FILE *var;
var = fopen(filename, mode);



//Create a File

int main(){
FILE *fptr;

// Create a file
fptr = fopen("filename.txt", "w");

// Close the file
fclose(fptr);	
}



//Write To a File
//The w mode means that the file is opened for writing.
//To insert content to it, you can use the fprintf() function

int main(){
FILE *var;

// Open a file in writing mode
var = fopen("filename.txt","w");

// Write some text to the file
fprintf(var,"Jay Swaminarayan\nJay Swaminarayan\nJay Swaminarayan");

// Close the file
fclose(var);	
}

//Note: If you write to a file that already exists, the old content is deleted,
//and the new content is inserted.


//Append Content To a File

//If you want to add content to a file without deleting the old content, you can use the "a" mode.
//The "a" mode appends content at the end of the file


int main(){
	
FILE *var;

// Open a file in append mode
var = fopen("filename.txt","a");

// Append some text to the file
fprintf(var, "\nJay Shree Swaminarayan");

// Close the file
fclose(var);
}

//Note: Just like with the w mode; if the file does not exist,
//the "a" mode will create a new file with the "appended" content.



//Read a File

//To read from a file, you can use the "r" mode

//1) We need to create a string that should be big enough to store the content of the file.
//2) In order to read the content of filename.txt, we can use the fgets() function.
//     The fgets() function takes three parameters:
//       fgets(myString, 100, fptr);

//  • first parameter : specifies where to store the file content
//  • Second parameter : specifies the maximum size of data to read, which should match the size of myString (100).
//  • Third parameter : third parameter requires a file pointer that is used to read the file (fptr in our example).


int main(){
	
	FILE *var;
	// Open a file in read mode
	var = fopen("filename.txt","r");
	// Store the content of the file
	char str[50];
	// Read the content and store it inside str
	fgets(str,50,var);
	// Print the file content
	printf("%s",str);
	// Close the file
	fclose(var);
	
}





//Note: The fgets function only reads the first line of the file
//To read every line of the file, you can use a while loop


int main(){
	
	FILE *var;
	// Open a file in read mode
	var = fopen("filename.txt","r");
	// Store the content of the file
	char str[50];
	
	
    // Read the content and print it
   while(fgets(str, 100, var) != NULL) {
   printf("%s", str);
   }


	// Close the file
	fclose(var);
	
}



//If you try to open a file for reading that does not exist, the fopen() function will return NULL.
//Tip: As a good practice,
//we can use an if statement to test for NULL, 
//and print some text instead (when the file does not exist):



int main(){
	
	FILE *var;
	
	var = fopen("lorem.txt","r");
	
	// Print some text if the file does not exist
    if( var == NULL ) {
    printf("Not able to open the file");
    }
	
	// Close the file
    fclose(var);
	
}




//QUESTION 

//If the file exist, read the content and print it. If the file does not exist, print a message:


int main(){
	
FILE *var;

// Open a file in read mode
var = fopen("filename.txt","r");

// Store the content of the file
char string[100];

// If the file exist
if(var != NULL){
	
    // Read the content and print it
	while(fgets(string,100,var )!= NULL){
	printf("%s",string);
	}
	
}

// If the file does not exist
else{
	printf("Not able to open the file");
}
	
// Close the file
fclose(var);

}



// C Program to count the Number of Characters in a Text File 


int main(){
	
FILE *var;

// Open a file in read mode
var = fopen("filename.txt","r");
char c;
int count = 0;
// Store the content of the file
char string[100];

// If the file exist
if(var != NULL){
	
	for (c = getc(var); c != EOF; c = getc(var)) {
		        // Increment count for this character 
		        // EOF : End of Flie
        count = count + 1;
	}
 }


// If the file does not exist
else{
	printf("Not able to open the file");
}
	
// Close the file
fclose(var);

 // Print the count of characters 
    printf("The file has %d characters\n ",count); 
  
    return 0; 
}






