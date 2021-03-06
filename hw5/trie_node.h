// Wenlu Cheng, HW 5, CSE 374
// This is the header file for the trie, which defines the struct node

#ifndef TRIE_NODE_H
#define TRIE_NODE_H

// single node on the trie, has list of its child and wordlist
struct node {
    struct node* list[8];
    struct wordList* res_word;
};

// wordlist has a word and a list of words that have same digit input
struct wordList {
    char* str;
    struct wordList* next;
};

struct node* create_root();
void freeTrie(struct node* root);
void freeWordList(struct wordList* res_word);
void create_trie(char* word, struct node* root);
struct wordList* newStr(char* text);
#endif
