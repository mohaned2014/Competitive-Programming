//10815 - Andy's First Dictionary

#include <bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string line;
    string word;
    set <string> s1;
    while( getline(cin,line))
    {
        stringstream stream(line);
        while(stream >>word)
        {
            for(int i=0;i<word.size();i++)
            {
                if(!isalpha(word[i]))
                {
                    if(i >0)
                    {
                        s1.insert(word.substr(0,i));
                        word = word.substr(i+1);
                        i=-1;
                    }
                    else
                    {
                        word.erase(i,1);
                        i--;
                    }
                    continue;
                }
                word[i] =tolower(word[i]);
            }
            if(word.size()>0)
                s1.insert(word);
        }

    }
    for(string x : s1)
    {
        cout<<x<<endl;
    }




}
