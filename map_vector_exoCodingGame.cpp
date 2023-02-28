/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
#include <vector>


using namespace std;

int main()
{
    /*
    // declarer une map et un iterator
    
    map<string , int > dico;
    map<string , int>::iterator it;
    int i = 0;
    
    // remplir la map
    
    dico["age"] = 31;
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
        
     */   
        
    // vector<vector>
    
    vector<string> stocks(3);
    stocks.push_back("javel");
    stocks.push_back("sanibon");
    stocks.push_back("grizil");
    
    vector<vector<float>> prices;
    prices.push_back(vector<float> (3)); // ajout de la 1ere ligne
    prices.push_back(vector<float> (3)); // ajout de la 2eme ligne
    
    
    vector<float> valMoy(3,0);  // stocker les valeur moyennes de chq produit par index;
    

    
    // remplissage
    
    for(int i = 0 ; i < 2 ; i++) // nbre de lignes
    {
        for(int j = 0 ; j < 3 ; j++) // nbre de colonnes
        {   
            cout << "val .." << endl;
            cin >> prices[i][j];
            
        }
    }
    
    
    
    // affichage + remplissage de la map
    string titre;
    
    for(int i = 0 ; i < 2 ; i++)
    {
        cout << endl;
        
        for(int j = 0 ; j < 3 ; j++)
        {   
            //cout << "prices[" << i << "][" << j << "] =" << prices[i][j] << "\t";
            cout << prices[i][j] << "\t";
            
            // remplissage de la map
           // titre = stocks[j];
        //    prixMoy[titre] = 

        }
    }
    
    
    // calcul des val moyennes
    float maxColonne = 0;
    for(int j = 0 ; j < 3 ; j++) // nbre de lignes
    {
        maxColonne = 0;
        for(int i = 0 ; i < 2 ; i++) // nbre de colonnes
        {   
            if(prices[i][j]  > maxColonne )
                maxColonne = prices[i][j];

        }
        valMoy[j] = maxColonne;
    }
    
    
    // affichage de valMoy
    cout << "\nvalMoy[] = ";
    for(int i = 0 ; i <3 ; i++)
    {
        cout << valMoy[i] << "\t";
    }
    

    // affichage du resultat
    
    return 0;
    
}
