/******************************************************************************
 *   
 *   @file:  main.cpp
 *   @brief: 
******************************************************************************/

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

//=============================================================================
//                           MAIN
//=============================================================================
int main(int, char **)
{
    int *p1, size;

    do
    {
        cout << "Geben sie die Grosse des Arrays ein: " << endl;
        cin >> size;
    } while (size < 1 || size > 100.001);
    
   int arr[size];
   p1 = arr;
    for (int i = 0; i < size; i++)
    {
        *p1 = i +1;
        p1++;
        cout << arr[i] << endl;
    }
}

//=============================================================================
//                           END OF FILE
//=============================================================================
