#include <iostream>
 
using namespace std;

int main()
{
	int num; 

	cout << "Enter a positive integer in the range:";
	cin >> num;

	for(int k=1 ; k <= num ; k++){ //k�Ψӱ���ϥΪ̿�J���ܼ�
	for (int i=1 ; i <= num-k ; i++ ){ //i����space���ƥ�
		cout << " ";
	}
	for (int j=1 ; j <= k ; j++ ){ //�Ψӱ���star���ƥ�
		cout << "*";
	}
	cout << endl;
	}
	cout << endl;
	system("pause");
}