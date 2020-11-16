#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;

int main()
{
    double x, y, R = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "R = "; cin >> R;
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y <= (sqrt((R * R) - (x + R) * (x + R))) + R) ||
            (y <= 0 && y >= -R && x >= 0 && x <= 2 * R))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        cout << "R = "; cin >> R;

        x = -2 * R + (2 * R - (-2 * R)) * rand() / RAND_MAX;
        y = -2 * R + (2 * R - (-2 * R)) * rand() / RAND_MAX;

        if ((y <= (sqrt((R * R) - (x + R) * (x + R))) + R) ||
            (y <= 0 && y >= -R && x >= 0 && x <= 2 * R))
            
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    system("pause");
    return 0;
}