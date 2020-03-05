#include "kar_sayi.h"
#include <iostream>
#include <string>

using namespace std;

void sayi::setGercek(double a)//gerçek kýsmý düzenler
{
	gercek = a;
}

void sayi::setKarmasik(double a)//gerçek kýsmý düzenler
{
	karmasik = a;
}

void sayi::getGercek()//gerçek kýsmý düzenler
{
	cout << gercek << "i" << endl;
}

void sayi::getKarmasik()//gerçek kýsmý düzenler
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
