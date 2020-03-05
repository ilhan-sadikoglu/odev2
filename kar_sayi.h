#pragma once
#include <string>
using namespace std;

class sayi {
	double gercek,karmasik;
public:
	sayi();//default
	sayi(double);//reel
	sayi(int);//tam
	sayi(double,double);//reel+karmaþýk
	

	void setGercek(double);//gerçek kýsmý düzenler
	void getGercek();//gerçek kýsmý getirir
	void setKarmasik(double);//karmaþýk kýsmý düzenler
	void getKarmasik();//karmaþýk kýsmý getirir
	
	int add(sayi);
	int subtract(sayi);
	int divide(sayi);
	int print();

	

};