/*
 *
 *
 */

#include <iostream>
#include <thread>

using namespace std;

void fun(){
	for(int cnt=0;cnt<10;++cnt)
		cout<<"X";		
	cout<<endl;
}

int main(){
	thread obj(fun);

	for(int cnt=0;cnt<10;++cnt)
		cout<<"O";
	cout<<endl;

	obj.join(); 
}
