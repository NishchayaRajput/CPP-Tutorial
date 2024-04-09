// Write a program in C++ to find prime number within a range.
// Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25
#include <iostream>
using namespace std;
bool check_prime(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int s, e, r = 0;
    cout << "Input number for starting range:";
    cin >> s;
    cout << "Input number for ending line:";
    cin >> e;
    int arr[50];
    int count = 0;
    for (int i = s; i <= e; i++)
    {
        
        if (check_prime(i))
        {
            arr[count] = i;
            count++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}