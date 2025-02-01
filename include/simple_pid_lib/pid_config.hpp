// Copyright 2024 Akiro Harada
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SIMPLE_PID_LIB__PID_CONFIG_HPP_
#define SIMPLE_PID_LIB__PID_CONFIG_HPP_

namespace simple_pid_lib
{
struct PIDConfig
{
  PIDConfig(
    double k_p, double k_i, double k_d, double k_b, double n, double t, double output_min,
    double output_max)
  : k_p(k_p),
    k_i(k_i),
    k_d(k_d),
    k_b(k_b),
    n(n),
    t(t),
    output_min(output_min),
    output_max(output_max)
  {
  }
  double k_p, k_i, k_d, k_b, n, t;
  double output_min = -1e6;
  double output_max = 1e6;
};  // struct PIDConfig
}  // namespace simple_pid_lib

#endif  // SIMPLE_PID_LIB__PID_CONFIG_HPP_
