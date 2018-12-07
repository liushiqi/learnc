//
// Created by liu on 18-12-7.
//

#include <boost/test/unit_test.hpp>
#include <2-8.h>

BOOST_AUTO_TEST_SUITE(question)

BOOST_AUTO_TEST_CASE(question2_8) {
  BOOST_CHECK_EQUAL(rightroc(1898953881, 967), 853696377);
  BOOST_CHECK_EQUAL(rightroc(2101091063, 421), 3152666839);
  BOOST_CHECK_EQUAL(rightroc(554575643, 99), 1679934691);
  BOOST_CHECK_EQUAL(rightroc(1467547833, 677), 3401304069);
  BOOST_CHECK_EQUAL(rightroc(918385058, 22), 4123429082);
  BOOST_CHECK_EQUAL(rightroc(1304454110, 925), 1845698290);
  BOOST_CHECK_EQUAL(rightroc(1294956603, 700), 3539436468);
  BOOST_CHECK_EQUAL(rightroc(1074319887, 762), 36996048);
  BOOST_CHECK_EQUAL(rightroc(682479700, 904), 1411952080);
  BOOST_CHECK_EQUAL(rightroc(2081401524, 305), 3579461127);
}

BOOST_AUTO_TEST_SUITE_END()