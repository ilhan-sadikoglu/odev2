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
	sayi(const string& st1);
	

	void setGercek(const double& a);//ger�ek k�sm� d�zenler
	void getGercek()const;//ger�ek k�sm� getirir
	void setKarmasik(const double& a);//karma��k k�sm� d�zenler
	void getKarmasik()const;//karma��k k�sm� getirir
	
	void add(const sayi&);
	void subtract(const sayi&);
	void divide(const sayi&);
	void print();

	

};