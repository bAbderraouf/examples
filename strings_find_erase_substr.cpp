/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>


using namespace std;

int main()
{
    string s1 = "je m'appel raouf et toi ?";
    s1.append(" amine ?");
    cout << "s1=" << s1 << endl;
    size_t found = s1.find("raouf");
    cout<<"found="<< found <<endl;
    
    cout <<"npos = " << std::string::npos << endl;
    
    // vider la chaine et laisser une sous chaine
    
    string s2 = s1 , s3 = "" , s4 , s5;
    string::iterator it = s2.begin() + 11 ;

    cout << "s2 = " << s2 << endl;
    
    string s = "raouf" ; //le mot recherché
    size_t found2 = s2.find(s);
    int j = 0;

   if(found2 != string::npos)
    {
        /*
       // methode 1 
       for(it=s2.begin() + 1 ,  j =0 ; it < s2.begin() + found2 , j<11  ; j++ ,it++)
       {
            s2.erase(it-=j); // (il faut faire attention a it lors de l'erase)
            
       }
       
       // methode 2
       for(int i = 1 ; i <= found2 ; i++)
       {
           s2.erase(i-i , 1);
           cout << "s2 = " << s2 << endl;
       }
       
       // methode 3
       for(it=s2.begin() + found2 ; it != s2.end()  ; it++)
       {
            s4 = *it;
            s3.append(s4);
       }
       */
       // methode 4 meilleure
       s5 = s2.substr(found2 ,  s.size() );  // (index, taille)
    }
    
    cout << "s3 = " << s3 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s5 = " << s5 << endl;
    
    


    

    return 0;
}
