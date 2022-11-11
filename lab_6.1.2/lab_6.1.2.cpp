#include <iostream>
#include <time.h>
using namespace std;

void Show(int* r, const int a, int i)
{
    r[i] = 4 + rand() % (68 - 4) + 1;
    if (i < a - 1)
        Show(r, a, i + 1);
}
void Print(int* r, const int a, int i) {
    cout << " " << r[i];
    if (i < a - 1)
        Print(r, a, i + 1);
    else cout << endl;
}
int Sum(int* r, const int i, int sum) {
    if (r[i] % 2 != 0 || r[i] % 13 != 0)
    {
        sum += r[i];
    }
    if (i < 0)
        return sum;
    else
        return  Sum(r, i - 1, sum);

}
int Number(int* r, const int a, int i, int num) {
    if (r[i] % 2 != 0 || r[i] % 13 != 0)
    {
        num += 1;
    }
    if (i < a) {
        return Number(r, a, i + 1, num);
    }
    else {
        return num;
    }
}
void Zamina(int* r, const int a, int i) {
    if (r[i] % 2 != 0 || r[i] % 13 != 0)
    {
        r[i] = 0;
    }
    if (i < a)
        Zamina(r, a, i + 1);
    else cout << endl;

}

int main()
{
    srand((unsigned)time(NULL));

    const int a = 23;
    int r[a];
    Show(r, a, 0);
    Print(r, a, 0);
    cout << "Sum = " << Sum(r, a, 0) << endl;
    cout << "Number = " << Number(r, a, 0, 0);
    Zamina(r, a, 0);
    cout << "Zamina = ";
    Print(r, a, 0);
    return 0;
}