#include <stdio.h>

long long berechneQuersumme(long long zahl) {
	
	/*
		Ich benutze einen signed Datentypen da ich die Prüfung (ob es sich um eine natürliche Zahl handelt)
		manuell vornehmen möchte. Würde ich einen unsigned Datentypen verwenden und eine negative Zahl als
		Eingabe übergeben, würde diese Überlaufen. So würden am Ende falsche Quersummen berechnet werden.
	*/
	
	if (zahl < 0) {
		printf("FEHLER\t\t\t: Eingabe ist keine natuerliche Zahl!\n");
		return;
	}

	/*
		Berechne Quersumme indem die letze Zahl der Variable zahl zu der Variable quersumme aufaddiert wird
		Entferne anschließend durch Division durch 10 die letzte Zahl der Variable zahl
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
		c) Schreiben Sie eine Konsolenapplikation in C, der beim Aufruf eine natürliche Zahl
		als Parameter übergeben wird, und die aus dieser die Quersumme berechnet.
		(Das ist die Summe ihrer Ziffern - die Quersumme von 1984 beispielsweise ist 1+9+8+4 = 22)
	
		d) Schreiben Sie eine Konsolenapplikation, die zählt, wie viele Zahlen unterhalb einer
		als Parameter übergebenen Zahl ohne Rest durch ihre Quersumme teilbar sind.
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

