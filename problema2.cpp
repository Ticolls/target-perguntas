#include <iostream>
using namespace std;

bool isFibonacci(int n)
{
    int a = 0, b = 1, c = 1;
    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return (c == n);
}

int main()
{
    int num;
    cout << "digite um numero: ";
    cin >> num;

    if (isFibonacci(num))
    {
        cout << "O numero informado pertence a sequencia de fibonacci" << endl;
    }
    else
    {
        cout << "o numero informado nao pertence a sequencia de fibonacci" << endl;
    }
}