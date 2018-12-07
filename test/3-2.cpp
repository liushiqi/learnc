//
// Created by liu on 18-12-7.
//

#include <boost/test/unit_test.hpp>
#include <3-2.h>

BOOST_AUTO_TEST_SUITE(question)

BOOST_AUTO_TEST_CASE(question3_2) {
  char t[] = "0123456789qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM\n\t\v\b\r\f\a", mid[1000];
  char s[] = R"(0123456789qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM\n\t\v\b\r\f\a)";
  BOOST_CHECK(!strcmp(s, escape(mid, t)));
  BOOST_CHECK(!strcmp(t, deescape(mid, s)));
}

BOOST_AUTO_TEST_SUITE_END()
