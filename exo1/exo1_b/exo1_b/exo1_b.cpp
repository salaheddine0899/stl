// exo1_b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stack>
using namespace std;

void string_in_stack(stack<char>&s, string mot) {
    for (auto c : mot) {
        s.push(c);
    }
}


string stack_in_string(stack<char> s) {
    char c;
    stack<char>tmp;
    string mot="";
    while (!s.empty()) {
        tmp.push((c = s.top()));
        mot += c;
        s.pop();
    }

    return mot;

}

bool isPalindrom(string mot) {
    stack<char> s;
    string mot2;
    string_in_stack(s, mot);
    //stack_reverse(s);
    mot2 = stack_in_string(s);

    return mot == mot2;
}

int main()
{
    string mot;

    cout << "saisissez le mot :";
    cin >> mot;

    if (isPalindrom(mot))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    
    

    std::cout << "Hello World!\n";
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
