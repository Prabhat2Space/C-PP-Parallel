/*
	multiple threads in C++
*/

#include <iostream>
#include <vector>
#include <thread>
#include <functional>
#include <chrono>

using namespace std;

void fun(int &counter){
	for (int i=0; i < 100; ++i){
		++counter;
		this_thread::sleep_for(chrono::milliseconds(1));			
	}	
}
int main(){
	int counter = 0;
	vector<thread> threadObjs;
	
	cout<<"Counter value: "<<counter<<endl;
	for(int i=0;i<10; ++i)
		threadObjs.push_back(thread{fun, ref(counter)});
	
	for (auto & t: threadObjs)
		t.join();
	cout<<"Counter value: "<<counter<<endl;
}
