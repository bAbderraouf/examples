/*****************************************************************************

test d'amazon 

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void f(string str );

int main()
{
    string str("salam alikom Hello World goutlek matefhemch\nmoi c raouf yaw\nettoi?\naya salam Hello");
    f(str);

    return 0;
}


void f(string str )
{
    //creer une copy de str
    string s = str;
    
    // recuperer chaque ligne dans un vecteur
    vector<vector<string>> words;
    vector<vector<string>>::iterator it1;
    vector<string>::iterator it2;
    
    string line = "" , word = "";
    
    int lastLineIdx = 0  , lastWordIdx = 0;
    int ecart = 0 , y = 0;  // nbre de lignes
    
    // map 
    map<string,string> dico;
    map<string,string>::iterator it;
    
    for(int i = 0 ; i < s.size() ; i++ )
    {
 
        if(s[i] == '\n' || i+1 == s.size())
        {
            ecart = i - lastLineIdx;
            if(i+1 == s.size())
                ecart = i - lastLineIdx + 1;
            line = str.substr(lastLineIdx , ecart) + " ";
            
            words.push_back(vector<string>(0));  // on ajoute une linge de 0 cases strings 
            // cout << "line : " << line << endl;
            lastLineIdx = i+1;
            lastWordIdx = 0;

            for(int j = 0 ; j< line.size() ; j++)
            {
                if(line[j]==' ' )
                {
                    word = line.substr(lastWordIdx , j - lastWordIdx);
                    // cout << "   word = " << word << "( j=" << j << " ,lastWordIdx = "<< lastWordIdx << ", y = "<< y << ")"<< endl;
                    words[y].push_back(word);
                    lastWordIdx = j+1;
                }
            }
            y++;
        }
    }
    
    // afficher lines (vector)
    for( it1 = words.begin() ; it1 != words.end() ; it1++)
    {
        for( it2 = it1->begin() ; it2 !=it1->end() ; it2++)
        {
            //cout <<"word(i) ="<< *it2 << endl;
           // cout << "";
        }
    }

    for( int i = 0 ; i <words.size(); i++)
    {
        for( int j =0 ; j < words[i].size() ; j++)
        {
           // cout <<"word(" << i << "," << j << ") = "<< words[i][j] << endl;
            
            // remplissage de la map
            // check si le mot existe deja
            
            it = dico.find(words[i][j]);
            
            if(it != dico.end())    // existe deja
            {
                dico[words[i][j]] += "," + std::to_string(i+1); // +1 pour demarrer de 1
            }
            else
            {
                dico[words[i][j]] = std::to_string(i+1);    
            }
            
            
        }
    }
    
    // affichage des resultats:
    
    for(it = dico.begin() ; it != dico.end() ; it++)
    {
        cout << it->first  << " : " << it->second << endl;
    }

}