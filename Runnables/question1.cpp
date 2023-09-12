#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>


using namespace std;

struct Edge {
    int u, v, w;
};

int main() {
    vector<Edge> edges;
    clock_t st,end;
	double etime;
	st = clock();
	ifstream inputFile("source.txt"); 
    
    if (!inputFile.is_open())
	{
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }
    int n, m;
    
    string line;
    while (getline(cin, line)) 
	{
        if(line[0]=='c') 
		{
            continue;
        } 
		else if(line[0]=='p') 
		{
 
            char problem_type[3];
            sscanf(line.c_str(), "%s %d %d", problem_type, &n, &m);
        } 
		else if (line[0] == 'a') 
		{
            int u, v, w;
            sscanf(line.c_str(), "a %d %d %d", &u, &v, &w);
            edges.push_back({u, v, w});
        }
    }
    inputFile.close();
	
		
	end = clock();
	etime = (double)(end-st)/CLOCKS_PER_SEC;
	cout<<"time is "<<etime<"\n";
    return 0;
}

