#define _RESCLIB_SOURCE
#include <stdlib.h>
#undef _RESCLIB_SOURCE
#include <time.h>
#include "seatest.h"

static void test_clock (void)
{
    assert_true(CLK_TCK == CLOCKS_PER_SEC);
    assert_true(clock() >= -1);
}

static void test_gmtime_asctime (void)
{
    time_t timestamps[] = {
        -12219292800,
        0,
        1468110957
    };
    char timestamp_strings[][26] = {
        "Fri Oct 15  0: 0: 0 1582\n",
        "Thu Jan  1  0: 0: 0 1970\n",
        "Sun Jul 10  0:35:57 2016\n"
    };
    assert_int_equal(_countof(timestamps), _countof(timestamp_strings));
    for (size_t i = 0; i < _countof(timestamps); i++) {
        struct tm t;
        gmtime_s(&(timestamps[i]), &t);
        char buf[26];
        asctime_s(buf, sizeof(buf), &t);
        assert_string_equal(timestamp_strings[i], buf);
    }
}

void test_time (void)
{
    test_fixture_start();
    run_test(test_clock);
    run_test(test_gmtime_asctime);
    test_fixture_end();
}
