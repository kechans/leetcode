#include<iostream>
#include<string>
#include<set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
			set<char> m;
			for(int i=0;i<s.size();i++){
				m.insert(s[i]);
				cout<<s[i]<<endl;
			}
			return m.size();
    }
};

int main()
{
	Solution ss;
	string s="abcabcbb";
	int res=ss.lengthOfLongestSubstring(s);
	cout<<res<<endl;
}
