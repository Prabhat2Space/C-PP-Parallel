#include <unistd.h>
#include <stdio.h>

int main(){
	int ret = fork();

	if (ret == 0){
		printf("Control in Child...\n");
	}else if (ret > 0){
		printf("Control in Parent...\n");
	}
	printf("Both Parent an Child has control...\n");
}
