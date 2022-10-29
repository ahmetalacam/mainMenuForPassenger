#include <iostream>
#include <string>
using namespace std;

/*		0	1	2	3	4	5	6	7	8	9
hat		a	b	c	d	e	f	g	h	ý	j
0	a  	-  25  3o
	
1	b
	
2	c
	
3	d
	
4	e
	
5	f
	
6	g
	
7	h
	
8	ý
	
9	j
*/

int main()
{
	
	string a[5][10] = { {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"}};
	int kma[10][10] ={ {1,2,3,4,5,6,7,8,9,14},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,19},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,18,10}};
	
	for ( int i = 0; i < 1; i++ )
	{
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "a" << "][" << j << "]: ";
        cout << a[i][j]<<" = "<<kma[0][j]<<" km"<<endl;
		}
	}
	cout<<"\n";
	
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "b" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[1][j]<<" km"<<endl;
		}
	cout<<"\n";
	
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "c" << "][" << j << "]: ";
        cout << a[2][j]<<" = "<<kma[2][j]<<" km"<<endl;
		}
		cout<<"\n";
		
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "d" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[3][j]<<" km"<<endl;
		}
		cout<<"\n";
		
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "e" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[4][j]<<" km"<<endl;
		}
		cout<<"\n";
		
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "f" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[5][j]<<" km"<<endl;
		}
		cout<<"\n";
		
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "g" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[6][j]<<" km"<<endl;
		}
		cout<<"\n";
		
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "h" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[7][j]<<" km"<<endl;
		}
		cout<<"\n";
		
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "i" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[8][j]<<" km"<<endl;
		}
		cout<<"\n";
		
	
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "j" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[9][j]<<" km"<<endl;
		}

	
	return 0;
}
