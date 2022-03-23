#include <iostream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <new>
#include <time.h>
using namespace std;
int main(){
	
	int liczba, i, j;
	cout <<"Podaj liczbe miast ";
	cin >> liczba;
	
	char **miasta;
	miasta = new char *[liczba];
	
	for(i=0;i<liczba;i++)
		miasta[i] = new char[20];
	
	for(i=0;i<liczba;i++){
		cout << "Podaj nazwe miasta: ";
		cin >> miasta[i];
	}
	
	int **tab;
	tab = new int *[liczba];
	for(i=0;i<liczba;i++){
		try{
			tab[i] = new int[i+1];
		}catch(bad_alloc){
			return -1;
		}
	}

	for(i=0;i<liczba;i++)
		for(j=0;j<i+1;j++)
			if(i==j)
				tab[i][j] = 0;
			else{
				cout <<"Podaj odleglosc z miasta " << miasta[i] << " do miasta " << miasta[j] << ": ";
				cin >> tab[i][j];
			}
	
	cout << "			";
	for(i=0;i<liczba;i++)
		cout << setw(10) << miasta[i];
	cout << endl;
	for(i=0;i<liczba;i++){
		for(j=0;j<i+1;j++){
			if(j==0)
				cout << setw(10) <<miasta[i];
			cout << setw(10) << tab[i][j];
		}cout << endl;
	}














return 0;
}
