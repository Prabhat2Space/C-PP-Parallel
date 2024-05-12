#include <stdio.h>
#include <pthread.h>

void* fun(void *args){
	while (1)
		printf("X");
}

int main(){
	pthread_t tid;
	pthread_create(&tid,NULL, fun, NULL);

	while(1)
	 	printf("O");
}

