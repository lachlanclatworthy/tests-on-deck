#include <gtest/gtest.h>
#include <vector>

// Basic assertions
TEST(HelloTest, BasicAssertions) {
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7 * 6, 42);
}

// Tests std::vector.size() and push_back()
TEST(HelloTest, VectorCheck) {
    using std::vector;
    vector<int> x, y;

    ASSERT_EQ(x.size(), y.size()) << "Vectors initialised with unequal length";

    // Fill a vector in place
    auto f = [](vector<int> &v, int max) {
        for (int i = 0; i < max; i++) {
            v.push_back(i);
        }
    };

    const int j = 20;

    f(x, j);
    f(y, j);

    ASSERT_EQ(x.size(), y.size())
        << "Vectors after fill are of different length";

    for (int i = 0; i < x.size(); i++) {
        EXPECT_EQ(x[i], y[i]);
    }

    // Uneven top up
    f(x, j);
    f(y, j + 1);

    ASSERT_NE(x.size(), y.size())
        << "Vectors filled by different amounts have same length";
}
