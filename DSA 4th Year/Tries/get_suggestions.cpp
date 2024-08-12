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

        this->isTerminal = false;
    }
};

void insertWord(TrieNode *root, string word)
{
    // base case
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }
    char ch = word[0];

    int index = ch - 'a';
    TrieNode *child;
    // present
    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        // not present
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    // recursive call
    insertWord(child, word.substr(1));
}

bool searchWord(TrieNode *root, string word)
{

    if (word.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;
    // present
    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        return false;
    }
    // rec calll
    return searchWord(child, word.substr(1));
}
void storeSuggestipns(TrieNode *curr, vector<string> &temp, string &prefix)
{
    if (curr->isTerminal)
    {
        temp.push_back(prefix);
    }
    // a- z tak choices de do

   
   for(char  ch='a';ch<='z';ch++){
        int index=ch-'a';
        TrieNode *next=curr->children[index];
        if(next!=NULL){
            // if child exists
            prefix.push_back(ch);
            storeSuggestipns(next,temp,prefix);
            prefix.pop_back();
        }
   }
}
vector<vector<string>> getSuugestions(TrieNode *root, string Input_Data)
{

    vector<vector<string>> ouput;
    string prefix = "";

    TrieNode *prev = root;

    for (int i = 0; i < Input_Data.size(); i++)
    {
        char lastCh = Input_Data[i];
        int index = lastCh - 'a';
        TrieNode *curr = prev->children[index];
        if (curr == NULL)
        {
            break;
        }
        else
        {
            vector<string> temp; // iske ander mein saare saare suggestions store karke lauga
            prefix.push_back(lastCh);
            storeSuggestipns(curr, temp, prefix);
            ouput.push_back(temp);
            prev = curr;
        }
    }
    return ouput;
}
int main()
{

    vector<string> v;
    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("last");
    v.push_back("lost");
    v.push_back("lane");
    v.push_back("lord");

    string input = "lovi";


    TrieNode *root = new TrieNode('-');
    for (int i = 0; i < v.size(); i++)
    {
        insertWord(root, v[i]);
    }
    cout<<"Inserting done \n";
    vector<vector<string>> ans = getSuugestions(root, input);

    cout << "Printing the answer \n";

    for (int i = 0; i < ans.size(); i++)
    {

        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ", ";
        }
        cout << endl;
    }

    // TrieNode *root = new TrieNode('-');

    // insertWord(root, "coding");
    // insertWord(root, "code");
    // insertWord(root, "coder");
    // insertWord(root, "codehelp");
    // insertWord(root, "baba");
    // insertWord(root, "baby");
    // insertWord(root, "babbar");
    // insertWord(root, "babu");
    // insertWord(root, "shona");

    // if(searchWord(root,"co")){
    //         cout<<"presnt \n";
    // }
    // else{
    //     cout<<"absent\n";
    // }

    // return 0;
}