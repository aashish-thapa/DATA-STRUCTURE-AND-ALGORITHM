#include<iostream>
#include <bits/stc++.h>
#include<vector>
#include<string>
using namespace std;

class Solution {

  public:
    vector<string> spellChecker (vector<string>& wordlist, vector<string>& queries) {

      auto toLower = [](const string& s) {
        string res = s;
        transform(res.begin(), res.end(), res.begin(), ::toLower);
        return res;
      };

      auto devowel = [&}(const string& s){
      string res = toLower(s);
      for(char& c : res){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') c = '*';
      }
      return res;
    };
    unordered_set<string> exactWords(wordlist.begin(), wordlist.end());
    unordered_map<string, string> caseMap;
    unordered_map<string, string> vowelMap;

    for (const string &word: wordlist) {
      string lw = toLower(word);
      if(!caseMap.count(lw)) caseMap[lw]  = word;
      string dv = devowel(word);
      if(!vowelMap.count(dv)) vowelMap[dv] = word;
    }

    vector<string> result;

    for (const string query: queries){
      if(exactWords.count(query)) {
        result.push_back(query);
      } else if (caseMap.count(toLower(query)) {
        result.pusb_back(caseMap[toLower(query)]);
      } else if (vowelMap.count(devowel(query)) {
        result.push_back(vowelMap[devowel(query)]);
      }
      else {
        result.push_back("");
      }
    }
    return result;
    }
};

