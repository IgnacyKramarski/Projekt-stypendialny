#include <cmath>
#include <iostream>
#include <locale.h>
#include <algorithm>
#include <conio.h>

using namespace std;
int tablica[1000];
int tablica2[1000];
int tablica3[1000];
int tablica4[1000];
int tablica5[1000];
int tablica6[1000];
int tablica7[1000];

void iSort(int tab[], int w)
{
    int x,k;
    for (int i = 1; i < w; i++)
    {
        x = tab[i];
        for(k = i-1; k >= 0; k--)
        {
        if (x < tab[k])
        {
            tab[k+1] = tab[k];
        }
            else
            break;
        }
        tab[k+1] = x;
    }
}
void bubbleSort(int A[], int n)
{
    for(int k = 0; k < n; k++) 
    for(int i = 0; i < n - 1; i++)
        if (A[i] > A[i + 1])
            swap(A[i], A[i + 1]);
}
void grzebienSort( int tab[], int size )
{
    int gap = size;
    bool replace = true;
   
    while( gap > 1 || replace )
    {
        gap = gap * 10 / 13;
        if( gap == 0 )
             gap = 1;
       
        replace = false;
        for( int i = 0; i + gap < size; i++ )
        {
            if( tab[ i + gap ] < tab[ i ] )
            {
                swap( tab[ i ], tab[ i + gap ] );
                replace = true;
            }
        }
    }
}
void koktailSort( int tab[], int size )
{
    int bottom = 0, top = size - 1;
    bool replace = true;
   
    while( replace )
    {
        replace = false;
       
        for( int i = bottom; i < top; i++ )
        {
            if( tab[ i ] > tab[ i + 1 ] )
            {
                swap( tab[ i ], tab[ i + 1 ] );
               
                replace = true;
            }
        }
       
       
        top--;
        for( int i = top; i > bottom; i-- )
        {
            if( tab[ i ] < tab[ i - 1 ] )
            {
                swap( tab[ i ], tab[ i - 1 ] );
               
                replace = true;
            }
        }
       
        bottom++;
    }
}
void wybieranie( int tab[], int size )
{
    int k;
    for( int i = 0; i < size; i++ )
    {
        k = i;
        for( int j = i + 1; j < size; j++ )
        if( tab[ j ] < tab[ k ] )
             k = j;
       
        swap( tab[ k ], tab[ i ] );
    }
}
int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Wybierz, ile elementow ma byc w tablicy, ktora bedzie sortowana \n";
    int n;
    cin >> n;
    cout << "Wypisz te elementy: ";
    for (int i = 0; i < n; i++)
    {
        cin >> tablica[i];
    }
    for (int i = 0; i < n; i++)
    {
        tablica2[i] = tablica[i];
        tablica3[i] = tablica[i];
        tablica4[i] = tablica[i];
        tablica5[i] = tablica[i];
        tablica6[i] = tablica[i];
        tablica7[i] = tablica[i];
    }
    
    
    //sortowania
    
    
    sort(tablica2, tablica2 + n);
    cout <<"Sortowanie szybkie: ";
    for (int i = 0; i < n; i++)
    {
        cout << tablica2[i] << " ";    
    }
    cout << " \n";
    
    iSort(tablica4, n);
    cout <<"Sortowanie przez wstawianie: ";
    for (int i = 0; i < n; i++)
    {
        cout << tablica4[i] << " ";
    }
    cout << " \n";
   
    bubbleSort(tablica3, n);
    cout <<"Sortowanie babelkowe: ";
    for (int i = 0; i < n; i++)
    {
        cout << tablica3[i] << " ";
    }
    cout << " \n";
    grzebienSort(tablica5, n);
    cout <<"Sortowanie grzebieniowe: ";
    for (int i = 0; i < n; i++)
    {
        cout << tablica5[i] << " ";
    }
    cout << "\n";
    koktailSort(tablica6, n);
    cout <<"Sortowanie koktailowe: ";
    for (int i = 0; i < n; i++)
    {
        cout << tablica6[i] << " ";
    }
    cout << "\n";
    wybieranie(tablica7, n);
    cout << "Sortowanie przez wybieranie: ";
    for (int i = 0; i < n; i++)
    {
        cout << tablica7[i] << " ";
    }
    cout << "\n";
    
    getch();
    return 0;
}