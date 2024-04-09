#include <iostream>
using namespace std;
class Mathematics
{
private:
    /* data */
public:
    int fact(int n)
    {
        int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
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
};

int main()
{
    Mathematics calculate;
    int n;
    cout << "Input an integer to find the factorial: ";
    cin >> n;
    cout << calculate.fact(n) << endl;
    cout<< calculate.check_prime(5)<<endl;
}