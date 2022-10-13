/******************************************************************************

calcul de la mediane d'un merge de 2 tableaux (leetcode)

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
               
        // merger les tableaux 
        
        int m = nums1.size() , n = nums2.size() , i = 0;
        vector<int> merged(n+m);
         
        
        for(i = 0 ; i < n+m ; i++)
        {
            if(i < m)
               merged[i] = nums1[i];
            else
               merged[i] = nums2[i-m];  
        }
        
        
        
        // tri du tableau
        
        bool tri = false;
        int temp = 0;
        
        while(tri == false)
        {
            tri = true;
            
            for(i = 0 ; i <n+m-1 ; i++)
            {
                if(merged[i] > merged[i+1])
                {
                    temp = merged[i];
                    merged[i] = merged[i+1];
                    merged[i+1] = temp;
                    tri = false;
                }
            } 
        }
        
        
        
        // afficher le tableau trié
        
        /*
        for(i = 0 ; i <n+m ; i++)
            {
                cout << "t(" << i <<  ") = " << merged[i] << endl;
            } 
            
        */
        
        // chercher la mediane
        int idxMedian = 0 ;
        int deuxValeurs = false;
        
        if( (n+m)%2 != 0 )
            idxMedian = (n+m)/2 ;
        else
        {
            idxMedian = (n+m)/2 - 1;
            deuxValeurs = true;
        }
        

        if(deuxValeurs == true)
        {
            return ((merged[idxMedian] +  merged[idxMedian + 1])/ 2. );
        }
        else
            return merged[idxMedian];
            

        
    }

int main()
{
    vector<int> t1 = {1 , 2 , 4};
    vector<int> t2 = {5, 3};
    
    
    cout<<"median = " << findMedianSortedArrays(t1,t2) << endl;

    return 0;
}