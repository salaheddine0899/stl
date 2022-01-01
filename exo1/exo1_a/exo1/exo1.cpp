// exo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<deque>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    deque<string> d;
    list<string>l;

    cout << "saisissez un nombre: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cout << "Saisissez un mot :";
        cin >> s;
        d.push_back(s);
    }

    for (auto it : d)
        l.push_back(it);

    for (auto it : l)
        cout << it << "\t";

    cout << endl;

    //list<string> ordered(l.begin(), l.end());
    l.sort();

    for (auto it : l)
        cout << it << "\t";

    //cout << n;

    //std::cout << "Hello World!\n";
    return 0;
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
