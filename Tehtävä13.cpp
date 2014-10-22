/***********************************************
Harjoitus 13 (Palautus vko 44)
Tekijä: JYlo
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehdäksesi merkkijonojen yhdistämisen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka
*
*Versio: 1.0
*PVM: 22.10.2014
************************************************/

#include <iostream>
#include <string.h>
using namespace std;




void main(void) /* PÄÄOHJELMA */
{
	char nimi1[11] = "etunimi";
	char nimi2[11] = "sukunimi";

	printf("Anna nimi (max. 10 merkkiä):");
	gets_s(nimi1);
	printf("Anna toinen nimi (max. 10 merkkiä):");
	gets_s(nimi2);
	strcat_s(nimi1, nimi2);                     /* liitetään tulokseen toka      */
	printf("Nimesi on:\n"); /* näytetään tulos ja sen pituus */
	printf(nimi1);

}