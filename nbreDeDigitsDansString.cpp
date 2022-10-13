/******************************************************************************

calcul du nombre de digit sur une chaine donnée

*******************************************************************************/
#include <stdio.h>
#include <cctype>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

// we have to include <cctype.h> to use the isdigit() function from c library
int nbrDigit(string s)
{
    char c = ' ';
    int cpt = 0 ; // cpt is the number of digits
    for(int i = 0 ; i < s.size() ; i++)
    {
        c = s[i];
        if( isdigit(c) ) { cpt++; }
    }
    return cpt;
}


int main()
{
   // int i = nbrDigit("r56a5");
  //  cout << "nbre digit = " << i << endl;
  
  vector<int> t = {5 , 8 , 2 , 9 , 0};
  
  int  n = t.size() ,  temp = 0;
  
  bool tri = false;
  
  

  
  while( tri == false )
  {
      tri = true;
      
      for(int i = 0 ; i < n - 1 ; i++)
      {
          if(t[i] > t[i+1])
          {     
              tri = false;
              
              temp = t[i];
              t[i] = t[i+1];
              t[i+1] = temp;  
              
              // affichage du changement
              cout << t[0] << "  " << t[1] << "  " << t[2] << "  " << t[3] << "  " << t[4] << endl;
          }
          
      }
      
  }
  
  // affichage
  for(int j = 0 ; j < n ; j++)
  {
      cout << "t(" << j << ") = " << t[j] << endl;
  }
  

    return 0;
}
