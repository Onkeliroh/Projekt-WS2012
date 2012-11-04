#ifndef daniel_helper_CUH_
#define DANIEL_HELPER_CUH_

#include <cuda_runtime.h>

namespace mack{

#define PLAIN_LENGTH 50

typedef unsigned int daniel_u32plus;

typedef struct {
	daniel_u32plus lo, hi;
	daniel_u32plus a, b, c, d;
	unsigned char buffer[64];
	daniel_u23plus block[16];
} daniel_CTX;

__host__ __device__ int strlenDevice(char* str);
__host__ __device__ void daniel_init(daniel_CTX *ctx);
__host__ __device__ void* body(daniel_CTX *ctx, void *data, unsigned long size);
__host__ __device__ void daniel_update(daniel_CTX *ctx, void *data, unsigned long size);
__host__ __device__ void daniel_prefinal(daniel_CTX *ctx);
__host__ __device__ void daniel_final(unsigned char *result, daniel_CTX *ctx);

}

#endif /* DANIEL_HELPER_CUH_ */

