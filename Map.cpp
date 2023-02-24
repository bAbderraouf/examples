/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    
    // declarer une map et un iterator
    
    map<string , int > dico;
    map<string , int>::iterator it;
    int i = 0;
    
    // remplir la map
    
    dico["age"] = 31;
    dico["age"] = 44;
    dico["naissance"] = 1990;
    
    // afficher les elemements d'une map
    
    for(it = dico.begin() , i = 0 ; it != dico.end() ; i++, it++)
        cout << i << " - dico(" << it->first << ") = " << it->second << endl;


    // chercher un elemement dans une map
    
    it = dico.find("naissancee");
    if( it != dico.end() )
    {
        cout << it->first << "=> " << it->second  << endl;
    }
    else
        cout << "not found " << endl;
    return 0;
}
