/***********************************************
Harjoitus 13 (Palautus vko 44)
Tekij�: JYlo
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi nayt�lle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehd�ksesi merkkijonojen yhdist�misen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA

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




void main(void) /* P��OHJELMA */
{
	char nimi1[11] = "etunimi";
	char nimi2[11] = "sukunimi";

	printf("Anna nimi (max. 10 merkki�):");
	gets_s(nimi1);
	printf("Anna toinen nimi (max. 10 merkki�):");
	gets_s(nimi2);
	strcat_s(nimi1, nimi2);                     /* liitet��n tulokseen toka      */
	printf("Nimesi on:\n"); /* n�ytet��n tulos ja sen pituus */
	printf(nimi1);

}