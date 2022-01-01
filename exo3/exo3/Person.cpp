#include "Person.h"

Person::Person(string nom, string adresse, string tel)
{
	_nom = nom;
	_adresse = adresse;
	_tel = tel;
}

void Person::display() const
{
	cout << "nom: " << _nom << " adress: " << _adresse << "phone :" << _tel << endl;
}
