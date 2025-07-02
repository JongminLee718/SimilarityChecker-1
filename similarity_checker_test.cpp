#include "gmock/gmock.h"
#include "similarity_checker.cpp"
#include <vector>

using namespace testing;

class SimilarityFixture : public Test {
public:
	SimilarityChecker similarity;
	void calculateLengthScore(const string &str1, const string& str2, int expected) {
		EXPECT_EQ(expected, similarity.checkLength(str1, str2));
	}
};

TEST_F(SimilarityFixture, Length) {
	calculateLengthScore("ABCDE", "ABCDE", 60);
	calculateLengthScore("ABC", "ABCDE", 20);
	calculateLengthScore("ABCDE", "ABC", 20);
	calculateLengthScore("A", "BB", 0);
}

int main() {
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
