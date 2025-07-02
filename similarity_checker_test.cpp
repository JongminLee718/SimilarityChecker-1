#include "gmock/gmock.h"
#include "similarity_checker.cpp"
#include <vector>

using namespace testing;

class BaseballFixture : public Test {
public:

};

TEST(SimilarityChecker, tc1) {
	EXPECT_EQ(1, 1);
}

int main() {
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
