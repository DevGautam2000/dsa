#include "io/io.h"

class Solution
{
public:
	string addStrings(string num1, string num2)
	{
		//* TC: O(), SC: O()

		string res = "";

		int m = num1.size() - 1, n = num2.size() - 1;
		int carry = 0;

		while (m >= 0 || n >= 0 || carry > 0)
		{
			carry += (m >= 0) ? (num1[m--] - '0') : 0;
			carry += (n >= 0) ? (num2[n--] - '0') : 0;
			res = (char)(carry % 10 + '0') + res;
			carry = (carry / 10);
		}

		return res;
	}
} s;

int main()
{
	io(current_path());

	string num1 = "3876620623801494171", num2 = "6529364523802684779";
	cout << " Solution: " << s.addStrings(num1, num2) << endl;

	return 0;
}
