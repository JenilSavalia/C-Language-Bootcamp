//UNION

//In C, a union is a special data type that allows you to store different types of data in the same memory location.

//Unlike a structure (struct), where each member has its own memory space, in a union,
//all members share the same memory space, meaning only one member can hold a value at a time.


union union_name {
    data_type1 member1;
    data_type2 member2;
    // other members
};


Key Characteristics of Unions:
	
Shared memory: 
 • All members of a union share the same memory.
 • The size of the union is equal to the size of its largest member.
 
One member at a time: 
 • You can store a value in one member at a time. 
 • Storing a value in one member will overwrite the previous value because they share the same memory space.
 
 

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Store an integer
    data.i = 10;
    printf("data.i: %d\n", data.i);

    // Store a float (overwrites the integer)
    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);

    // Store a string (overwrites the float)
    strcpy(data.str, "Hello, World!");
    printf("data.str: %s\n", data.str);

    return 0;
}

