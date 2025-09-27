#include<iostream>
#include<vector>
using namespace std;
class Solution {

  int returnFrequencySum(String s){
    vector<int> freq(26,0);
    for(char c : s) {
      freq(c - 'a')++;
  }
  int maxVowelFreq = 0;
  int maxConsonentFreq = 0;
  for(int i = 0; i < 26; i++) {
    if(freq[i] == 0) continue;
    char c = i + 'a';
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
      maxVowelFreq = max(maxVowelFreq, freq[i]);
    }
    else{
      maxConsonentFreq = max(maxConsonentFreq, freq[i]);
    }
  }
  return maxVowelFreq + maxConsonentFreq;
};

/*
Below is the question:
You have n tasks and m workers. Each task has a strength requirement stored in a 0-indexed integer array tasks, with the ith task requiring tasks[i] strength to complete. The strength of each worker is stored in a 0-indexed integer array workers, with the jth worker having workers[j] strength. Each worker can only be assigned to a single task and must have a strength greater than or equal to the task's strength requirement (i.e., workers[j] >= tasks[i]).

Additionally, you have pills magical pills that will increase a worker's strength by strength. You can decide which workers receive the magical pills, however, you may only give each worker at most one magical pill.

Given the 0-indexed integer arrays tasks and workers and the integers pills and strength, return the maximum number of tasks that can be completed.

*/
