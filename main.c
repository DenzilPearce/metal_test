#include "metal_test.h"

METAL_FIXTURE_DEFINE {
   unsigned int fixture_element;
};

METAL_FIXTURE_SETUP {
   METAL_FIXTURE.fixture_element = 7;
};

METAL_FIXTURE_TEARDOWN {};

METAL_SUITE {
   METAL_TEST(simple_test) {
      int test_value = 5;
      METAL_ASSERT(test_value);
   };
};

