#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/cudnn_grid_sampler_ops.h>

namespace at {


// aten::cudnn_grid_sampler(Tensor self, Tensor grid) -> Tensor output
inline at::Tensor cudnn_grid_sampler(const at::Tensor & self, const at::Tensor & grid) {
    return at::_ops::cudnn_grid_sampler::call(self, grid);
}

// aten::cudnn_grid_sampler.out(Tensor self, Tensor grid, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cudnn_grid_sampler_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & grid) {
    return at::_ops::cudnn_grid_sampler_out::call(self, grid, out);
}
// aten::cudnn_grid_sampler.out(Tensor self, Tensor grid, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & cudnn_grid_sampler_outf(const at::Tensor & self, const at::Tensor & grid, at::Tensor & out) {
    return at::_ops::cudnn_grid_sampler_out::call(self, grid, out);
}

}