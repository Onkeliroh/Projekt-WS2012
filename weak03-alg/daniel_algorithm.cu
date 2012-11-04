#include <mack/algorithms/daniel_algorithm.cuh>
#include <cuda_runtime.h>
#include <mack/algorithms/daniel_help.cuh>

namespace mack{

	__device__
	daniel_algorithm::daniel_algorithm()
	: _target_size(16)
	{}

	__device__ __host__
	void
	daniel_algorithm::compute_target(mack::core::canidate key_canidate, unsigned char* result) const
	{
		daniel_CTX	context;
		//unsigned char digest [16];

		daniel_init( &context );
		daniel_update ( &context, (void*)(key_canidate.value), key_canidate.length);
		daniel_final( result, &context );
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
	void
	daniel_algorithm::init(boost::program_options::variables_map const& options) { }

	__device__ __host__
	daniel_algorithm::~daniel_algorithm() { }

}

