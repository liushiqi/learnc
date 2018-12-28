//
// Created by liu on 18-12-28.
//

#include <boost/test/unit_test.hpp>
#include <random>
#include <5-4.h>

BOOST_AUTO_TEST_SUITE(question)

BOOST_AUTO_TEST_CASE(question5_4) {
  static const char alpha_num[] =
      "00123456789"
      "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
      "abcdefghijklmnopqrstuvwxyz";
  std::random_device engine;
  std::uniform_int_distribution<int> random(1, static_cast<int>(strlen(alpha_num) - 1));
  char s1[100], s2[200], s3[200];
  for (int i = 0; i < 10; ++i) {
    int len1 = random(engine), len2 = random(engine);
    for (int j = 0; j < len1; ++j) {
      s1[j] = alpha_num[random(engine)];
    }
    s1[len1] = '\0';
    for (int j = 0; j < len2; ++j) {
      s2[j] = s3[j] = alpha_num[random(engine)];
    }
    s2[len2] = s3[len2] = '\0';
    strcat(s3, s1);
    BOOST_CHECK_EQUAL(strend(s2, s1), strcmp(s2 + len2 - len1, s1) == 0);
    BOOST_CHECK_EQUAL(strend(s3, s1), strcmp(s3 + len2, s1) == 0);
  }
}

BOOST_AUTO_TEST_SUITE_END()