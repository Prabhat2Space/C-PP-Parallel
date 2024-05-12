#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
using namespace std;

#ifndef NUM
#define NUM 5
#endif

class DoSomeJob{ //functor
public:
	void operator()(){
		cout<<"Job started..."<<endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
		cout<<"Job Completed..."<<endl;
		cout<<"______________________________________"<<endl;
	}
};

int main(){
	vector<thread> arr(NUM);	

	for (auto &i: arr) //modern C++ range based loop
		i = thread{DoSomeJob()};

	for (auto &i: arr) //modern C++ range based loop
		i.join();
}
