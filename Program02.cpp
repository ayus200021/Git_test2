#include <iostream>

using namespace std;

class Matrix
{
    int row, column, elems;
    int array[10][10];

public:
    void getRows()
    {
        cout << "number of rows: " << row << endl;
    }

    void getColumns()
    {
        cout << "number of columns: " << column << endl;
    }

    void setValue(int i, int j, int value)
    {
        array[i][j] = value;
    }

    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << array[i][j] << " " << endl;
            }
            cout << endl;
        }
    }

    Matrix addMatrix(Matrix b)
    {
        Matrix temp;
        temp.array[row][column];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                temp.array[i][j] = array[i][j] + b.array[i][j];
            }
        }
        return temp;
    }

    Matrix mulMatrix(Matrix b)
    {
        Matrix temp;
        temp.array[row][column];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                for (int k = 0; k < column; ++k)
                {
                    temp.array[i][j] += array[i][k] * b.array[k][j];
                }
            }
        }
        return temp;
    }

    Matrix()
    {
        cout << "default constructor called" << endl;
    }

    Matrix(int i, int j)
    {
        row = i;
        column = j;
        elems = row * column;
        array[row][column];
        cout << "parameterized constructor called" << endl;
    }
};

int main()
{
    Matrix mat1(3, 3);
    mat1.getRows();
    mat1.getColumns();
    mat1.setValue(0, 0, 10);

    Matrix mat2(3, 3), mat3(3, 3), mat4(3, 3), mat5(3, 3);
    mat2.setValue(0, 0, 5);
    mat3.setValue(0, 0, 25);
    mat4 = mat2.addMatrix(mat3);

    mat5 = mat2.mulMatrix(mat3);

    mat4.display();

    return 0;
}