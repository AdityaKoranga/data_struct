//     c) A method to print a pattern of letters as follows:
// 1. If the parameter c is 'A', then the output is 'A'.
// 2. For other values of c, the output consists of three parts:
//      -- the output for the previous letter (c-1);
//      -- followed by the letter c itself;
//      -- followed by a second copy of the output for the previous letter.
// There is no '\n' printed at the end of the output.
//  Example output:
//  letters('D') will print : ABACABADABACABA

#include <bits/stdc++.h>
using namespace std;
void print(char ch)
{
    cout << ch;
    for (int i = 65; i < int(ch); i++)
    {
        print(i);
    }
}

void funcLoop(char ch, char ch1 = 'A')
{
    for (int i = 65; i <= int(ch); i++)
    {
        print(char(i));
    }
}
int main()
{

    funcLoop('D');
    return 0;
}