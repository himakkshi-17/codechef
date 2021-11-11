#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t ;
	cin >>t ;
	
	while (t--) 
	{
	    int n , k ;
	    cin >> n >> k ;
	    
	    long int A[n] ;
	    for (int i=0 ; i<n ; i++) 
	        cin >> A[i] ;
	       
	    sort (A,A+n) ;
	    
	    vector <long int > v1 ;
	    vector <long int > v2 ;
	    
	    int flag = 0 ;
	    
	    for (int i=(n-1) ; i>=0 && flag == 0; i-=2) 
	    {
	        v1.push_back (A[i]) ;
	        
	        if (accumulate(v1.begin() , v1.end() , 0) >= k)
	        {
	            flag = 1 ;
	        }
	    }
	    
	    for (int i=(n-2) ; i>=0 && flag == 1 ; i-=2) 
	    {
	        v2.push_back (A[i]) ;
	        
	        if (accumulate(v2.begin() , v2.end() , 0) >= k)
	        {
	            flag = 2 ;
	        }
	    }
	    
	    if (flag == 2)
	           cout << (v1.size() + v2.size() ) << endl ;
	           
	    else 
	           cout << -1 << endl ;

	}
	
	return 0;
}
