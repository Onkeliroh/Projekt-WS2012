#include <iostream>
#include <stdio.h>
#include "daniel_helper.cuh"
#include <stdio.h>

namespace mack{


	__host__ __device__ inst strlenDevice(char* str) {
		int i = 0;
		while(i <= PLAIN_LENGTH && str[i] != '\0')
			++i;
		return i;
	}


