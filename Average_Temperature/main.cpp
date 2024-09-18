//
//  main.cpp
//  Average_Temperature
//
//  Created by Sonia Lopchan on 9/18/24.
//

#include <iostream>
using namespace std;

int main()
{
    double numTemperatures,temperature;
    double sum = 0.0;

    cout << "How many temperatures do you want to enter? ";
    cin >>numTemperatures;

    for (int i = 0; i < numTemperatures; i++)
    {
        cout << "Enter temperature " << i+1 << ": ";
        cin >> temperature;
        sum += temperature;
    }

    double average = sum/numTemperatures;
    cout << "The average temperature is " << average << endl;

return 0;
}
