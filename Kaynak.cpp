#include "kar_sayi.h"
#include <iostream>

int main(){

	sayi s1;//varsayýlan
	sayi s2(10);//int alan
	sayi s3(3.14);//double alan
	sayi s4(3, 18);//ikisini de alan
	
	s1.getGercek();
	s1.getKarmasik();
	s2.getGercek();
	s2.getKarmasik();
	s3.getGercek();
	s3.getKarmasik();
	s4.getGercek();
	s4.getKarmasik();

	s1.setGercek(12);
	s1.setKarmasik(14);
	s2.setGercek(16);
	s2.setKarmasik(33);
	s3.setGercek(21);
	s3.setKarmasik(65);
	s4.setGercek(32);
	s4.setKarmasik(40);




}