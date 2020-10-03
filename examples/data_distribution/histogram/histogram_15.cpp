#include <cmath>
#include <matplot/matplot.h>
#include <vector>

std::vector<int> n_stars();

int main() {
    using namespace matplot;

    auto ax_1 = axes();
    auto ax_2 = axes({0.4, 0.4, 0.45, 0.45});

    std::vector<int> stars = n_stars();

    axes(ax_1);
    hist(stars);
    xlabel("Stars");
    ylabel("Repositories");
    title(num2str(stars.size()) + " Most Popular C++ Repositories");

    axes(ax_2);
    title(num2str(size_t(stars.size() * 0.1)) + " to " + num2str(stars.size()) +
          " Most Popular C++ Repositories");
    stars.erase(stars.begin(), stars.begin() + stars.size() * 0.1);
    hist(stars);

    show();
    return 0;
}

std::vector<int> n_stars() {
    return std::vector<int>{
        148679, 85962, 68056, 53565, 48484, 45219, 43848, 42440, 37433, 35587,
        33400,  30872, 27882, 27641, 24055, 21753, 21510, 20971, 20384, 20216,
        19824,  19637, 18628, 17791, 17724, 17202, 17182, 17058, 16665, 16660,
        16067,  16032, 15632, 15211, 15088, 14824, 14822, 14728, 14674, 14620,
        14273,  13844, 13780, 13724, 13597, 13150, 13076, 13014, 12822, 12649,
        12428,  12335, 12242, 12160, 12110, 11872, 11864, 11838, 11787, 11561,
        11497,  11260, 11199, 10993, 10697, 10585, 10397, 10311, 10231, 10180,
        10085,  10038, 9877,  9738,  9690,  9611,  9466,  9447,  9434,  9357,
        9328,   9290,  9247,  9141,  8889,  8868,  8675,  8656,  8501,  8474,
        8371,   8333,  8327,  8312,  8250,  8190,  8188,  8154,  8033,  7984,
        8868,   8703,  8675,  8656,  8501,  8474,  8371,  8364,  8333,  8327,
        8312,   8250,  8211,  8190,  8188,  8154,  8033,  7984,  7967,  7928,
        7859,   7830,  7773,  7745,  7665,  7663,  7585,  7523,  7506,  7427,
        7401,   7388,  7376,  7372,  7280,  7232,  7227,  7104,  7060,  7002,
        6939,   6922,  6900,  6899,  6810,  6805,  6757,  6711,  6672,  6653,
        6411,   6406,  6354,  6305,  6294,  6229,  6225,  6216,  6160,  6069,
        6066,   6039,  6033,  6023,  5981,  5980,  5962,  5857,  5838,  5833,
        5800,   5769,  5736,  5725,  5697,  5676,  5663,  5642,  5625,  5580,
        5542,   5522,  5512,  5503,  5485,  5480,  5478,  5473,  5468,  5444,
        5395,   5390,  5327,  5255,  5250,  5227,  5203,  5176,  5156,  5151,
        4975,   4949,  4945,  4897,  4884,  4859,  4841,  4834,  4776,  4767,
        4765,   4756,  4739,  4736,  4727,  4704,  4686,  4668,  4666,  4644,
        4623,   4609,  4579,  4540,  4478,  4474,  4442,  4413,  4409,  4398,
        4382,   4367,  4315,  4276,  4271,  4257,  4238,  4228,  4224,  4220,
        4169,   4162,  4151,  4150,  4150,  4150,  4144,  4143,  4126,  4114,
        4088,   4085,  4077,  4043,  4028,  4017,  4013,  4011,  4008,  3997,
        3979,   3963,  3955,  3936,  3934,  3925,  3923,  3889,  3883,  3871,
        3859,   3831,  3824,  3814,  3809,  3805,  3754,  3717,  3709,  3704,
        3701,   3701,  3696,  3686,  3682,  3644,  3640,  3636,  3628,  3625,
        3601,   3587,  3558,  3531,  3523,  3516,  3508,  3508,  3508,  3503,
        3705,   3701,  3696,  3686,  3682,  3644,  3641,  3636,  3628,  3625,
        3601,   3587,  3558,  3531,  3528,  3523,  3516,  3508,  3508,  3508,
        3503,   3493,  3487,  3469,  3466,  3464,  3443,  3437,  3431,  3426,
        3417,   3393,  3389,  3364,  3364,  3361,  3359,  3350,  3342,  3332,
        3330,   3324,  3319,  3313,  3305,  3288,  3288,  3268,  3261,  3259,
        3239,   3228,  3224,  3221,  3203,  3200,  3189,  3187,  3183,  3180,
        3176,   3168,  3163,  3150,  3134,  3127,  3123,  3122,  3099,  3088,
        3080,   3079,  3076,  3072,  3068,  3039,  3036,  3019,  3017,  3010,
        2996,   2996,  2988,  2984,  2975,  2965,  2958,  2943,  2937,  2937,
        2926,   2920,  2913,  2896,  2884,  2882,  2871,  2867,  2867,  2849,
        2844,   2841,  2836,  2835,  2828,  2822,  2819,  2814,  2809,  2808,
        2795,   2792,  2787,  2784,  2778,  2774,  2773,  2772,  2770,  2762,
        2763,   2760,  2758,  2750,  2748,  2747,  2745,  2726,  2720,  2719,
        2699,   2693,  2690,  2673,  2671,  2668,  2652,  2651,  2649,  2647,
        2646,   2637,  2636,  2629,  2626,  2619,  2618,  2618,  2618,  2603,
        2600,   2588,  2563,  2560,  2558,  2542,  2538,  2538,  2529,  2528,
        2519,   2517,  2516,  2514,  2506,  2501,  2500,  2499,  2499,  2497,
        2488,   2485,  2483,  2482,  2473,  2446,  2437,  2427,  2424,  2413,
        2405,   2404,  2403,  2402,  2395,  2386,  2379,  2377,  2374,  2369,
        2367,   2362,  2360,  2358,  2355,  2355,  2353,  2347,  2341,  2338,
        2198,   2197,  2196,  2190,  2190,  2190,  2189,  2188,  2186,  2185,
        2182,   2178,  2176,  2172,  2169,  2166,  2162,  2161,  2154,  2153,
        2149,   2149,  2146,  2137,  2136,  2121,  2117,  2116,  2111,  2106,
        2106,   2104,  2103,  2100,  2099,  2098,  2094,  2093,  2087,  2084,
        2081,   2078,  2078,  2065,  2065,  2065,  2064,  2064,  2056,  2054,
        2050,   2043,  2042,  2038,  2024,  2018,  2010,  2008,  2006,  2001,
        1993,   1992,  1989,  1986,  1980,  1978,  1975,  1963,  1960,  1956,
        1951,   1950,  1948,  1946,  1940,  1937,  1935,  1932,  1929,  1927,
        1914,   1914,  1913,  1910,  1909,  1904,  1899,  1898,  1897,  1889,
        1886,   1880,  1874,  1874,  1866,  1865,  1862,  1860,  1858,  1854,
        1956,   1956,  1951,  1950,  1948,  1946,  1940,  1936,  1937,  1935,
        1932,   1929,  1927,  1914,  1914,  1913,  1910,  1909,  1904,  1899,
        1898,   1897,  1892,  1889,  1886,  1886,  1880,  1874,  1874,  1866,
        1865,   1862,  1860,  1858,  1854,  1851,  1848,  1847,  1847,  1844,
        1844,   1842,  1840,  1839,  1839,  1826,  1823,  1821,  1821,  1815,
        1813,   1805,  1801,  1798,  1797,  1796,  1788,  1786,  1784,  1783,
        1781,   1779,  1779,  1775,  1772,  1771,  1768,  1767,  1761,  1748,
        1745,   1746,  1739,  1739,  1736,  1736,  1732,  1730,  1724,  1724,
        1723,   1720,  1720,  1716,  1706,  1705,  1704,  1704,  1703,  1701,
        1700,   1695,  1694,  1693,  1687,  1684,  1683,  1683,  1683,  1682,
        1682,   1680,  1675,  1675,  1675,  1675,  1674,  1674,  1674,  1670,
        1669,   1665,  1664,  1658,  1658,  1657,  1655,  1651,  1650,  1649,
        1648,   1648,  1647,  1647,  1647,  1645,  1640,  1640,  1639,  1637,
        1632,   1630,  1630,  1627,  1624,  1624,  1620,  1620,  1616,  1614,
        1613,   1613,  1612,  1612,  1611,  1610,  1610,  1609,  1608,  1607,
        1606,   1606,  1604,  1604,  1602,  1602,  1601,  1599,  1598,  1597,
        1595,   1594,  1592,  1591,  1589,  1585,  1578,  1576,  1575,  1574,
        1574,   1569,  1569,  1568,  1567,  1567,  1567,  1566,  1565,  1563,
        1557,   1555,  1555,  1553,  1547,  1544,  1543,  1542,  1541,  1532,
        1530,   1529,  1528,  1527,  1525,  1523,  1519,  1515,  1515,  1514,
        1351,   1350,  1349,  1349,  1348,  1347,  1345,  1332,  1327,  1326,
        1323,   1323,  1322,  1321,  1319,  1319,  1317,  1317,  1315,  1314,
        1314,   1313,  1312,  1312,  1309,  1309,  1309,  1307,  1306,  1305,
        1305,   1304,  1303,  1303,  1302,  1300,  1299,  1299,  1299,  1297,
        1297,   1296,  1292,  1292,  1291,  1286,  1284,  1284,  1283,  1280,
        1279,   1278,  1278,  1277,  1276,  1276,  1273,  1273,  1267,  1266,
        1265,   1264,  1264,  1263,  1260,  1259,  1259,  1259,  1258,  1254,
        1253,   1250,  1250,  1248,  1247,  1246,  1244,  1241,  1240,  1240,
        1239,   1239,  1239,  1238,  1238,  1235,  1235,  1234,  1234,  1233,
        1232,   1232,  1229,  1228,  1228,  1225,  1220,  1218,  1217,  1211,
        1348,   1347,  1345,  1336,  1332,  1327,  1327,  1326,  1324,  1323,
        1323,   1322,  1321,  1319,  1319,  1317,  1317,  1315,  1315,  1314,
        1313,   1312,  1312,  1309,  1309,  1309,  1307,  1306,  1306,  1305,
        1305,   1304,  1303,  1303,  1302,  1301,  1299,  1299,  1299,  1298,
        1297,   1297,  1296,  1292,  1292,  1291,  1287,  1284,  1284,  1283,
        1281,   1280,  1280,  1280,  1278,  1278,  1278,  1276,  1276,  1273,
        1273,   1267,  1267,  1265,  1264,  1264,  1263,  1260,  1259,  1259,
        1259,   1258,  1254,  1253,  1251,  1251,  1250,  1248,  1247,  1246,
        1244,   1241,  1240,  1240,  1239,  1239,  1239,  1238,  1238,  1236,
        1235,   1235,  1234,  1234,  1234,  1233,  1232,  1232,  1229};
}