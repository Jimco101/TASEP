#include<iostream>
#include <fstream>
#include<math.h>

using namespace std;

int main()
{
	int N=10, timer=1000;
	int Lattice[N];
	float rng[10000];
	for (int i = 0; i < N; i++ ) 
	{		
		Lattice[i]=0;
   	} 
   	for (int i = 0; i < N; i++ ) 
	{		
		cout<<Lattice[i]<<" ";
   	} 
   	
   	string line_;
   	ifstream myfile;
	ifstream file_("rngMod.txt");
	if(file_.is_open())
	{
		for(int i = 0; i < 10000; i++)
		{
			file_ >> rng[i];
		}
		file_.close();
	}
	
	for(int i = 0; i < 10000; i++)
	{
		cout<< rng[i]<<endl;
	}
}
