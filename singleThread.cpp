#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void doSomeJob(){
	cout<<"Job started..."<<endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout<<"Job Completed..."<<endl;
	cout<<"______________________________________"<<endl;
}


int main(){
	doSomeJob();
	doSomeJob();
	doSomeJob();
}
