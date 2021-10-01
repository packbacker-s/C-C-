#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int maxp = 50 + 7;
const int maxt = 1000000 + 7;
const int maxq = 10000 * maxp;
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
  char T[maxt];
  Trie *q[maxq];

void insert(Trie *root, char *s) {
  Trie *p = root;
  for(int i = 0; s[i] != '\0'; i++) {
    char c = s[i] - 'a';
    if(p -> next[c] == NULL) {
      p ->next[c] = new Trie;
    }
    p = p -> next[c];
  }
  p -> num++;
}
void build_ac_automation(Trie *root) {
  int head = 0, tail = 0;
  q[tail++] = root;
  while( head != tail) {
    Trie *temp = q[head++];
    for(int i = 0; i < 26; i++) {
      if(temp -> next[i] != NULL) {
        Trie *p = temp -> fail;
        while(p != NULL) {
          if(p -> next[i] != NULL) {
            temp -> next[i]-> fail = p-> next[i];
            break;
          }
          p = p -> fail;
        }
        if(p == NULL)
          temp -> next[i] -> fail = root;
        q[tail++] = temp -> next[i];
      }
    }
  }
}
int ac_find(Trie *root, char *T) {
  int ans = 0;
  Trie *p = root;
  for(int i = 0; len = strlen(T), i < len; i++) {
    char c = T[i] - 'a';
    while(p -> next[c] == NULL && p != root)
    p = p -> next[c];
    Trie * temp = p;
    while(temp != root && temp -> num != -1) {
      ans += temp -> num;
      temp -> num = -1;
      temp = temp -> fail;
    }
  }
  return ans;
}
int main() {

  return 0;
}
