#include <iostream>
using namespace std;
string sevenboom();
const int index = 4;
int A[index];
main()
{
    cout << "Enter number:";
    for (int i = 0; i < index; i++)
    {
        cin >> A[i];
    }
    string out = sevenboom();
    cout << out;
}

string sevenboom()
{
    string result;
    for (int i = 0; i < index; i++)
    {
        if (A[i] == 7)
        {
            result = "boom";
            break;
        }
        else
        {
            result = "there is no 7";
        }
    }
    return result;
}