#include <stdio.h>

long long berechneQuersumme(long long zahl) {
	
	/*
		Ich benutze einen signed Datentypen da ich die Pr�fung (ob es sich um eine nat�rliche Zahl handelt)
		manuell vornehmen m�chte. W�rde ich einen unsigned Datentypen verwenden und eine negative Zahl als
		Eingabe �bergeben, w�rde diese �berlaufen. So w�rden am Ende falsche Quersummen berechnet werden.
	*/
	
	if (zahl < 0) {
		printf("FEHLER\t\t\t: Eingabe ist keine natuerliche Zahl!\n");
		return;
	}

	/*
		Berechne Quersumme indem die letze Zahl der Variable zahl zu der Variable quersumme aufaddiert wird
		Entferne anschlie�end durch Division durch 10 die letzte Zahl der Variable zahl
	*/
	
	long long quersumme = 0;
	while (zahl > 0) {
		quersumme += zahl % 10;
		zahl /= 10;
	}

	return quersumme;
	
}

int main(int argc, char *argv[]) {
	
	/*
		c) Schreiben Sie eine Konsolenapplikation in C, der beim Aufruf eine nat�rliche Zahl
		als Parameter �bergeben wird, und die aus dieser die Quersumme berechnet.
		(Das ist die Summe ihrer Ziffern - die Quersumme von 1984 beispielsweise ist 1+9+8+4 = 22)
	
		d) Schreiben Sie eine Konsolenapplikation, die z�hlt, wie viele Zahlen unterhalb einer
		als Parameter �bergebenen Zahl ohne Rest durch ihre Quersumme teilbar sind.
	*/

	long long eingabeZahl;
	printf("Bitte Zahl eingeben\t: ");
	scanf("%lli", &eingabeZahl);

	long long quersumme = berechneQuersumme(eingabeZahl);
	printf("Quersumme\t\t: %lli\n\n", quersumme);
	
	printf("Folgende Zahlen unter %lli sind ohne Rest durch Ihre Quersumme teilbar: \n\n", eingabeZahl);
	
	long long anzahlZahlenOhneRestTeilbar = 0;
	long long i = eingabeZahl - 1;
	for (i; i > 0; i--) { 
		if (i % berechneQuersumme(i) == 0) {
			anzahlZahlenOhneRestTeilbar++;
			printf("%lli, ", i);
		}
	}
	// Entferne das letzte Komma aus der Auflistung
	printf("\b\b ");
	
	printf("\n\nAnzahl der Zahlen die unter %lli ohne Rest durch Ihre Quersumme teilbar sind: %lli\n", eingabeZahl, anzahlZahlenOhneRestTeilbar);
	
	return 0;
}

