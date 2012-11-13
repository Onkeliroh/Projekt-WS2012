//compile with:
#include <stdio.h>

#define Blocksize 10

__global__ void compute( char*, char*);
__device__ __host__ void algorithm(char*, char*);

__host__
int main (void)
{
	char* targets;
	char* targets2;
	char* result;
	char* result2;

	int size = Blocksize * sizeof(char);

	//speicherreservieren
	cudaMalloc((void **) &targets2, size);
	cudaMalloc((void **) &result2, size);

	targets	= (char *) malloc(size);
	result	= (char *) malloc(size); 

	targets[0] = 'A';
	targets[1] = 'B';
	targets[2] = 'C';
	targets[3] = 'D';
	targets[4] = 'E';
	targets[5] = 'F';
	targets[6] = 'G';
	targets[7] = 'H';
	targets[8] = 'I';
	targets[9] = 'J';


	cudaMemcpy(targets2, targets, size, cudaMemcpyHostToDevice);
	cudaMemcpy(result2, result, size, cudaMemcpyHostToDevice);

	compute<<<1,Blocksize>>>(targets2,result2);

	cudaMemcpy(result, result2, size, cudaMemcpyDeviceToHost);
	cudaMemcpy(targets, targets2, size, cudaMemcpyDeviceToHost);

	for (int i = 0; i < Blocksize; ++i)
	{
		printf("%c\t",targets[i]);
		printf("%c\n",result[i]);
	}
	cudaFree(targets2);
	cudaFree(result2);
	return 0;
}

__global__
void compute(char* target, char* result){
	__shared__ char solution[1];
	if (threadIdx.x == 0){
		solution[0] = 'D';
		result[threadIdx.x] = '-';
		__syncthreads();
	}
	else{
		if (target[threadIdx.x] == solution[0]){
			result[threadIdx.x] = '+';
		}
		else{
			result[threadIdx.x] = '-';
		}
		__syncthreads();
	}
}


__device__ __host__ 
void algorithm(char* input, char* result){
	//vorläufig
	result[0] = result[0];
}
