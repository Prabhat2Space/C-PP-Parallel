#include <iostream>
#include <vector>
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
	vector<thread> arr;	//C++ Style STL container

	for(int cnt=0; cnt < NUM;++cnt)
		arr.push_back(thread{doSomeJob});

	for (auto &i: arr) //modern C++ range based loop
		i.join();
}
