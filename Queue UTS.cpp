#include <iostream>
#include <queue>
using namespace std;

void showq(queue<int> que)  
{
	queue<int> g = que;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
			}
			cout << '\n';
}

int main ()
{
	queue<int> nilai; 
	nilai.push(10);
	nilai.push(20);
	nilai.push(30);
	
	cout << "Nilai dari queue adalah: ";
	showq(nilai);
	
	cout << "\nukuran nilai : " << nilai.size();
	cout << "\nnilai depan : " << nilai.front();
	cout << "\nnilai belakang : " << nilai.back();
	
	cout << "\nnilai yang dihapus : ";
	nilai.pop();
	showq(nilai);
	
	return 0;
}
