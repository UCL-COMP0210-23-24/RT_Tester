#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include "VectorUtils.hpp"
#include "Rendering.hpp"

using namespace Catch::Matchers;

TEST_CASE("Test dot products", "[Test Vector Maths]")
{
    using namespace VecUtils;
    vec3 v1{0,0,0};
    vec3 v2{1.0,2.0,1.0};

    REQUIRE(dot(v1, v2) == 0);
}