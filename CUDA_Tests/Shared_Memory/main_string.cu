//compile with: nvcc -arch=sm_20 -lcudart
#include <stdio.h>
#include <string.h>

#define Blocksize 10

__global__ void compute(char*, char*);
__device__ __host__ void algorithm(char*, char*);
__device__ int cudaMemCmp(const char*, const char*, int);

__host__
int main (void)
{
	char	targets[100];
	char* targets2;
	char  result[100];
	char* result2;

	int size = Blocksize * sizeof(char);

  memset(targets, 0, 100);
	memset(result, 0, 100);

	//speicherreservieren
	cudaMalloc( &targets2, (size * 10));
	cudaMalloc( &result2, (size * 10));


	strcpy(targets + 0 * 10, "Baum"); 
	strcpy(targets + 1 * 10, "Haus"); 
	strcpy(targets + 2 * 10, "Daniel"); 
	strcpy(targets + 3 * 10, "Blubber"); 
	strcpy(targets + 4 * 10, "Tackle"); 
	strcpy(targets + 5 * 10, "Pokeball"); 
	strcpy(targets + 6 * 10, "Computer"); 
	strcpy(targets + 7 * 10, "Dingens"); 		
	strcpy(targets + 8 * 10, "Baum"); 
	strcpy(targets + 9 * 10, "Baum"); 


	cudaMemcpy(targets2, targets, 100, cudaMemcpyHostToDevice);
	cudaMemcpy(result2, result, 100, cudaMemcpyHostToDevice);

	compute<<<1,Blocksize>>>(targets2,result2);

	cudaMemcpy(result, result2, 10 *size, cudaMemcpyDeviceToHost);
	cudaMemcpy(targets, targets2, 10 * size, cudaMemcpyDeviceToHost);

	cudaFree(targets2);
	cudaFree(result2);

	return 0;
}

__global__
void compute(char* target, char* result){
	__shared__ char solution[10];
	if (threadIdx.x == 0){
		memcpy(solution, "p<82/.99", 8);
		result[Blocksize * threadIdx.x] = '-';
		__syncthreads();
	}
	else{
		algorithm((target + (Blocksize * threadIdx.x)), (result + Blocksize * threadIdx.x));
		if (cudaMemCmp((result + Blocksize * threadIdx.x), solution, Blocksize) == 1){
			printf("Found %s for %s\n",(result + Blocksize * threadIdx.x), (target + Blocksize * threadIdx.x));
		}
		else{
			printf("NOT Found %s for %s\n",(result + Blocksize * threadIdx.x), (target + Blocksize * threadIdx.x));//		*(result + Blocksize * threadIdx.x) = '!';
		}
		__syncthreads();
	}
}

__device__ __host__ 
void algorithm(char* input, char* result){
	for (int i = 0; i < Blocksize; ++i){
		if (((int)input[i] < 127) && ((int)input[i]>32))
			result[i] = input[i] % 83 +32;
		else
			break;
	}
}

__device__
int
cudaMemCmp(const char* left, const char* right, int length)
{
		int result = 1;
		while(result && (length > 0)){
		--length;
		result &= (left[length] == right[length]);
		}
		return result;
}
