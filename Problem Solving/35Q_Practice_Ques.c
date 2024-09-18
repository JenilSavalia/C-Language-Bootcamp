#include <stdio.h>
#include <string.h>
#include <math.h>


//2. Sum of Two Numbers
//int main(){
//	int num1,num2;
//	printf("Enter Number_1:");
//	scanf("%d",&num1);
//	printf("Enter Number_2:");
//	scanf("%d",&num2);
//	printf("%d",num1+num2);
//	return 0;
//}



//3. Largest of Two Numbers

//int main(){
//	int num1,num2;
//	printf("Enter Number_1:");
//	scanf("%d",&num1);
//	printf("Enter Number_2:");
//	scanf("%d",&num2);
//	if(num1>num2){
//		printf("%d",num1);
//	}
//	else{
//	printf("%d",num2);	
//	}
//	
//	return 0;
//}


//4. Even or Odd

//int main(){
//	int num1,num2;
//	printf("Enter Number_1:");
//	scanf("%d",&num1);
//
//	if(num1%2==0){
//		printf("%d is Even",num1);
//	}
//	else{
//	printf("%d is Odd",num1);	
//	}
//	
//	return 0;
//}



//5. Factorial of a Number


//int main(){
//	int num1,i;
//	printf("Enter Number_1:");
//	scanf("%d",&num1);
//
//int fact = 1;

//for(i=1;i<=num1;i++){
//	fact =fact*i;
//}
//printf("%d",fact);
//	return 0;
//}


//6. Reverse a Number

//int main(){
//	int num1;
//	printf("Enter Number_1:");
//	scanf("%d",&num1);
//
//int i =0;
//int reversedNum = 0;
//while(num1>0){
//int digit = num1 % 10;
//reversedNum = reversedNum * 10 + digit;
//num1 = round(num1/10);
//}
//printf("%d",reversedNum);
//	return 0;
//}


//7. Palindrome Check

//int main(){
//	int num1;
//	printf("Enter Number_1:");
//	scanf("%d",&num1);
//
//int originalNum = num1;
//int i =0;
//int reversedNum = 0;
//while(num1>0){
//int digit = num1 % 10;
//reversedNum = reversedNum * 10 + digit;
//num1 = num1/10;
//}
//
//if(reversedNum == originalNum){
//	printf("true");
//}
//else{
//	printf("false");
//}
//
//	return 0;
//}


//8. Sum of Digits ()Write a program to find the sum of digits of a given number.)


//int main(){
//	int num1;
//	printf("Enter Number_1:");
//	scanf("%d",&num1);
//
//int i =0;
//int sum = 0;
//while(num1>0){
//sum = sum + num1 % 10;
//num1 = num1/10;
//}
//printf("%d",sum);
//	return 0;
//}


//9. Prime Number Check

//int main(){
//	int num1;
//	printf("Enter Number:");
//	scanf("%d",&num1);
//
//int count = 0;
//int i;
//if(num1<1){
//	printf("Not Prime Number");
//}
//else{
//for(i=2;i<num1;i++){
//	if(num1%i==0){
//		count = count +1;
//	}
//}
//if(count>0){
//	printf("Not Prime Number");
//}
//else{
//	printf("Prime Number");
//}
//
//
//}
//	return 0;
//}



//10. Fibonacci Sequence


//int main(){
//	int n,i;
//	
//	printf("Enter Number of Steps(n): ");
//	scanf("%d",&n);
//	
//	int fab[n];
//	fab[0]=0;
//	fab[1]=1;
//	
//	for(i=2;i<n;i++){
//		fab[i] = fab[i-1] + fab[i-2];
//	}
//	
//	 // Print the Fibonacci sequence
//    printf("Fibonacci Sequence: ");
//    for (i = 0; i < n; ++i) {
//        printf("%d, ", fab[i]);
//    }
//
//    return 0;
//}




//11. GCD of Two Numbers
//12. LCM of Two Numbers



//13. Leap Year Check

//int main() {
//    int year;
//    printf("Enter a year: ");
//    scanf("%d", &year);
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        printf("%d is a leap year.\n", year);
//    } else {
//        printf("%d is not a leap year.\n", year);
//    }
//
//    return 0;
//}

//1. A year is a leap year if it is divisible by 4.
//2. However, if the year is divisible by 100, it is not a leap year, unless...
//3. The year is also divisible by 400.



//14. Simple Calculator

//int main(){
//	int num1,num2;
//	char oper;
//	printf("Enter Number_1:");
//	scanf("%d",&num1);
//	printf("Enter Number_2:");
//	scanf("%d",&num2);
//	printf("Enter Operation (+, -, *, /) :");
//	scanf(" %c",&oper);
//	if(oper=='+'){
//		printf("%d",num1+num2);
//	}
//	else if(oper=='-'){
//		printf("%d",num1-num2);
//	}
//	else if(oper=='*'){
//		printf("%d",num1*num2);
//	}
//	else{
//		printf("%d",num1/num2);
//	}
//	return 0;
//}


//15. Sum of Array Elements

//int main(){
//	
//	int myarray[] = {4,3,2,1,7,8,6};
//	int sum = 0;
//	int length = sizeof(myarray) / sizeof(myarray[0]);
//
//	int i = 1;
//	for(i = 0;i<length;i++){
//		sum = sum + myarray[i];
//	}
//	printf("%d\n",sum);
//	
//	return 0;
//}


//16. Largest Element in an Array

//int main(){
//	
//	int myarray[] = {4,3,2,1,7,8,666};
//	int max = 0;
//	int length = sizeof(myarray) / sizeof(myarray[0]);
//
//	int i = 1;
//	
//	for(i = 0;i<length;i++){
//		if(max<myarray[i]){
//			max = myarray[i];
//		}
//	}
//	printf("%d\n",max);
//	
//	return 0;
//}


//17. String Length


//int main(){
//	char str[] = "jenil";
//	int count = 0;
//	int i = 0;
//	while(str[i]!= '\0'){
//		count = count + 1;
//		i++;
//	}
//	printf("%d",count);
//}


//int main(){
//	char str[] = "jenil";
//	int len = sizeof(str)/sizeof(str[0]);
//	len = len - 1;
//	printf("%d",len);
//}


//18. String Reverse


//method-1 without storing in variable
//int main(){
//	char str[] = "jenil";
//	int i;
//for(i=strlen(str)-1;i>=0;i--){
//	printf("%c",str[i]);
//}
//	
//}


//method-2 storing in variable
//int main(){
//	char str[] = "jenil";
//	char rstr[strlen(str)+1];
//	int i;
//	
//for(i=0;i<strlen(str);i++){
//	rstr[i] = str[strlen(str)-1-i];
//}
//	
//	    printf("Original String: %s\n", str);
//    printf("Reversed String: %s\n", rstr);
//
//    return 0;
//}


//19. Swapping Two Numbers

//int main(){
//	int a,b;
//	printf("Enter a: ");
//	scanf("%d",&a);
//	printf("Enter b: ");
//	scanf("%d",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("a = %d\n",a);
//	printf("b = %d",b);
//	
//}


//20. Swap Two Numbers Using Third Variable

//int main(){
//	int a,b,temp;
//	printf("Enter a: ");
//	scanf("%d",&a);
//	printf("Enter b: ");
//	scanf("%d",&b);
//	temp = a;
//	a=b;
//	b=temp;
//	
//	printf("a = %d\n",a);
//	printf("b = %d",b);
//	
//}


//21. ASCII Value of a Character

//int main(){
//	char str;
//	printf("Enter Char: ");
//	scanf("%c",&str);
//    // %d displays the integer value of a character
//    // %c displays the actual character
//    printf("ASCII value of %c = %d", str,  str);
//return 0;
//}	


//24. Sum of First N Natural Numbers

//int main(){
//	int n,sum;
//	printf("enter n: ");
//	scanf("%d",&n);
//	sum = n*(n-1)/2;
//	printf("%d",sum);
//}


//25. Check Vowel or Consonant

//int main(){
//	char str;
//	printf("Enter Char: ");
//	scanf("%c",&str);
//    if(str=='a' ||str=='e' ||str=='i' ||str=='o' ||str=='u'){
//    	printf("Vovel");
//	}
//	else{
//		printf("Consonant");
//	}
//return 0;
//}	


//26. Check Alphabet, Digit, or Special Character



//27. Count the Number of Digits in an Integer

//int main(){
//	
//	int num = -96542;
//	int count = 0;
//	int i = 0;
//	
//	if(num==0){
//		count = 1;
//		printf("%d",count);
//	}
//	else{
//		
//	
//	while(num!=0){
//		num = num/10;
//		count = count + 1;
//	}
//	printf("%d",count);
//}
//}



//31. Print All Prime Numbers Between Two Numbers
//
//int main(){
//	int a,b,i;
//	printf("enter Start point:\n");
//	scanf("%d",&a);
//	printf("enter End point:");
//	scanf("%d",&b);
//	
//for(i=a;i<=b;i++){
//	if(i%2==0){
//		printf("%d\n",i);
//	}
//}
//}



//32. Check Armstrong Number


//int main(){
//	
//	int arm,temp;
//	int num = 9642;
//	int count = 0;
//	int i = 0;
//	temp = num;
//	
//			while(num!=0){
//		num = num/10;
//		count = count + 1;
//	}
//	 num = temp;
//	while(num!=0){
//		arm = arm + pow(num%10,count);
//	num = num/10;
//	}
//	
//	if(temp == arm){
//		printf("ARM");
//	}
//	else{
//		printf("Not ARM");
//	}
//
//}



// 33. Calculate the Average of Numbers in an Array

//int main(){
//	
//	int myarray[] = {4,3,2,1,7,8,6,4};
//	int sum = 0;
//	int length = sizeof(myarray) / sizeof(myarray[0]);
//
//	int i = 1;
//	for(i = 0;i<length;i++){
//		sum = sum + myarray[i];
//	}
//float avg = (float)sum / length;
//	printf("%.1f\n",avg);
//	return 0;
//}


//34. Find the Second Largest Number in an Array

int main(){
	
	int myarray[] = {4,3,2,1,7,8,666};
	int max = 0;
	int max2 = 0;
	int length = sizeof(myarray) / sizeof(myarray[0]);

	int i = 1;
	
	for(i = 0;i<length;i++){
		if(max<myarray[i]){
			max = myarray[i];
		}
//		if(max<myarray[i]){
//			max2 = myarray[i];
//		}
	}
	printf("%d\n",max);
	
	return 0;
}

