#pragma once
#include <string>
using namespace std;

class sayi {
	double gercek,karmasik;
public:
	sayi();//default
	sayi(double);//reel
	sayi(int);//tam
	sayi(double,double);//reel+karma��k
	

	void setGercek(double);//ger�ek k�sm� d�zenler
	void getGercek();//ger�ek k�sm� getirir
	void setKarmasik(double);//karma��k k�sm� d�zenler
	void getKarmasik();//karma��k k�sm� getirir
	
	int add(sayi);
	int subtract(sayi);
	int divide(sayi);
	int print();

	

};