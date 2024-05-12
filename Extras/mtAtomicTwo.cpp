/*
	multiple threads in C++
*/

#include <iostream>
#include <vector>
#include <thread>
#include <functional>
#include <chrono>
#include <atomic>

using namespace std;

void fun(atomic<int> &counter){
	int res = 0;
	for (int i = 0; i < 100; ++i){
		++res;
		this_thread::sleep_for(chrono::milliseconds(1));			
	}	
	counter += res;	
}
int main(){
	atomic<int> counter(0);
	vector<thread> threadObjs;
	
	cout<<"Counter value: "<<counter<<endl;
	for(int i=0;i<10; ++i)
		threadObjs.push_back(thread{fun, ref(counter)});
	
	for (auto & t: threadObjs)
		t.join();
	cout<<"Counter value: "<<counter<<endl;
}
