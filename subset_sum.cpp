void subsetHelper(vector<int> &num, int i, int sum, vector<int> &ans)

{

    if (i == num.size())

    {

        ans.push_back(sum);

        return;

    }

    subsetHelper(num, i + 1, sum, ans);

    subsetHelper(num, i + 1, sum+num[i], ans);

}

 

vector<int> subsetSum(vector<int> &num){

// Write your code here.

vector<int> ans;

    subsetHelper(num, 0, 0, ans);

sort(ans.begin(), ans.end());

    return ans;

}