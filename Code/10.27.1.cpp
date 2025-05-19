#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    srand(static_cast<unsigned>(time(NULL)));
    for (int i=0;i<20;++i){
        int randomNum=rand()%101;
        int quotient=randomNum/8;
        int remainder=randomNum%8;
        printf("%d %d %d\n",randomNum,quotient,remainder);
    }
    return 0;
}
