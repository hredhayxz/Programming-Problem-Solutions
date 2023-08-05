/// Ques link: https://leetcode.com/problems/valid-palindrome/


class Solution
{
private:
    bool checkValidChar(char c)
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
        {
            return true;
        }
        return false;
    }
    bool checkPalindrome(string a)
    {
        int s = 0;
        int e = a.size()-1;

        while(s<=e)
        {
            if(a[s]!=a[e])
            {
                return false;
            }
            else
            {
                s++;
                e--;
            }
        }
        return true;
    }
public:
    bool isPalindrome(string s)
    {
        string vs="";
        for(int i=0; i<s.size(); i++)
        {
            if(checkValidChar(s[i]))
            {
                vs.push_back(tolower(s[i]));
            }
        }
        return checkPalindrome(vs);
    }
};
