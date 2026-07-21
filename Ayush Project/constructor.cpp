#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:
    // Constructor
    Matrix()
    {
        cout << "Enter 4 elements of matrix:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void multiply(Matrix m)
    {
        int result[2][2];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    result[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        cout << "\nProduct of the two matrices:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    cout << "Enter First Matrix:\n";
    Matrix m1;

    cout << "Enter Second Matrix:\n";
    Matrix m2;

    m1.multiply(m2);

    return 0;
}