#include "kar_sayi.h"
#include <iostream>
#include <string>

using namespace std;

void sayi::setGercek(double a)//ger�ek k�sm� d�zenler
{
	gercek = a;
}

void sayi::setKarmasik(double a)//ger�ek k�sm� d�zenler
{
	karmasik = a;
}

void sayi::getGercek()//ger�ek k�sm� d�zenler
{
	cout << gercek << "i" << endl;
}

void sayi::getKarmasik()//ger�ek k�sm� d�zenler
{
	cout << karmasik <<"i"<< endl;
}

sayi::sayi()
{
	setGercek(0);
	setKarmasik(0);

}

sayi::sayi(double a)
{
	setGercek(a);
	setKarmasik(0);

}

sayi::sayi(int a)
{
	setGercek(a);
	setKarmasik(0);

}

sayi::sayi(double a,double b)
{
	setGercek(a);
	setKarmasik(b);

}
