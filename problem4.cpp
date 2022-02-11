#include <iostream>
using namespace std;
void eve_odd_transform(int time);
const int index = 3;
int A[index] = {3, 4, 9};
main()
{
    cout << "Enter number of transform:";

    int t;
    cin >> t;
    eve_odd_transform(t);
}
void eve_odd_transform(int time)
{
    int new_num;
    for (int i = 0; i < index; i++)
    {
        if (A[i] % 2 == 0)
        {

            new_num = A[i] - (2 * time);
        }
        else if (A[i] % 2 != 0)
        {
            new_num = A[i] + (2 * time);
        }
        A[i] = new_num;
        cout << A[i] << "\t";
    }
}