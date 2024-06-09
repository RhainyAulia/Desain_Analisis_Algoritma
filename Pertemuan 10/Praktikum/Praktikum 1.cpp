//Graph
//undirected edge 2 arah (,)
//directed edge 1 arah <,>
//weighted edge mempunyai value (,)=v

//array matrices based (0 = tidak ada edge, 1 = ada edge), di weighted isinya bobotnya
//berbasis linked list berfokus pada 1 objek jadi OOP

#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;

int graph[MAX][MAX];
int n;

void addEdge(int x, int y){
	graph [x][y] = 1;
	graph [y][x] = 1;
}

void displayGraph (){
	for (int i=0; i < nl i++){
		for (int j=0; j<n; j++){
			cout << graph [i][j] << " ";
		} cout << endl;
	} 
}

int main (){
	cout <, "Masukkan jumlah dimensi array : ";
	cin >> n;
	
	addEdge (0,1);
	addEdge (0,2);
	addEdge (1,2);
	addEdge (2,3);
	
	displayGraph();
	
	return 0;
}
