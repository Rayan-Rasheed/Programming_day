#include <iostream>
using namespace std;
bool jackpot();
const int index = 4;
string A[index];
main()
{
    cout << "Enter string:";
    for (int i = 0; i < index; i++)
    {
        cin >> A[i];
    }
    bool out = jackpot();
    cout << out;
}
bool jackpot()
{
    bool flag = true;
    for (int i = 0; i < index - 1; i++)
    {
        // if (A[i] == A[i + 1])
        // {

        //     flag = true;
        // }

        if (A[i] != A[i + 1])
        {

            flag = false;

            break;
        }
        flag = true;
    }
    return flag;
}