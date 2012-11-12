#include <stdio.h>

__global__ void add (int *a, int *b, int *c)
{
	*c=*a+*b;
}

int main( void )
{
	int a,b,c;
	int *a2,*b2,*c2;

	cudaMalloc((void**) &a2, sizeof(int));
	cudaMalloc((void**) &b2, sizeof(int));
	cudaMalloc((void**) &c2, sizeof(int));

	a = 5;
	b = 42;

	cudaMemcpy(a2, &a , sizeof(int), cudaMemcpyHosttoDevice);
	cudaMemcpy(b2, &b , sizeof(int), cudaMemcpyHosttoDevice);

	add<<<1,1>>>(a,b,c);

	cudaMemcpy(&c, c2, sizeof(int), cudaMemcpyDevicetoHost);
	
	printf("%i\n",c);
}
