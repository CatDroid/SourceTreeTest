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
	// 回退版本 1  
	int i = 4 ;
	funcBranch(i);
	printf("this is NewBranch %d\n",i );

	return 0;
}
