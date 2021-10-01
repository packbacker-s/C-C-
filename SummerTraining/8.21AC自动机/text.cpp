#include <iostream>
#include <cstdio>
using namespace std;
struct Trie {
  Trie *next[26];
  Trie *fail;
  int num;
  Trie() {
    for(int i = 0; i < 26; i++) {
      next[i] = NULL;
      fail = NULL;
      num = 0;
    }
  };
  char p[maxp];

}
