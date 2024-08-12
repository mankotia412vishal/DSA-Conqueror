#include <bits/stdc++.h>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char d)
    {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {

            children[i] = NULL;
        }
        isTerminal = false;
    }
};
void insertData(TrieNode *root,string word){
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode *child;

    if(root->children[index]!=NULL){
         child = root->children[index];

    }
    else{
        child=new TrieNode(ch);
        root->children[index]=child;

    }
// recursive call
    insertData(child, word.substr(1));
}
int main()
{
    TrieNode *root= new TrieNode('-');
    insertData(root,"coding");



    return 0;
}