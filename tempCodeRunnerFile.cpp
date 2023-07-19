#include <iostream>
#include <string>
using namespace std;

string constructString(int countA, int countB)
{
    string result = "";
    if ((countA - countB) == 1)
    {
        while (countB)
        {
            result += "A";
            countA--;
            result += "B";
            countB--;
        }
    }
    else
    {
        while (countA > 0 || countB > 0)
        {
            if (countA - 1 > countB)
            {
                result += "A";
                countA--;
            }
            else if (countB > 0)
            {
                result += "B";
                countB--;
            }
            if (countA > countB)
            {
                result += "A";
                countA--;
            }
        }
    }
    return result;
}

int main()
{
    int A = 6;
    int B = 3;
    cout << "A=" << A << " and B=" << B << endl;
    string result = constructString(A, B);
    cout << "Constructed string: " << result << endl;
    return 0;
}
