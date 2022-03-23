#include <iostream>
#include <iomanip>
#include <cstdio>
#include <new>
using namespace std;
int main(){
	float *tab = NULL;
	cout << "Ile licz chcesz wprowadzic? ";
	int ile;
	float liczba;
	cin >> ile;
	try{
		tab = new float (ile);
	}catch(bad_alloc){
		cout << "Brak miejsca na tablice";
		return -1;
	}
	
	for(int i = 0; i<ile; i++){
		cout << "Podaj liczbe ";
		cin >> liczba;
		*(tab+i) = liczba;
	}
	cout << endl << "Wypisuje zawartosc:";
	for(int i = 0; i<ile; i++){
	cout << setw(3) << *(tab+i);
	}
	delete [] tab;
	return 0;
	
}
