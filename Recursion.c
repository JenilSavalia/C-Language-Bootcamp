#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//int fact(int num){
//	if(num==1){
//		return 1;
//	}
//	else{
//	    return num*fact(num-1);	
//	}
//
//}
//
//
//int main(){
//	
//int num = 5;
//int upt = fact(num);
//printf("%d",upt);
//
//}



//int sum(int num){
//	
//		if(num>0){
//		return num+sum(num-1);
//		}
//		else{
//			return 0;
//		}
//}
//
//int main(){
//	
//int num = 2;
//int upt = sum(num);
//printf("%d",upt);
//
//}



int fabb(int num){
	
		if(num==0){
		return 0;
		}
		else if(num==1){
		return 1;
		}
		else{
			return fabb(num-1) + fabb(num-2);
			
		}
}

int main(){
int num = 2;

int upt = fabb(num);
printf("%d",upt);

}


