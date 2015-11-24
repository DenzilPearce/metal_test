#include "metal_test.h"

METAL_FIXTURE_DEFINE {};
METAL_SETUP {};
METAL_TEARDOWN {};

METAL_SUITE {
   METAL_TEST(passing_test){
      int test_value = 1;
      METAL_ASSERT(test_value);
   }

   METAL_TEST(failing_test) {
      int test_value = 0;
      METAL_ASSERT(test_value);
   }
};
