//
// Created by liu on 18-12-7.
//


#include <boost/test/unit_test.hpp>
#include <4-2.h>

BOOST_AUTO_TEST_SUITE(question)

BOOST_AUTO_TEST_CASE(question4_2, * boost::unit_test::tolerance(0.00001)) {
  BOOST_TEST(atof_my("423.078964") == 423.078964);
  BOOST_TEST(atof_my("1.540741e+2") == 154.074100);
  BOOST_TEST(atof_my("4.371646") == 4.371646);
  BOOST_TEST(atof_my("7.618215e+2") == 761.821500);
  BOOST_TEST(atof_my("915.593969") == 915.593969);
  BOOST_TEST(atof_my("1.534731e+2") == 153.473100);
  BOOST_TEST(atof_my("303.910059") == 303.910059);
  BOOST_TEST(atof_my("4.553827e+2") == 455.382700);
  BOOST_TEST(atof_my("497.438088") == 497.438088);
  BOOST_TEST(atof_my("9.673747e+2") == 967.374700);
  BOOST_TEST(atof_my("723.768979") == 723.768979);
  BOOST_TEST(atof_my("6.789452e+2") == 678.945200);
  BOOST_TEST(atof_my("709.269271") == 709.269271);
  BOOST_TEST(atof_my("1.675222e+2") == 167.522200);
  BOOST_TEST(atof_my("566.279369") == 566.279369);
  BOOST_TEST(atof_my("4.280868e+2") == 428.086800);
  BOOST_TEST(atof_my("384.473051") == 384.473051);
  BOOST_TEST(atof_my("9.291323e+2") == 929.132300);
  BOOST_TEST(atof_my("592.335128") == 592.335128);
  BOOST_TEST(atof_my("5.417463e+2") == 541.746300);
  BOOST_TEST(atof_my("589.899736") == 589.899736);
  BOOST_TEST(atof_my("8.957587e+2") == 895.758700);
  BOOST_TEST(atof_my("759.748735") == 759.748735);
  BOOST_TEST(atof_my("5.544496e+2") == 554.449600);
  BOOST_TEST(atof_my("694.990301") == 694.990301);
  BOOST_TEST(atof_my("7.953774e+2") == 795.377400);
  BOOST_TEST(atof_my("717.683918") == 717.683918);
  BOOST_TEST(atof_my("4.532050e+1") == 45.320500);
  BOOST_TEST(atof_my("672.057174") == 672.057174);
  BOOST_TEST(atof_my("4.098878e+2") == 409.887800);
}

BOOST_AUTO_TEST_SUITE_END()