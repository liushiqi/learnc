//
// Created by liu on 18-12-7.
//

#include <boost/test/unit_test.hpp>
#include <2-7.h>

BOOST_AUTO_TEST_SUITE(question)

BOOST_AUTO_TEST_CASE(question2_7) {
  BOOST_CHECK_EQUAL(invert(154010069, 2, 2), 154010067);
  BOOST_CHECK_EQUAL(invert(878480208, 25, 5), 935103312);
  BOOST_CHECK_EQUAL(invert(1497922964, 31, 22), 2797044116);
  BOOST_CHECK_EQUAL(invert(1730369003, 4, 0), 1730369003);
  BOOST_CHECK_EQUAL(invert(586885063, 26, 9), 621225927);
  BOOST_CHECK_EQUAL(invert(888136728, 28, 16), 722469912);
  BOOST_CHECK_EQUAL(invert(1361059796, 21, 17), 1361043508);
  BOOST_CHECK_EQUAL(invert(1655074823, 1, 0), 1655074823);
  BOOST_CHECK_EQUAL(invert(1126362432, 6, 4), 1126362424);
  BOOST_CHECK_EQUAL(invert(1443974493, 12, 7), 1443975837);
}

BOOST_AUTO_TEST_SUITE_END()