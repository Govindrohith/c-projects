#include <iostream>

using namespace std;

int main()
{
    int current_Occupants = 0;
    const int max_Occupants = 100;

    while (true)
    {
        cout << "Enter positive numbers for groups arriving and negative numbers for groups leaving." << endl;
        int input;
        cout << "Enter group size to enter or leave: ";
        cin >> input;

        if (current_Occupants + input > max_Occupants || current_Occupants + input < 0)
        {
            cout << "Current number of occupants: " << current_Occupants << endl;
            cout << " group exceeding the maximum occupancy of 100 occupant [or] group cannot leave  more than no of occupants " << endl;
            cout << "allow  fewer departs  [or] allow fewer occupants." << endl;
            continue;
        }

        current_Occupants += input;

        cout << "Current number of occupants: " << current_Occupants << endl;

        if (current_Occupants >= max_Occupants)
        {
            cout << "The oyster bar is full!" << endl;
            break;
        }
    }

    return 0;
}
