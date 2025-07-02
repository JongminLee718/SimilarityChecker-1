#include <stdexcept>

using namespace std;


class SimilarityChecker {
public:
	int checkLength(const string &str1, const string &str2)
	{
		int gap = getLengthDifference(str1.size(), str2.size());
		int div = getDivisor(str1.size(), str2.size());
		int result = getLengthResult(gap, div);
		return result;
	}
private:
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