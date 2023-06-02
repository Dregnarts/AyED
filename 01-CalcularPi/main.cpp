#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int iteraciones = 0;
    int n = 0;
    double lebniz = 0;
    double pi = 0;
    double tolerancia = 1e-6; // Tolerancia de convergencia

    do {
        iteraciones++;
        n++;

        lebniz = pow(-1, n) / (2.0 * n + 1.0);

        pi += lebniz;

    } while (abs(lebniz) > tolerancia);

    cout << iteraciones << endl;
    cout << 4 * pi;

    return 0;
}