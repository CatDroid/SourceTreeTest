#include <stdio.h>

void func(int& inout){
	inout=inout+1;
}

void funcBranch(int & inout){
	inout=inout-1 ;
}

int main(){
	int i = 4 ;
	funcBranch(i);
	printf("this is NewBranch %d\n",i );

	return 0;
}
