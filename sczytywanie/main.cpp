#include <iostream>
#include <fstream>

using namespace std;
fstream sczytywanie;
int T[50], w, x, y, z, a, n=50;
void sortowaniebabelkowe(int T[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
		if(T[j-1]>T[j])
			swap(T[j-1], T[j]);
}
int main()
{
    cout << "Jezeli chcesz sprawdzic ile jest liczb parzystych, a ile nieparzystych wybierz 1"<<endl; cout<< "Jezeli chcesz posortowac liczby wybierz 2" << endl;
    cin>>w;
    switch(w)
    {
    case 1:
    sczytywanie.open("dane.txt", ios::in);
    while (sczytywanie.good())
    {
        sczytywanie>>x;
        if(x%2==0) y++; else z++;
    }
    sczytywanie.close();
    cout<<"Ilosc liczb parzystych: "<<y<<endl; cout<<"Ilosc liczb nieparzystych: "<<z<<endl;
    break;
    case 2:
    cout<<"Posortowane liczby: "<<endl;
    sczytywanie.open("dane.txt", ios::in);
    for(int i=0;i<50; i++)
    {
        sczytywanie>>T[a];
        a++;
    }
    sczytywanie.close();
    sortowaniebabelkowe(T,n);                           //funkcja sortujace liczby z tablicy
	for(int i=0;i<n;i++)                                //wypisanie liczb posortowanych rosnaco
          cout<<T[i]<<", ";
    break;
    default: cout<<"Nie ma takiej opcji w menu!";
    break;
    }
    return 0;
}
