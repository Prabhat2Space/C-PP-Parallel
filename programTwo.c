#include <stdio.h>
//Declarations
int x;
void fun();


//usage here 
int main(){
	printf("Printing ...%d\n", x);	
	fun();
}

//definitions here

void fun(){
	printf("In fun...%d\n",x);
}
int x = 100;

