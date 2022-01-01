// exo3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<memory>
#include"Person.h"


int main()
{

    unordered_map<string, Person> persons;

    persons.reserve(2);
    persons.insert(make_pair<string, Person>("salah eddine", Person("salah eddine", "here", "060606")));
    persons.insert(make_pair<string, Person>("Aomar", Person("Aomar", "There", "066161")));

    std::map<string, Person> ordered(persons.begin(), persons.end());
    //sort(persons.begin(),persons.end());

    for (auto it : ordered) {
        it.second.display();
    }

    persons.clear();

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
