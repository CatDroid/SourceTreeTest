#include <stdio.h>

void func(int& inout){
	inout=inout+1;
}

int main(){
	int i = 2 ;
	func(i);
	printf("ok %d\n",i );

	return 0;
}
