#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() 
{
    unordered_map<string, string> m;
    m["HELLO"] = "ENGLISH";
    m["HOLA"] = "SPANISH";
    m["HALLO"] = "GERMAN";
    m["BONJOUR"] = "FRENCH";
    m["CIAO"] = "ITALIAN";
    m["ZDRAVSTVUJTE"] = "RUSSIAN";
    string s;
    int i = 1;
    while(cin >> s) 
    {
        if(s == "#") return 0;
        cout << "Case " << i << ": " << (m.count(s) == 0 ? "UNKNOWN" : m[s]) << endl;
        i++;
    }
}
