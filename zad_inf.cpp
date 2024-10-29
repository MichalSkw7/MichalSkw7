#include <iostream>
using namespace std;
  
  int szukajka(int tablica[], int lewy, int prawy, int szukana)
{
      while (lewy <= prawy) 
      {
          int srodek = lewy + (prawy - lewy) / 2;
          // Sprawdzenie, czy element jest w środku
          if (tablica[srodek] == szukana)
              return srodek; // Zwraca indeks szukanego elementu
          if (tablica[srodek] < szukana)
              lewy = srodek + 1;
          // Jeśli szukana liczba jest mniejsza przeszukuje lewą połowę zbioru
          else
              prawy = srodek - 1;
      }
      return -1;
}
int main() 
{
    int tablica[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };  // Posortowana tablica o rozmiarze 15
    int szukana;
      cout << "Podaj liczbe do wyszukania: ";
    cin >> szukana;
    int wynik = szukajka(tablica, 0, 14, szukana); 
    if (wynik != -1)
        cout << "Element znaleziony w indeksie: " << wynik << endl;
    else
        cout << "Element nie został znaleziony" << endl;
    return 0;
}
