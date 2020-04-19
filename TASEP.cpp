#include<iostream>
#include <fstream>
#include<math.h>

using namespace std;

int main()
{
	int N=10;
	int Lattice[N];
	for (int i = 0; i < N; i++ ) 
	{		
		Lattice[i]=0;
   	} 
   	for (int i = 0; i < N; i++ ) 
	{		
		cout<<Lattice[i]<<" ";
   	} 
   	ofstream myfile;
	myfile.open ("rng.txt");
	
}
