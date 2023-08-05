/// Ques link: https://www.codingninjas.com/studio/problems/replace-spaces_1172172


#include <bits/stdc++.h>
string replaceSpaces(string &str)
{
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]==' ')
        {
            str.replace(i,1,"@40");
        }
    }
    return str;
}
