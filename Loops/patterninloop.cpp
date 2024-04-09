#include <iostream>
using namespace std;
int main()
{
    for (int j = 1; j <= 7; j++)
    {
        for (int i = 1; i <= 13; i++)
        {
            if (i == 1 || i == 13)
            {
                cout << 'A';
            }
            if (i == 2 || i == 12)
            {
                if (j == 7)
                {
                    cout << ' ';
                }
                else
                {
                    cout << 'B';
                }
            }
            if (i == 3 || i == 11)
            {
                if (j == 7 || j == 6)
                {
                    cout << ' ';
                }
                else
                {
                    cout << 'C';
                }
            }
            if (i == 4 || i == 10)
            {
                if (j == 7 || j == 6 || j == 5)
                {
                    cout << ' ';
                }
                else
                {
                    cout << 'D';
                }
            }
            if (i == 5 || i == 9)
            {
                if (j == 7 || j == 6 || j == 5 || j == 4)
                {
                    cout << ' ';
                }
                else
                {
                    cout << 'E';
                }
            }
            if (i == 6 || i == 8)
            {
                if (j == 7 || j == 6 || j == 5 || j == 4 || j == 3)
                {
                    cout << ' ';
                }
                else
                {
                    cout << 'F';
                }
            }
            if (i == 7)
            {
                if (j == 7 || j == 6 || j == 5 || j == 4 || j == 3 || j == 2)
                {
                    cout << ' ';
                }
                else
                {
                    cout << 'G';
                }
            }
        }
        cout << endl;
    }
}