#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

const int MOD = 1000000007;

vector<int> countUniqueSubsequences(const string &text)
{
    int N = text.length();

    // Create a 2-dimensional vector dp[][] to store the number of unique subsequences
    vector<vector<int> > dp(N + 1, vector<int>(N + 1, 0));

    // Create a vector to store the last occurrence index of each character
    vector<int> lastOccurrence(256, -1);

    // Base case: dp[i][0] = 1 (empty subsequence)
    for (int i = 0; i <= N; i++)
    {
        dp[i][0] = 1;
    }

    // Calculate the number of unique subsequences for each length
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;

            // Check if the character has occurred before
            if (lastOccurrence[text[i - 1]] != -1)
            {
                int prevIndex = lastOccurrence[text[i - 1]];
                dp[i][j] = (dp[i][j] - dp[prevIndex - 1][j - 1] + MOD) % MOD;
            }
        }

        // Update the last occurrence index of the character
        lastOccurrence[text[i - 1]] = i;
    }

    // Calculate the count of unique subsequences for each length
    vector<int> counts(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        counts[i] = dp[N][i];
    }

    return counts;
}

int main()
{
    string text = "hello";
    cout << "Input String: " << text << endl;
    int N = text.length();

    cout << "Number of unique subsequences of length 0 is 1" << endl;
    vector<int> uniqueSubsequenceCounts = countUniqueSubsequences(text);
    for (int i = 1; i <= N; i++)
    {
        cout << "Number of unique subsequences of length " << i << " is " << uniqueSubsequenceCounts[i] << endl;
    }

    return 0;
}
