#ifndef daniel_algorithm_hpp_
#define daniel_algorithm_hpp_

#include <mack/core/algorithm.cuh>
#include <boost/program_options.hpp>

namespace mack{

/**
 * @class Daniel_Algorithm
 * @is_of_type{algorithms}
 * @brief Der Daniel Algorithm
 * 
 * @author Daniel Pollack
 * @date 04.11.2012
 * @version 0.1 alpha
 */

class daniel_algorithm: public mack__core::Algorithm {

public:
	__device__
	daniel_algorithm();

	__device__ __host__
	void compute_target(mack::core::canidate key_canidate, unsigned char* reuslt)const;

	__device__ __host__
	unsigned int get_target_size(size_t length) const;

	__device__ __host__
	static void init(boost::program_options::variables_map const& options);

	__device__ __host__
	unsigned char* get_name() const;

	__device__ __host__
	~daniel_algorithm();

private:
	size_t _target_size;
};

}

#endif /* daniel_algorithm_HPP_ */

