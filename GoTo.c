// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>


// function to check even or not
int fact(int num){
    int facto = 1;
    if(num==0){
       return 0; 
    }
    else if(num==1){
       return 1; 
    }
    else{
        goto process;
    }
    
    process :
    if(num>0){
    facto = facto*num;
    num--;
    goto process;
    return 0;   
    };
    
    printf("%d",facto);
}


int main()
{
    int num = 5;
    fact(num);
    return 0;
}
