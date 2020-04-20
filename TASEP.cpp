#include<iostream>
#include <fstream>
#include<math.h>

using namespace std;

int main()
{
	int N=10, timer=900, j=0, k=0;
	float q=0.5, p=0.5;
	int Lattice[N], NewLat[N];
	float rng[10000];
	for (int i = 0; i < N; i++ ) 
	{		
		Lattice[i]=0;
   	} 
//   	for (int i = 0; i < N; i++ ) 
//	{		
//		cout<<Lattice[i]<<" ";
//   	} 
   	
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
	while(k<timer)
	{
		if(p > rng[j] && Lattice[1] == 0)
		{
			Lattice[0]=1;
		}
		
		for(int i = N; i >= 0; i--)
		{
			if(q > rng[j] && Lattice[i]==1 && Lattice[i+1] == 0)
			{
				NewLat[i+1]=1;
				NewLat[i]=0;
			}
			else
			{
				NewLat[i]=Lattice[i];
			}

			j++;
		}
		
		for (int i = 0; i < N; i++ ) 
		{		
			Lattice[i]=NewLat[i];
	   	}
		
		if(q > rng[j] && Lattice[N] == 1)
		{
			Lattice[N]=0;
		}
		
		for (int h = 0; h < N; h++ ) 
		{		
			cout<<Lattice[h]<<" ";
	 	} 
	 	cout<<endl;
		k++;
	}
}

