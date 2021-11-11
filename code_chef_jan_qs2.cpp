#include<bits/stdc++.h>
using namespace std;

int main () 
{
	int t ;
	cin >> t ;
	
	while (t--) 
	{
		long int n ;
		cin >> n ;
		
		string str , ans ;
		cin >> str ;
		
		for (int i=0 ; i<str.length() ; i+=4) 
		{
			
            pair<int,int>p ;
            p.first = 1 ;
            p.second = 16 ;
            
            for (int j=0 ; j<4 ; j++) 
            {
                int mid = (p.first + p.second) / 2 ;
                       
                if (str[i+j] == '0')
                    p.second = (mid) ;
                    
                else 
                    p.first = (mid+1) ;
            }
            ans.push_back (char (p.first + 96)) ;
		}
		
		for (int i=(ans.length()-1) ; i>=0 ; i--)
            cout << ans[i] ;
            
        cout << endl ;
	}
	return 0 ;
}
