#include<iostream>
using namespace std;

bool isprime(unsigned int i){	//�@�ӧP�_�Ʀr�O���O��ƪ�function
	for(int k = 2 ; k < i ; k++){
		if( i % k == 0 )
			return false;
	}
		return true;
}
int main()
{
	int num;
	int counter = 0;//�p�ƥ�

	cout<< "Enter a positive integer: ";
	cin>> num;

	//�o��for loop�O�Q��"���X��"��]��
	for( int i = 2; i <= num; i++ ) //i�q2�}�l���L�@���ˬd
		if( isprime(i)  && num % i == 0) { //�p�G�oi�O���,�S�i�H���L�㰣,�L�N�O��]��
			counter++;
			}

	cout<< num<< " has "<< counter << " prime factors: ";

	//�o��for loop�O�Q��"������"��]��
	for(int i=2; i<=num ; i++){
		if(isprime(i) && num %i==0){
			cout << i << ", "; //�̫�@�ӹy��������.....
		}
	}

	cout << "\n";//�º鴫����[�n��,�S���N�q

	system("pause");
}