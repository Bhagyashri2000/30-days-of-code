#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int total=0;
	    long long int season;
	    cin>>season;
	    long long int Q[season];
	    for(int j=0;j<season;j++)
	    {
	        cin>>Q[j];
	    }
	    vector<vector<long long int>> ep(season);  //vector to store no of episodes and respective time duration
	    
	    for(int j=0;j<season;j++)
	    {
	        long long int no_of_ep;
    	    cin>>no_of_ep;
    	    ep.push_back(std::vector<long long int>());
    	    ep[j].push_back(no_of_ep);
    	    for(int k=0; k<no_of_ep; k++)
            {
                long long int  temp;
                
                cin>>temp;
                ep[j].push_back(temp);
            }
           
	    }
	    
	    
        
        for(int j=0;j<season;j++)
        {
            long long int no_of_ep=ep[j][0];
            for(int k=1;k<=no_of_ep;k++)
            {
                if(k==1)
                {
                    total=total+ep[j][k];
                }
                else
                {
                    total=total+(ep[j][k]-Q[j]);
                }
            }
        }
        cout<<total<<endl;
	}
	return 0;
}
