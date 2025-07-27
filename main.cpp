#include <iostream>

using namespace std;

int main()
{
    int readings[100]; // Array to hold temperature Readings
    int number;

    cout << "Enter Number of Temperature Readings: ";
    cin  >> number;

    //input readings
    for(int i = 0; i < number; i++)
    {
        cout << "Reading " << i + 1 <<": ";
        cin >> readings[i];
    }

    //Process and print fan status
    cout << "\nResults:\n";
    for(int i = 0; i < number; i++)
    {
        if( readings[i] > 35)
        {
            cout << "Over heat warning. Temp high cool down now⚠";
        }
        else{

            cout << "Fan off";
        }
        cout << endl;
    }

    return 0;
}

