#include "kar_sayi.h"
#include <iostream>
#include <string>

using namespace std;

void sayi::setGercek(const double &a)//gerçek kýsmý düzenler
{
	gercek = a;
}

void sayi::setKarmasik(const double &a)//gerçek kýsmý düzenler
{
	karmasik = a;
}

void sayi::getGercek()const//gerçek kýsmý düzenler
{
	cout << gercek<<" ";
}

void sayi::getKarmasik()const//gerçek kýsmý düzenler
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

sayi::sayi(double a,double b)//iki deðeri  de alan constructer
{
	setGercek(a);
	setKarmasik(b);

}

sayi::sayi(string st1)//iki deðeri  de alan constructer
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


void sayi::print() {//nesnenin reel ve karmaþýk kýsmýný yazdýram constructer
	getGercek();
	cout << "+";
	getKarmasik();
}

void sayi::subtract(const sayi &x) {//çýkarma iþlemi
	this->gercek -= x.gercek;
	this->karmasik -= x.karmasik;

}

void sayi::add(const sayi& x) {//çýkarma iþlemi
	this->gercek += x.gercek;
	this->karmasik += x.karmasik;

}

void sayi::divide(const sayi& x) {//bölme iþlemi
	this->gercek /= x.gercek;
	this->karmasik /= x.karmasik;

}