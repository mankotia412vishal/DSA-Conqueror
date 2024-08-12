#include <bits/stdc++.h>
using namespace std;
bool vowel(char ch){
    return (ch=='a') || (ch=='e') || (ch=='i') || (ch=='o')|| (ch=='u');
}
int main(){

    string word="234Adas";
    int  miniMumchar=0;
    int vowelC=0,consonantC=0;
    for (int i = 0; i < word.length(); i++)
    {
         if(vowel(word[i])){
            vowelC+=1;
            miniMumchar+=1
         }
         else if((word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z')){
            consonantC+=1;
            miniMumchar+=1;
         }
    }
    if((miniMumchar>=3) && (vowelC>=1) &&(consonantC>=1)){
        return 1;
    }
    else{
        return 0;
    }

    return 0;

}