#include <iostream>
using namespace std;

int main(){
	auto fun = [](int a, int b){
		cout<<"Hello world..."<<endl;
		return a + b;
	};

	cout<<"Calling fun... "<<fun(10,20)<<endl;
}
