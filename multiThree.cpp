#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

#ifndef NUM
#define NUM 5
#endif

void doSomeJob(){
	cout<<"Job started..."<<endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout<<"Job Completed..."<<endl;
	cout<<"______________________________________"<<endl;
}

int main(){
	thread arr[NUM]; //C Style arrays 

	for(int cnt=0; cnt < NUM;++cnt)
		arr[cnt] = thread{doSomeJob};

	for(int cnt=0; cnt < NUM;++cnt)
		arr[cnt].join();
}
