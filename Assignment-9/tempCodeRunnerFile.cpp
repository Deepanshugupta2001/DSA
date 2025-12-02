#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to return all palindromic partitions of a given string
vector<vector<string>> partition(string s) {
        vector<vector<string>> f;
        vector<string> fs;
        
        int ans = 0; // O(N^2)
		bool dp[1005][1005] = {};

		for (int i = 0; i < s.size(); ++i)
		{
			dp[i][i] = true;
            string d;
            d=s[i];
            fs.push_back(d);
		}
        f.push_back(fs);
        for (int i = 0; i < fs.size(); i++)
        {
            fs.pop_back();
        }
        
		for (int i = 0; i < s.size() - 1; ++i)
		{
			if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                string d;
                d=s[i]+s[i+1];
                fs.push_back(d);
            }
		}
        f.push_back(fs);
        // fs="";
        for (int i = 0; i < fs.size(); i++)
        {
            fs.pop_back();
        }

		for (int k = 2; k < s.size(); ++k)
		{
			int i = 0, j = k;

			while (i < s.size() and j < s.size()) {
				if (s[i] == s[j] and dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    string d;
                    d=s[i]+s[j];
                    fs.push_back(d);
                }
				else dp[i][j] = false;

				i++;
				j++;
			}
		}
        f.push_back(fs);
        return f;
}

int main() {
    string s;
    getline(cin, s);
    
    vector<vector<string>> ans = partition(s);
    
    cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << "\"" << ans[i][j] << "\"";
            if (j != ans[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
        if (i != ans.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
    
    return 0;
}
