#include "gmock/gmock.h"
#include "similarity_checker.cpp"
#include <vector>

using namespace testing;

class BaseballFixture : public Test {
public:

};

TEST(SimilarityChecker, Length) {
	SimilarityChecker similarity;
	int result = 0;
	result = similarity.checkLength("ABCDE", "ABCDE");

	EXPECT_EQ(60, result);
}

TEST(SimilarityChecker, Length1) {
	SimilarityChecker similarity;
	int result = 0;
	result = similarity.checkLength("ABC", "ABCDE");

	EXPECT_EQ(20, result);
}

TEST(SimilarityChecker, Length2) {
	SimilarityChecker similarity;
	int result = 0;
	result = similarity.checkLength("ABCDE", "ABC");

	EXPECT_EQ(20, result);
}


int main() {
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
