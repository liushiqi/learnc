//
// Created by liu on 18-12-16.
//

#include <boost/test/unit_test.hpp>
#include <random>
#include <4-12.h>

BOOST_AUTO_TEST_SUITE(question)

BOOST_AUTO_TEST_CASE(question4_12) {
  std::random_device engine;
  std::uniform_int_distribution<int> random(std::numeric_limits<int>::min());
  char s1[100];
  for (int i = 0; i < 10; ++i) {
    int rand = random(engine);
    itoa(rand, s1);
    BOOST_CHECK_EQUAL(std::string(s1), std::to_string(rand));
  }
}

BOOST_AUTO_TEST_SUITE_END()