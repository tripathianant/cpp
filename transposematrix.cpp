#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3], trans_mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans_mat[j][i] = matrix[i][j];
        }
    }
    cout << "TRANSPOSE OF A MATRIX IS : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << trans_mat[i][j] << "\t";
        }
        cout << endl;
    }
}