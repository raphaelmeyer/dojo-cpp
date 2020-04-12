#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include "code.h"

namespace
{

TEST_CASE("when ... then ...")
{
    CHECK(ns::answer() == 23);
    CHECK(ns::answer() != 42);
}

} // namespace
