#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <new>
#include <time.h>
using namespace std;
int main(){
	int wie, kol, i, j;
	cout << "Podaj liczbe wierszy i kolumn tablicy:\n";
	cin >> wie >> kol;
	srand(time(NULL));
	int **tab;
	try{
		tab = new int *[wie];
	}catch(bad_alloc){
		cout <<"Brak miejsca";
		return -1;
	}
	for(i=0;i<wie;i++){
		try{
			tab[i] = new int [kol];
		}catch(bad_alloc){
			cout << "brak miejsca";
			return -2;
		}
	}
	for(i=0;i<wie;i++)
		for(j=0;j<kol;j++){
		tab[i][j] = rand()%101;
		cout << setw[4] << tab[i][j];
		}
	cout << endl;
	for(i=0;i<wie;i++)
	delete [] tab[i];
	delete [] tab;
	return 0;}
