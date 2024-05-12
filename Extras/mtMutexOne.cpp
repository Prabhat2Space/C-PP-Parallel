#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;

mutex mt1;
int counter = 0;

void doSomeJob(){
	unique_lock<mutex> lock1 (mt1, defer_lock_t());
	lock1.lock();
	int res = 0;
	for(int i = 0; i < 100; ++i){
		res++;
		this_thread::sleep_for(chrono::milliseconds(1));
	}
	counter+=res;
	lock1.unlock();
}

int main(){
	vector<thread> tObjs;
	cout<<"Global var : "<<counter<<endl;
	for (int i = 0; i < 10; i++)
		tObjs.push_back(thread{doSomeJob});
	
	for(auto &t: tObjs)
		t.join();
	cout<<"Global var : "<<counter<<endl;
}