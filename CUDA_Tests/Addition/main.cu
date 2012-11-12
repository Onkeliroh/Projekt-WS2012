//compile with "nvcc -arch=sm_20 -lcudart"
#include <stdio.h>

__global__ void add (int *a, int *b, int *c)
{
	*c = *a + *b;
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

	cudaMemcpy(a2, &a , sizeof(int), cudaMemcpyHostToDevice);
	cudaMemcpy(b2, &b , sizeof(int), cudaMemcpyHostToDevice);

	add<<<1,1>>>(a2,b2,c2);

	cudaMemcpy(&c, c2, sizeof(int), cudaMemcpyDeviceToHost);
	
	cudaFree(a2);
	cudaFree(b2);
	cudaFree(c2);

	printf("%i\n",a);
	printf("%i\n",b);	
	printf("%i\n",c);
}
