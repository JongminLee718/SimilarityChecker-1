#include <stdexcept>

using namespace std;


class SimilarityChecker {
public:
	int checkLength(const string &str1, const string &str2)
	{
		if (str1.size() > 2 * str2.size() || 2 * str1.size() < str2.size()) return MIN_LENGTH_SCORE;
		int gap = getLengthDifference(str1.size(), str2.size());
		int div = getDivisor(str1.size(), str2.size());
		int result = getLengthResult(gap, div);
		return result;
	}
private:
	const int MIN_LENGTH_SCORE = 0;
	const int MAX_LENGTH_SCORE = 60;
	int getLengthDifference(int length1, int length2) {
		int reuslt = (length1 > length2) ? length1 - length2 : length2 - length1;
		return reuslt * 100;
	}
	int getDivisor(int length1, int length2) { return (length1 > length2) ? length2 : length1; }
	int getLengthResult(int gap, int div)
	{
		int result;
		result = (100 - gap / div) * 60 / 100;
		return result;
	}

};