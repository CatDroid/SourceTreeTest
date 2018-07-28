#include <stdio.h>

void func(int& inout){
	inout=inout+1;
}

void funcBranch(int & inout){
	// keep Stash and keep Stage
	// Stash Modify
	inout=inout/2 ;
}

int main(){
	// refs/for/newBranch
	int i = 4 ;
	funcBranch(i);
	printf("this is NewBranch %d\n",i );

	return 0;
}
