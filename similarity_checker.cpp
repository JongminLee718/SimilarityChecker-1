#include <stdexcept>

using namespace std;


class SimilarityChecker {
public:
	int checkLength(const string &str1, const string &str2)
	{
		int result = 0;
		int lengthStr1 = str1.size();
		int lengthStr2 = str2.size();
		int gap, div;

		if (lengthStr1 > lengthStr2) {
			gap = (lengthStr1 - lengthStr2)*100;
			div = lengthStr2;
		}
		else {
			gap = (lengthStr2 - lengthStr1)*100;
			div = lengthStr1;
		}
		result = (100 - gap / div) * 60 / 100;

		return result;
	}

private:

};