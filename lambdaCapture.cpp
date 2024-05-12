#include <iostream>
using namespace std;

int main(){
	int var =10;

	auto fun = [var](){
		cout<<"PRinting var: "<<var<<endl;
	};

	fun();
}
