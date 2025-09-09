#include <stdio.h>
int main()
{
	int* ip;   //--> ALL this are wild pointers --> unlinitialized pointers.
	char* cp;
	float* fp;
	double* dp;

	printf("Sizeof int pointer: %zu\n",sizeof(int*));
	printf("Sizeof char pointer: %zu\n",sizeof(cp));
	printf("Sizeof float pointer: %zu\n",sizeof(fp));
	printf("Sizeof double pointer: %zu\n",sizeof(dp));
	return 0;
}
