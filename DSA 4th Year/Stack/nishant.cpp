#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string changeCase(string inputStr, int choice) {
    // Split the input string into words
    vector<string> words;
    istringstream iss(inputStr);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }

    if (choice == 1) {
        
        string camelCase = words[0];
        for (int i = 1; i < words.size(); i++) {
            camelCase += (char)toupper(words[i][0]) + words[i].substr(1);
        }
        return camelCase;
    } else if (choice == 2) {
        
        string kebabCase = words[0];
        for (int i = 1; i < words.size(); i++) {
            kebabCase += "-" + words[i];
        }
        for (char &c : kebabCase) {
            c = tolower(c);
        }
        return kebabCase;
    } else if (choice == 3) {
       
        string snakeCase = words[0];
        for (int i = 1; i < words.size(); i++) {
            snakeCase += "_" + words[i];
        }
        for (char &c : snakeCase) {
            c = tolower(c);
        }
        return snakeCase;
    } else if (choice == 4) {
         
        string pascalCase = "";
        for (int i = 0; i < words.size(); i++) {
            pascalCase += (char)toupper(words[i][0]) + words[i].substr(1);
        }
        return pascalCase;
    } else {
        return "Invalid choice";
    }
}

int main() {
    string inputStr = "hello world";
    int choice = 1;
    cout << changeCase(inputStr, choice) << endl;  // Output: "helloWorld"

    inputStr = "hello world";
    choice = 2;
    cout << changeCase(inputStr, choice) << endl;  // Output: "hello-world"

    inputStr = "hello world";
    choice = 3;
    cout << changeCase(inputStr, choice) << endl;  // Output: "hello_world"

    inputStr = "hello world";
    choice = 4;
    cout << changeCase(inputStr, choice) << endl;  // Output: "HelloWorld"

    return 0;
}
