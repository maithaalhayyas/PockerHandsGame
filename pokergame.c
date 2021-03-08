
#include <stdio.h> /* printf */
#include <stdlib.h>

#include <vector>

#include <math.h>
#include <map>  
#include <queue>
#include<algorithm>
using namespace std;

char values[] = "23456789TJQKA";
/* can be 0, 1, or 2 */
struct isValue
{
isValue(int x): _x(x){};
bool operator()(std::pair<int,int> v)
{
return v.second == _x;
}

int _x;
};

//Card Description
class card
{
public:
char suit;
int value;

};

//Comparison between two cards
bool compareCards(const card& c1, const card&c2)
{
return c1.value < c2.value;//True False
}


/* check for flush */
/* check for straight */
int isStraightFlush(vector<card> Hand)
{
int IValue = Hand[0].value;
char ISuit = Hand[0].suit;
for (int i=1; i<5; i++) if (Hand[i].value != IValue+i || Hand[i].suit != ISuit) return -1;
return Hand[4].value;
}
