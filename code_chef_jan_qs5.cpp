#include<bits/stdc++.h>
using namespace std ;

int main () 
{
	
	int t ;
	cin >> t ;
	
	while (t--) 
	{
		
		int n , k ;
		cin >> n >> k ;
		
		long int A[n] ;
		for (int i=0 ; i<n ; i++) 
			cin >> A[i] ;
			
		if (accumulate(A,A+n,0) < 2*k) 
			cout << -1 << endl ;
			
		else 
		{
			sort (A,A+n) ;
			
			vector<long int>v1 ;
			vector<long int>v2 ;
			
			v1.push_back(A[n-1]) ;
			v2.push_back(A[n-2]) ;
			
			for (int i=n-3 ; i>=0 ; i--) 
			{
				if (accumulate(v1.begin(),v1.end(),0) <= accumulate(v2.begin(),v2.end(),0) && accumulate(v1.begin(),v1.end(),0) < k) 
					v1.push_back (A[i]) ;
					
				else if (accumulate(v2.begin(),v2.end(),0) < k)
					v2.push_back (A[i]) ;
	 		}
	 		
	 		cout << (v1.size() + v2.size()) << endl ;
	   }
	}
	
	return 0 ;
}
