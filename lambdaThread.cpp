#include <thread>
#include <chrono>
#include <iostream>
using namespace std;


int main(){
	thread tObj([]{
				cout<<"Job	started..."<<endl;
				this_thread::sleep_for(chrono::milliseconds(1000));
				cout<<"Job Completed..."<<endl;
				cout<<"______________________________________"<<endl;					
				});

	tObj.join();
}
