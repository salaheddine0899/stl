#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	string _nom;
	string _adresse;
	string _tel;
public:
	Person(string nom, string adresse, string tel);
	void display()const;
};

