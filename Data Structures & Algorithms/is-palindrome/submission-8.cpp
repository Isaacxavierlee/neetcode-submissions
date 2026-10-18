#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            // Skip non-letters and non-digits on the left
            if (!isalnum(s[left])) {
                left++;
                continue;
            }

            // Skip non-letters and non-digits on the right
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            // Compare characters without case sensitivity
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};