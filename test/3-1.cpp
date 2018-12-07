//
// Created by liu on 18-12-7.
//

#include <boost/test/unit_test.hpp>
#include <3-1.h>

BOOST_AUTO_TEST_SUITE(question)

BOOST_AUTO_TEST_CASE(question3_1) {
  int v[] = {3038155, 6882203, 9851282, 10755413, 14622176, 14637051, 17712389, 22452034, 24724295, 26342728, 30612763,
             31916263, 32813243, 34512699, 38872061, 40923162, 41058528, 41784523, 45310169, 51102469, 51842702,
             58983672, 59638200, 60154989, 60839235, 60999794, 62370769, 63730788, 69266226, 71413739, 74431384,
             75145570, 77373081, 79981277, 79981656, 80389322, 81000246, 84123707, 85271122, 90584890, 91286792,
             92617918, 96421614, 102557632, 104279499, 104883159, 108862412, 110691073, 117345091, 120476784, 121512460,
             123218127, 125910229, 126376930, 128557952, 129876636, 136573464, 138161456, 141437250, 142039387,
             148322818, 150562699, 150620884, 151779128, 152370713, 154205084, 155204140, 158916410, 159266328,
             159456627, 160242412, 160400134, 163342755, 165932961, 167101012, 167473421, 167733335, 168883399,
             169512939, 171305928, 173247490, 173665170, 175619570, 175897160, 177513836, 180922232, 181397906,
             181687687, 182205743, 188682645, 189461394, 192310477, 193487298, 195965292, 197276420, 198498430,
             204248677, 207063048, 207681919, 211057752, 211227445, 218944305, 220039498, 220700149, 221446486,
             226920094, 227608783, 227830836, 228226061, 228620961, 229788234, 229794312, 231692859, 232957039,
             240641957, 241736166, 243131591, 244495715, 245100710, 246696305, 248555102, 248885725, 256132243,
             260223740, 261154205, 262679132, 263020128, 267783751, 269685074, 270239454, 271645189, 273679041,
             276998550, 279893118, 280730343, 281765512, 282408886, 282804436, 286264864, 287079096, 289317385,
             289582781, 290574704, 290582038, 296396461, 298051818, 299900688, 301151225, 301341942, 302946501,
             306908636, 309012821, 309021736, 310672057, 311374600, 313129200, 313783965, 314377387, 315140568,
             319021346, 319045476, 324207286, 326005031, 326699092, 326757496, 328213339, 329684368, 336615067,
             343597983, 344992837, 346270512, 351200293, 352603848, 353215390, 354981976, 355331062, 355978090,
             356860986, 357154087, 357894701, 358268550, 361259729, 362443213, 365052872, 367305506, 369285531,
             370987768, 376334706, 376404509, 378815372, 379349113, 382467617, 384241007, 384904804, 387915340,
             388238058, 389674898, 389759883, 391072976, 391577826, 391742347, 391895012, 393249100, 397171066,
             398488227, 401020434, 406505528, 410702164, 411917314, 414555864, 415635751, 415885790, 417102838,
             419578649, 422978062, 428991592, 431715819, 432040176, 432321969, 434673489, 434699739, 435977302,
             436207444, 438604931, 439903053, 440488133, 441540453, 444028165, 447452128, 450897293, 452545881,
             461299410, 467856324, 472122061, 472261819, 474113966, 477578501, 478716813, 478991651, 481074650,
             481198911, 486770669, 488198838, 488929349, 491736401, 492431996, 493913848, 494450377, 494706665,
             495137545, 495190962, 495946324, 497393193, 497585100, 502683460, 505144616, 505975554, 508230502,
             509332597, 510864059, 511757900, 515230880, 519094752, 519989614, 521470231, 527420841, 530450598,
             531374685, 537054481, 537552315, 538017074, 542091019, 545501473, 546419288, 548355698, 549064247,
             551269637, 556465177, 560651057, 561326550, 562319974, 563559061, 566059711, 566510077, 566892943,
             573616149, 574807786, 576661476, 579148336, 580380095, 581084492, 582861621, 583653722, 584506652,
             585928228, 588310727, 593989099, 595815471, 596465477, 598468426, 599477489, 602919302, 603999301,
             608598518, 609703103, 611267105, 615876976, 620273544, 620456264, 620765685, 621565212, 622513120,
             631584330, 634326753, 634373337, 644074983, 644602595, 646822782, 647354543, 650516247, 651029667,
             651193822, 652159146, 654736172, 657876059, 658699131, 659596933, 663799968, 664894113, 670655930,
             670772841, 671020836, 674081096, 675165776, 676069272, 676615095, 676891358, 677149910, 679051815,
             685090492, 685425804, 685935474, 686155560, 687265982, 687662334, 692331840, 694183705, 698810553,
             700259520, 701709719, 704351296, 706523434, 707289550, 710640311, 714746912, 720456548, 721518004,
             722333647, 722538715, 722629587, 725286822, 725997705, 726134693, 726751685, 727389274, 727982559,
             732677982, 741874433, 745301345, 750469658, 757298009, 757442714, 758844326, 759461508, 763845969,
             769153085, 769496890, 771726210, 774140392, 774341819, 776298954, 781480933, 781942823, 788105201,
             789780799, 792858735, 801160714, 802094602, 805462469, 806216822, 808622961, 810566062, 812487520,
             815781252, 815977109, 818125043, 818448699, 821978552, 822198169, 824015085, 827948298, 828206780,
             828909532, 832377696, 834116558, 836193136, 838524374, 839457901, 840459807, 842049059, 842385323,
             843741055, 848627701, 849049313, 849832374, 851935430, 852216879, 852666224, 853529198, 856853753,
             858481595, 860755498, 861201597, 870512002, 874335081, 875879764, 879074677, 880453870, 881489161,
             884308230, 885343855, 887670661, 887915519, 902456105, 903968573, 904482017, 909436730, 911956763,
             915106108, 916109043, 916971870, 918883591, 919536821, 920142781, 923678749, 927178932, 927762106,
             927829898, 929094143, 930387061, 930495850, 930813163, 931647274, 933915904, 940685943, 945312942,
             945957197, 950113613, 951869746, 953226784, 953712852, 953941938, 955699467, 956039047, 960912667,
             963301397, 966574451, 967838969, 970024280, 971054557, 976441520, 977012580, 980581191, 982083852,
             983396100, 988936475, 989587539, 990030606, 990577390, 992438409, 992827284, 996486294, 996890652,
             996890854, 1000078650, 1003826899, 1006872522, 1006935605, 1013843735, 1014103438, 1016191950, 1016299910,
             1020627843, 1021083235, 1022457928, 1024519193, 1025498527, 1025504723, 1027975437, 1028950172, 1031860406,
             1036057601, 1036637874, 1039692892, 1040549777, 1042683780, 1043135479, 1043143822, 1044480545, 1045869807,
             1047239832, 1047882218, 1048369874, 1050028243, 1052989344, 1054762566, 1065440870, 1065954422, 1068619368,
             1078477877, 1080438751, 1080463488, 1090032761, 1096321968, 1096849389, 1100132013, 1101956090, 1104322317,
             1107797724, 1108111760, 1113827388, 1118591872, 1120874189, 1123673218, 1126254949, 1129872864, 1130666463,
             1132895381, 1134317570, 1135247735, 1136586960, 1136891223, 1138805127, 1141193340, 1146124492, 1147570865,
             1149145144, 1150537046, 1162479945, 1162988536, 1169725771, 1170432204, 1170863871, 1172564426, 1173400244,
             1178564032, 1178612091, 1180249432, 1180546488, 1184670122, 1187205273, 1189147753, 1190397922, 1193792406,
             1195079149, 1197343624, 1197701139, 1197993710, 1201338981, 1201769194, 1203610861, 1204917965, 1208253760,
             1213708541, 1215555273, 1215978537, 1216513084, 1222833175, 1223763342, 1228737899, 1228854285, 1229961735,
             1233742267, 1241690717, 1242872909, 1244506985, 1244852653, 1245175982, 1246444824, 1247396290, 1250309222,
             1256537147, 1257333020, 1263840426, 1266395227, 1276233071, 1277675009, 1278041109, 1278933214, 1279034034,
             1281037018, 1281925638, 1282399279, 1283104104, 1288228886, 1288990415, 1290538403, 1293570824, 1294083115,
             1294748440, 1295655500, 1299180703, 1300484042, 1302669586, 1304092535, 1304531530, 1311119910, 1311189727,
             1312148624, 1314040832, 1314399787, 1316669549, 1320529355, 1321026589, 1322203117, 1322584803, 1322895332,
             1325096512, 1326959561, 1330881033, 1334512292, 1335757190, 1337416680, 1338108181, 1340565015, 1340932902,
             1344180583, 1353487361, 1362481464, 1363959141, 1366884202, 1367743273, 1372325957, 1374198960, 1381827938,
             1382269894, 1386964378, 1387638765, 1388611308, 1391725094, 1391899831, 1393895793, 1394803609, 1397924100,
             1405951959, 1406188911, 1407619153, 1409873828, 1415880721, 1417083717, 1417635742, 1418925407, 1421508509,
             1422763278, 1423547035, 1423937445, 1425054977, 1425221561, 1425937490, 1427463957, 1428762635, 1429464546,
             1429562688, 1430511953, 1432194892, 1433602344, 1443359390, 1445726967, 1446057852, 1450474149, 1453059155,
             1454738689, 1455615294, 1455769732, 1457197936, 1459085959, 1462120449, 1464008026, 1464836077, 1470256421,
             1470377373, 1473556077, 1473754792, 1474247524, 1476545325, 1477943747, 1477952609, 1478456074, 1478912355,
             1481263987, 1482541928, 1492127679, 1496168220, 1500747695, 1503163838, 1504175902, 1504949292, 1509625239,
             1509972499, 1510054816, 1510437858, 1510497797, 1515392666, 1518559579, 1523435549, 1529300016, 1530731389,
             1531172409, 1531937832, 1543582721, 1544870826, 1548449751, 1548860755, 1550153488, 1551912601, 1553729339,
             1554374053, 1558673272, 1559705788, 1560710113, 1561753191, 1563768002, 1565267308, 1567212618, 1569986489,
             1570107424, 1570753047, 1571483267, 1571500429, 1571961129, 1573643625, 1574729743, 1575060002, 1576988444,
             1577147278, 1579225168, 1586154558, 1587544773, 1588607438, 1590786348, 1591147614, 1591485382, 1600289040,
             1600538988, 1611301319, 1611519790, 1614485282, 1621413345, 1621720515, 1625203224, 1625513992, 1631312349,
             1640740403, 1644548764, 1644655425, 1645609475, 1646452746, 1650029623, 1654547300, 1655696573, 1658234171,
             1661812442, 1662103033, 1662670958, 1663330804, 1663558501, 1664925051, 1665386526, 1665757182, 1669692942,
             1670101863, 1672748140, 1674311229, 1677217888, 1684536450, 1684717526, 1690130201, 1691322451, 1691710190,
             1691971786, 1692526896, 1697259371, 1700377206, 1700788312, 1701448975, 1709242270, 1709431894, 1711396380,
             1712070462, 1712540274, 1714749918, 1717040485, 1719848070, 1722112020, 1722385607, 1722584760, 1723834446,
             1726839989, 1726914859, 1727167600, 1728111313, 1731243204, 1733052236, 1733104954, 1734625913, 1735901328,
             1737273950, 1737612389, 1740745813, 1741132550, 1741249993, 1741636566, 1744810008, 1745741234, 1751729346,
             1763456299, 1764044978, 1764969540, 1767997825, 1777472372, 1780342579, 1781712057, 1782492147, 1784664433,
             1784854713, 1784934480, 1786940744, 1791384683, 1792324115, 1792353530, 1795820146, 1801428406, 1805515145,
             1812875257, 1814781101, 1817123535, 1817314921, 1818932898, 1820223251, 1825924737, 1833563293, 1834852941,
             1834868489, 1839100513, 1839888079, 1840714734, 1843008159, 1849264193, 1850430930, 1850467710, 1852383531,
             1854177781, 1855218182, 1857188855, 1857239659, 1858828484, 1860720007, 1861423134, 1863934017, 1864486635,
             1868570690, 1869191698, 1869391130, 1870647947, 1871564758, 1872203789, 1874457226, 1878134999, 1887225001,
             1888611146, 1894229708, 1897615670, 1900635922, 1901869942, 1902879318, 1903528498, 1912356997, 1921077639,
             1921517997, 1925567769, 1926588178, 1929146785, 1930125851, 1932386701, 1936566105, 1937787888, 1939117539,
             1941330894, 1945120208, 1947417948, 1947530342, 1949296413, 1951612043, 1953494385, 1956579837, 1957086479,
             1961956693, 1962329590, 1962694406, 1967183451, 1967981324, 1968055671, 1968804315, 1968885257, 1972753785,
             1973248439, 1974682278, 1981949660, 1983486668, 1983941762, 1985034646, 1985678992, 1986692257, 1987713345,
             1988971962, 1995275435, 1998160369, 2002967650, 2006047187, 2007221723, 2010518501, 2023991082, 2025673294,
             2025719890, 2028485604, 2029906470, 2032629977, 2037746336, 2037987499, 2039281546, 2039921657, 2040346805,
             2040806705, 2041367419, 2042095417, 2044446654, 2044554443, 2048695361, 2049742399, 2052912182, 2053753196,
             2055933594, 2056512065, 2057353614, 2057529515, 2058057818, 2058458112, 2059533849, 2062105511, 2068374487,
             2072181671, 2073911671, 2074690878, 2074728185, 2076944147, 2081108395, 2081611758, 2083656046, 2084266702,
             2088710039, 2095018607, 2095115611, 2095702568, 2096797176, 2097479394, 2104692273, 2105291428, 2105850453,
             2108715934, 2109291466, 2113741071, 2113793682, 2119470828, 2121205329, 2123648781, 2126063838, 2130182866,
             2130372645, 2133200096, 2133650586, 2133952635, 2135842657, 2136711966, 2137022771, 2137494213, 2138703618,
             2141182896, 2145877509, 2146103082, 2146172564,};
  BOOST_CHECK_EQUAL(binsearch(1446057852, v, 1000), 678);
  BOOST_CHECK_EQUAL(binsearch(2006376163, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(1170432204, v, 1000), 551);
  BOOST_CHECK_EQUAL(binsearch(1269865911, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(650516247, v, 1000), 319);
  BOOST_CHECK_EQUAL(binsearch(1743254822, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(685935474, v, 1000), 341);
  BOOST_CHECK_EQUAL(binsearch(1719692053, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(1722584760, v, 1000), 805);
  BOOST_CHECK_EQUAL(binsearch(818652629, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(953941938, v, 1000), 461);
  BOOST_CHECK_EQUAL(binsearch(806460219, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(1090032761, v, 1000), 522);
  BOOST_CHECK_EQUAL(binsearch(59455844, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(2023991082, v, 1000), 931);
  BOOST_CHECK_EQUAL(binsearch(1144840162, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(1717040485, v, 1000), 801);
  BOOST_CHECK_EQUAL(binsearch(845522238, v, 1000), -1);
  BOOST_CHECK_EQUAL(binsearch(51102469, v, 1000), 19);
  BOOST_CHECK_EQUAL(binsearch(1238815694, v, 1000), -1);
}

BOOST_AUTO_TEST_SUITE_END()