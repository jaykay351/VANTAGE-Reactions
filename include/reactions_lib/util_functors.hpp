#ifndef REACTIONS_UTIL_FUNCTORS_H
#define REACTIONS_UTIL_FUNCTORS_H
#include "reactions/neso_particles_namespace_alias.hpp"

/**
 * @brief Stateless scalar operations for use inside custom kernels.
 *
 * Comparisons follow ordinary C++ conversion and floating-point rules. In
 * particular, equality is exact and comparisons do not apply a tolerance.
 * For example: LessThan{}(weight[0], REAL{1e-12}).
 */
namespace VANTAGE::Reactions::util_functors {

/** @brief Return whether lhs == rhs. */
struct EqualTo {
  template <typename T, typename U>
  constexpr bool operator()(const T &lhs, const U &rhs) const {
    return lhs == rhs;
  }
};

/** @brief Return whether lhs != rhs. */
struct NotEqualTo {
  template <typename T, typename U>
  constexpr bool operator()(const T &lhs, const U &rhs) const {
    return lhs != rhs;
  }
};

/** @brief Return whether lhs < rhs. */
struct LessThan {
  template <typename T, typename U>
  constexpr bool operator()(const T &lhs, const U &rhs) const {
    return lhs < rhs;
  }
};

/** @brief Return whether lhs <= rhs. */
struct LessThanOrEqualTo {
  template <typename T, typename U>
  constexpr bool operator()(const T &lhs, const U &rhs) const {
    return lhs <= rhs;
  }
};

/** @brief Return whether lhs > rhs. */
struct GreaterThan {
  template <typename T, typename U>
  constexpr bool operator()(const T &lhs, const U &rhs) const {
    return lhs > rhs;
  }
};

/** @brief Return whether lhs >= rhs. */
struct GreaterThanOrEqualTo {
  template <typename T, typename U>
  constexpr bool operator()(const T &lhs, const U &rhs) const {
    return lhs >= rhs;
  }
};

} // namespace VANTAGE::Reactions::util_functors

#endif
