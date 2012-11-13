//compile with "nvcc -arch=sm_20 -lcudart"
#include <stdio.h>

#define Blocksize 2


__global__ void add (int *a, int *b, int *c)
{
	__shared__ int* dings;
	__shared__ int dings[1];
	if (threadIdx.x == 0){
		dings[0]=24;
		c[threadIdx.x] = dings[0];
		__syncthreads();
	}
	else{
		c[threadIdx.x] = a[threadIdx.x] + b[threadIdx.x] + dings[0];
		__syncthreads();
	}
}

int main( void )
{
	int *a, *b, *c;
	int *a2,*b2,*c2;
	int size = Blocksize * sizeof(int);

	cudaMalloc((void**) &a2, size);
	cudaMalloc((void**) &b2, size);
	cudaMalloc((void**) &c2, size);

	a = (int *)malloc(size); a[0] = 43; a[1] = 42;
	b = (int *)malloc(size); b[0] = 45; b[1] = 44;
	c = (int *)malloc(size);

	cudaMemcpy(a2, a , size, cudaMemcpyHostToDevice);
	cudaMemcpy(b2, b , size, cudaMemcpyHostToDevice);

	add<<<1,Blocksize>>>(a2,b2,c2);

	cudaMemcpy(c, c2, size, cudaMemcpyDeviceToHost);
	
	cudaFree(a2);
	cudaFree(b2);
	cudaFree(c2);

	printf("%i\t%i\n",a[0],a[1]);
	printf("%i\t%i\n",b[0],b[1]);	
	printf("%i\t%i\n",c[0],c[1]);
}
