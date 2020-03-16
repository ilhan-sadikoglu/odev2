#include "kar_sayi.h"
#include <iostream>
#include <string>

using namespace std;

void sayi::setGercek(const double &a)//ger�ek k�sm� d�zenler
{
	gercek = a;
}

void sayi::setKarmasik(const double &a)//ger�ek k�sm� d�zenler
{
	karmasik = a;
}

void sayi::getGercek()const//ger�ek k�sm� d�zenler
{
	cout << gercek<<" ";
}

void sayi::getKarmasik()const//ger�ek k�sm� d�zenler
{
	cout << " " << karmasik <<"i"<< endl;
}

sayi::sayi()//default constructer
{
	setGercek(0);
	setKarmasik(0);

}

sayi::sayi(double a)//double alan constructer
{
	setGercek(a);
	setKarmasik(0);

}

sayi::sayi(int a)//int alan constructer
{
	setGercek(a);
	setKarmasik(0);

}

sayi::sayi(double a,double b)//iki de�eri  de alan constructer
{
	setGercek(a);
	setKarmasik(b);

}

sayi::sayi(string st1)//iki de�eri  de alan constructer
{
	size_t found;
	found = st1.find_first_of("+");
	string st2(st1.begin(), st1.begin() + found);
	string st3(st1.begin() + found + 1, st1.end()-1);
	
	int r = std::stoi(st2);
	int im = std::stoi(st3);

	setGercek(r);
	setKarmasik(im);
}


void sayi::print() {//nesnenin reel ve karma��k k�sm�n� yazd�ram constructer
	getGercek();
	cout << "+";
	getKarmasik();
}

void sayi::subtract(const sayi &x) {//��karma i�lemi
	this->gercek -= x.gercek;
	this->karmasik -= x.karmasik;

}

void sayi::add(const sayi& x) {//��karma i�lemi
	this->gercek += x.gercek;
	this->karmasik += x.karmasik;

}

void sayi::divide(const sayi& x) {//b�lme i�lemi
	this->gercek /= x.gercek;
	this->karmasik /= x.karmasik;

}