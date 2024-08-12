#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion
    pair<string, int> p = make_pair("Scorpio", 9);

    m.insert(p);

    pair<string, int> p2("alto", 2);

    m.insert(p2);
    cout << "\n\n";
    m["fortuner"] = 10;
    cout << m["fortuner"] << endl;
    m["fortuner"] = 121;
    cout << m["fortuner"] << endl;

    // acess
    cout << m.at("alto") << endl;
    cout << m["fortuner"] << endl;

    // serach

    cout << m.count("alto") << endl;
    cout << m.count("piggi") << endl;
    if (m.find("fortuner") != m.end())
    {
        cout << "Fortuner found\n";
    }
    else
    {
        cout << "Nahi mila\n";
    }

    // size
    cout << m.size() << endl;
    cout << m["creata"] << endl;
    cout << m.size() << endl;
}