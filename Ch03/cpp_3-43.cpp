#include<iostream>

using namespace std;

int main()
{
    int ia[3][4] =  {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };
    //range for
    for (const int (&row)[4] : ia)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
        cout << endl;
        
    }
    
    //for second
    for (size_t i = 0; i < 3; i++)
    {
        /* code */
        for (size_t j = 0; j < 4; j++)
        {
            /* code */
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    
    //pointers
    for (int (*row)[4] = ia; row != ia + 3; row++)
    {
        /* code */
        for (int *col = *row; col != *row + 4; col++)
        {
            /* code */
            cout << *col << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}