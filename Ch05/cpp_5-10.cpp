#include<iostream>

using namespace std;

int main()
{
    char ch;
    unsigned aCnt = 0,eCnt = 0,iCnt = 0, oCnt =0, uCnt = 0,otherCnt = 0;
    while (cin >> ch)
    {
        if(ch == 'a' || ch == 'A')
        {
            aCnt += 1;
        }
        else if(ch == 'e' || ch == 'E')
        {
            eCnt += 1;
        }
        else if(ch == 'i' || ch == 'I')
        {
            iCnt += 1;
        } 
        else if(ch == 'o' || ch == 'O')
        {
            oCnt += 1;
        }
        else if(ch == 'u' || ch == 'U')
        { 
            uCnt += 1;
        }
        else
        {
            otherCnt +=1;
        }
        
    }
    cout << "numbers of a is : " << aCnt << endl
         << "numbers of e is : " << eCnt << endl
         << "numbers of i is : " << iCnt << endl
         << "numbers of o is : " << oCnt << endl
         << "numbers of u is : " << uCnt << endl
         << "numbers of other is : " << otherCnt << endl;
    return 0;
}