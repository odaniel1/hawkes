#ifdef HAVE_OPENCL
#ifndef _OPENCL_INSTANTIATE_CPP
#define _OPENCL_INSTANTIATE_CPP

#include "OpenCLHawkes.hpp"

namespace hph {
//
// template class OpenCLMultiDimensionalScaling<float>;
// template class OpenCLMultiDimensionalScaling<double>;
//

// factory
    std::shared_ptr<AbstractHawkes>
    constructOpenCLHawkesDouble(int embeddingDimension, int locationCount, long flags, int device) {
        if (embeddingDimension <= 2) {
            return std::make_shared<OpenCLHawkes<OpenCLDouble<2>>>(embeddingDimension, locationCount,
                    flags, device);
        } else if (embeddingDimension <= 4) {
            return std::make_shared<OpenCLHawkes<OpenCLDouble<4>>>(embeddingDimension, locationCount,
                    flags, device);
        } else if (embeddingDimension <= 8) {
            return std::make_shared<OpenCLHawkes<OpenCLDouble<8>>>(embeddingDimension, locationCount,
                    flags, device);
        } else {
#ifdef RBUILD
            Rcpp::stop("Embedding dimension > 8!\n");
#else
            exit(-1);
#endif
        }
    }

    std::shared_ptr<AbstractHawkes>
    constructOpenCLHawkesFloat(int embeddingDimension, int locationCount, long flags, int device) {
        if (embeddingDimension <= 2) {
            return std::make_shared<OpenCLHawkes<OpenCLFloat<2>>>(embeddingDimension, locationCount,
                    flags, device);
        } else if (embeddingDimension <= 4) {
            return std::make_shared<OpenCLHawkes<OpenCLFloat<4>>>(embeddingDimension, locationCount,
                    flags, device);
        } else if (embeddingDimension <= 8) {
            return std::make_shared<OpenCLHawkes<OpenCLFloat<8>>>(embeddingDimension, locationCount,
                    flags, device);
        } else {
#ifdef RBUILD
            Rcpp::stop("Embedding dimension > 8!\n");
#else
            exit(-1);
#endif
        }
    }

} // namespace hph

#endif // _OPENCL_INSTANTIATE_CPP
#endif
