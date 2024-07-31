#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words{"Welcome", "To", "Miet", "For", "Intern", "To", "Intern"};
    vector<string> duplicate;
    for (size_t i = 1; i < words.size(); ++i)
    {
        string key = words[i];
        int j = i - 1;
        while (j >= 0 && words[j] > key)
        {
            words[j + 1] = words[j];
            --j;
        }
        words[j + 1] = key;
    }

    for (int i = 1; i < words.size(); i++)
    {
        if (words[i - 1] == words[i])
        {
            if (duplicate.empty())
            {
                duplicate.push_back(words[i]);
            }
            else if (words[i] != duplicate.back())
                duplicate.push_back(words[i]);
        }
    }
    if (duplicate.size() == 0)
    {
        cout << "No Duplicate Words" << endl;
    }
    else
    {
        for (int i = 0; i < duplicate.size(); i++)
        {
            cout << duplicate[i] << endl;
        }
    }
    return 0;
}

/*#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string x;
    getline(cin, x);

    stringstream obj(x);
    string temp;
    map<string, int> wordCount;
    while (obj >> temp) {
         wordCount[temp]++;
    }
    for (const auto& entry : wordCount) {
        cout << entry.first << " : " << entry.second << "   ";
    }
    return 0;
}*/

/*
#include<iostream>

#include<vector>

using namespace std;

int main()

{

  cout<<"Enter the string: "<<endl;

  string s;

  getline(cin, s);

  s+=" ";

  vector<string> v;

  string s1="";

  for(char i: s)

  {

    if(i!=' ')

    {

      s1+=i;

    }

    else{

      v.push_back(s1);

      s1="";

    }

  }



  for( auto i: v)

  {

    int count =0;

    v2.push_back(i);

    for(auto j:v)

    {

      if(i==j)

      {

        count ++;

      }

    }

    if(count>1)

    {

      cout<<i<<" : "<<count<<endl;

    }

  }

}
*/