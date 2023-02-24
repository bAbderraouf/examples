/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

class RemplirRand
{
    public :
    int operator()() const{
        return rand() % 10;
    }

};

int main()
{
    vector<int> vect(100,0);
    vector<int>::iterator it = vect.begin();
    
    RemplirRand f;
    generate(vect.begin() , vect.end() , f);
    
    int i = 0;
    
    for(it ; it != vect.end(); it++)
    {
       // *it = f();
        cout<< "vect(" << i <<")= " << *it << endl;
        i++;
    }
   
   cout << "le nombre de 5 est = " << count(vect.begin(), vect.end(), 5) << endl;

    return 0;
}
