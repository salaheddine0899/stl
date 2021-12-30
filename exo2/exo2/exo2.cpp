// exo2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

template <class T>
string replace(string s) {
    for (int i = 0; i < s.size();i++) {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'y' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u') {
            s[i] = '*';
        }
    }
    return s;
}

template<class T>
string capitalize(string s) {
    for (int i = 0; i < s.size(); i++)
        s[i] = toupper(s[i]);
    return s;
}

int main()
{

    vector<string> l = { "hello","me","or" };

    vector<string> l2={"hi","yes"};

    string arr[] = { "hello","me","ou" };

    transform(l.begin(), l.end(),l.begin(),replace<string>);
    
    transform(l2.begin(), l2.end(), l2.begin(),capitalize<string>);

    for (auto it : l) {
        cout << it << '\t';
    }

    cout << '\n';

    for (auto it : l2) {
        cout << it << '\t';
    }

    //std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
