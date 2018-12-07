//
// Created by liu on 18-12-7.
//

#include <boost/test/unit_test.hpp>
#include <2-10.h>

BOOST_AUTO_TEST_SUITE(question)

BOOST_AUTO_TEST_CASE(question2_10) {
  BOOST_CHECK_EQUAL(lower('A'), 'a');
  BOOST_CHECK_EQUAL(lower('B'), 'b');
  BOOST_CHECK_EQUAL(lower('C'), 'c');
  BOOST_CHECK_EQUAL(lower('D'), 'd');
  BOOST_CHECK_EQUAL(lower('E'), 'e');
  BOOST_CHECK_EQUAL(lower('F'), 'f');
  BOOST_CHECK_EQUAL(lower('G'), 'g');
  BOOST_CHECK_EQUAL(lower('H'), 'h');
  BOOST_CHECK_EQUAL(lower('I'), 'i');
  BOOST_CHECK_EQUAL(lower('J'), 'j');
  BOOST_CHECK_EQUAL(lower('K'), 'k');
  BOOST_CHECK_EQUAL(lower('L'), 'l');
  BOOST_CHECK_EQUAL(lower('M'), 'm');
  BOOST_CHECK_EQUAL(lower('N'), 'n');
  BOOST_CHECK_EQUAL(lower('O'), 'o');
  BOOST_CHECK_EQUAL(lower('P'), 'p');
  BOOST_CHECK_EQUAL(lower('Q'), 'q');
  BOOST_CHECK_EQUAL(lower('R'), 'r');
  BOOST_CHECK_EQUAL(lower('S'), 's');
  BOOST_CHECK_EQUAL(lower('T'), 't');
  BOOST_CHECK_EQUAL(lower('U'), 'u');
  BOOST_CHECK_EQUAL(lower('V'), 'v');
  BOOST_CHECK_EQUAL(lower('W'), 'w');
  BOOST_CHECK_EQUAL(lower('X'), 'x');
  BOOST_CHECK_EQUAL(lower('Y'), 'y');
  BOOST_CHECK_EQUAL(lower('Z'), 'z');
}

BOOST_AUTO_TEST_SUITE_END()