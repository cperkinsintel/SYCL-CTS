/*******************************************************************************
//
//  SYCL 2020 Conformance Test Suite
//
//  Provides tests for specialization constants defined in various ways for
//  double
//
*******************************************************************************/

#include "../common/common.h"
#include "../common/type_coverage.h"
#include "specialization_constants_defined_various_ways.h"

#define TEST_NAME specialization_constants_defined_various_ways_fp64

namespace TEST_NAMESPACE {
using namespace sycl_cts;

/** test specialization constants for double
 */
class TEST_NAME : public sycl_cts::util::test_base {
 public:
  /** return information about this test
   */
  void get_info(test_base::info &out) const override {
    set_test_info(out, TOSTRING(TEST_NAME), TEST_FILE);
  }

  /** execute the test
   */
  void run(util::logger &log) override {
    using namespace specialization_constants_defined_various_ways;
    sc_run_test_fp64<get_spec_const::sc_no_kernel_bundle>(log);
  }
};

// construction of this proxy will register the above test
util::test_proxy<TEST_NAME> proxy;

}  // namespace TEST_NAMESPACE
