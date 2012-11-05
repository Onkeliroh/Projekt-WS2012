#include <mack/algorithms/daniel_algorithm.cuh>
#include <cuda_runtime.h>

namespace mack{

	__device__
	daniel_algorithm::daniel_algorithm()
	: _target_size(16)
	{}

	__device__ __host__
	void
	daniel_algorithm::compute_target(mack::core::canidate key_canidate, unsigned char* result) const
	{
		//hier arbeiten !!! 
		//unsigned char digest [16];
	 	result = static_cast<unsigned int>(key_canidate.
	}

	__device__ __host__
	unsigned int
	daniel_algorithm::get_target_size(size_t length) const
	{
		return _target_size;
	}

	__device__ __host__
	unsigned char*
	daniel_algorithm::get_name() const
	{
		return (unsigned char*)"Daniels Algorithmus";
	}

	__device__ __host__
	daniel_algorithm::~daniel_algorithm() { }
}

