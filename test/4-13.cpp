//
// Created by liu on 18-12-16.
//

#include <boost/test/unit_test.hpp>
#include <random>
#include <4-13.h>

BOOST_AUTO_TEST_SUITE(question)


BOOST_AUTO_TEST_CASE(question4_13) {
  static const char alpha_num[] =
      "0123456789"
      "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
      "abcdefghijklmnopqrstuvwxyz";
  std::random_device engine;
  std::uniform_int_distribution<int> random(0, static_cast<int>(strlen(alpha_num) - 1));
  char s1[100], s2[100];
  for (int i = 0; i < 10; ++i) {
    int len = random(engine);
    for (int j = 0; j < len; ++j) {
      s1[j] = alpha_num[random(engine)];
    }
    s1[len] = '\0';
    strcpy(s2, s1);
    revert(s1);
    std::reverse(s2, s2 + len);
    BOOST_CHECK_EQUAL(s1, s2);
  }
}

BOOST_AUTO_TEST_SUITE_END()