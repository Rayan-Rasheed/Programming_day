#include <iostream>
using namespace std;
string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
int A[4];
void dance_convert();
main()
{
    cout << "Enter number:";
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }
    dance_convert();
}

void dance_convert()
{
    string result;
    for (int i = 0; i < 4; i++)
    {
        int index = A[i] + i;
        if (index <= 9)
        {
            result = moves[index];
            cout << result;
        }
        else if (index > 9)
        {
            index = index - 9;
            result = moves[index];
            cout << result;
        }
        cout << result;
    }
}