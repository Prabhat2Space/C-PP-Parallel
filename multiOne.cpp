/*
 *
 *
 */

#include <iostream>
#include <thread>

using namespace std;

void fun(){
	while (1)
		cout<<"X";		
}

int main(){
	thread obj(fun);

	while (1)
		cout<<"O";
}
