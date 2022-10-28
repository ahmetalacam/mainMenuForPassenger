#include <iostream>
#include <string>
using namespace std;


int main()
{
	
	string a[5][10] = { {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"}};
	int kma[10][10] ={ {0,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10}};
	
	

/*
	for ( int i = 0; i < 1; i++ )
	{
		for ( int j = 0; j < 10; j++ ) 
		{
			for(int k = 0; k<1; k++)
			{
				for(int l = 0; l<10; l++)
				{
					      	cout << "[" << "a" << "][" << j << "]: ";
        					cout << a[i][j]<<" = "<<kma[k][l]<<" km"<<endl;
				}
			}

		}
	}
*/	
	
	cout<<"\n";
	
	
		for ( int j = 0; j < 10; j++ ) 
		{
			
				for(int l = 1; l<10; l++)
				{
					cout << "[" << "b" << "][" << j << "]: ";
        			cout << a[1][j]<<" = "<<kma[1][l]<<" km"<<endl;
				}

      	
		}
	
	
	
	
	
	
	return 0;
}
