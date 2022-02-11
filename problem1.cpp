#include <iostream>
using namespace std;
int total_alphabet(string name);
bool status(int num);
main()
{
    cout << "Enter string:";
    string s;
    cin >> s;
    int total = total_alphabet(s);
    bool result = status(total);
    cout << result;
}
int total_alphabet(string name)
{
    int i = 0;
    while (name[i] != '\0')
    {

        i++;
    }
    return i;
}
bool status(int num)
{

    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}