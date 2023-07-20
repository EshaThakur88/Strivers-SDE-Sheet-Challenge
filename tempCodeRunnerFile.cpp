#include <iostream>
#include <string>
#include <algorithm> // For std::sort
using namespace std;

class Problem
{
public:
    string solver(const string &jumbledDigits)
    {
        int fmap[27] = {0};
        for (char x : jumbledDigits)
        {
            fmap[x - 'a']++;
        }
        string result = "";

        // numerals which have unique character in them
        // ZERO, TWO, FOUR, SIX, EIGHT
        while (fmap['z' - 'a']-- != 0)
        {
            fmap['e' - 'a']--;
            fmap['r' - 'a']--;
            fmap['o' - 'a']--;
            result += '0';
        }
        while (fmap['w' - 'a']-- != 0)
        {
            fmap['t' - 'a']--;
            fmap['o' - 'a']--;
            result += '2';
        }
        while (fmap['u' - 'a']-- != 0)
        {
            fmap['f' - 'a']--;
            fmap['o' - 'a']--;
            fmap['r' - 'a']--;
            result += '4';
        }
        while (fmap['x' - 'a']-- != 0)
        {
            fmap['s' - 'a']--;
            fmap['i' - 'a']--;
            result += '6';
        }
        while (fmap['g' - 'a']-- != 0)
        {
            fmap['e' - 'a']--;
            fmap['i' - 'a']--;
            fmap['h' - 'a']--;
            fmap['t' - 'a']--;
            result += '8';
        }

        // Numerals which do not have any unique character in them but common characters only
        // ONE, THREE, FIVE, SEVEN, NINE
        while (fmap['o' - 'a']-- != 0)
        {
            fmap['e' - 'a']--;
            fmap['n' - 'a']--;
            result += '1';
        }
        while (fmap['t' - 'a']-- != 0)
        {
            fmap['e' - 'a'] -= 2;
            fmap['h' - 'a']--;
            fmap['r' - 'a']--;
            result += '3';
        }
        while (fmap['f' - 'a']-- != 0)
        {
            fmap['e' - 'a']--;
            fmap['i' - 'a']--;
            fmap['v' - 'a']--;
            result += '5';
        }
        while (fmap['s' - 'a']-- != 0)
        {
            fmap['e' - 'a'] -= 2;
            fmap['n' - 'a']--;
            fmap['v' - 'a']--;
            result += '7';
        }
        while (fmap['i' - 'a']-- != 0)
        {
            fmap['n' - 'a'] -= 2;
            fmap['e' - 'a']--;
            result += '9';
        }
        return result;
    }
};

int main()
{
    Problem solution;
    string jumbledDigits = "ixsenorozeneo";

    // Print the Jumbled String
    cout << "Jumbled String: " << jumbledDigits << endl;

    string result = solution.solver(jumbledDigits);
    sort(result.begin(), result.end()); // Sort the characters in the result
    // Print the result
    cout << "Unjumbled and Ordered String: " << result;

    return 0;
}
