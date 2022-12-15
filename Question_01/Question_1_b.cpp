//     b) This question involves a game with teddy bears. The game starts when I give you some bears. You can then give back some bears, but you must follow these rules (where n is the number of bears that you have): 
//     1. If n is even, then you may give back exactly n/2 bears. 
//     2. If n is divisible by 3 or 4, then you may multiply the last two digits of n and give back this many bears. (By the way, the last digit of n is n%10, and the next-to-last digit is ((n%100)/10). 
//     3. If n is divisible by 5, then you may give back exactly 42 bears. 
// The goal of the game is to end up with EXACTLY 42 bears. For example, suppose that you start with 250 bears. Then you could make these moves: 
// --Start with 250 bears. 
// --Since 250 is divisible by 5, you may return 42 of the bears, leaving you with 208 bears. 
// --Since 208 is even, you may return half of the bears, leaving you with 104 bears. 
// --Since 104 is even, you may return half of the bears, leaving you with 52 bears. 
// --Since 52 is divisible by 4, you may multiply the last two digits (resulting in 10) and return these 10 bears. This leaves you with 42 bears. 
// --You have reached the goal! 
// The function returns true if it is possible to win the game starting with n bears and false otherwise.

#include <bits/stdc++.h>
using namespace std;
#include <ios>

bool gameWinOrNot(int no_of_bears)
{
    if (no_of_bears == 42)
    {
        return true;
    }
    if (no_of_bears > 42)
    {
        if (no_of_bears % 2 == 0)
        {
            return gameWinOrNot(no_of_bears / 2);
        }
        else if (no_of_bears % 3 == 0 || no_of_bears % 4 == 0)
        {
            int p = no_of_bears % 10;
            int q = (no_of_bears % 100) / 10;
            return gameWinOrNot(no_of_bears - p * q);
        }
        else if (no_of_bears % 5 == 0)
        {
            return gameWinOrNot(no_of_bears - 42);
        }
    }
    return false;
}
int main()
{
    int no_of_bears;
    cout << "Enter the number of bears:";
    cin >> no_of_bears;

    cout << "The possibility to left with 42 bears is :" << boolalpha << gameWinOrNot(no_of_bears);
    return 0;
}