/**********************************************************************************/
/*  problem:bin-packing problem                                                   */
/*  �����j�Ǹ�u 2c �d�a�� 1013353                                                  */
/**********************************************************************************/

#include <iostream>
using namespace std;

#define nBox 3 //�c�l���h�֭�
#define nGood 3 //���~���h�֪�

int main()
{
	float fGoodsSize[nGoods]; //�ŧi�C�@�Ӫ��~�j�p  
	float fBox[nBox];
	int nBoxIn[nBox][nGoods]; //�����c�l�ݩ���@��

	int i = 0, j = 0;

	//��J���
	cout << "��J Good size : " << endl;

	for (i = 0; i != nGoods; i++)
		cin >> fGoodsSize[i];

	float fBoxSize; //�ŧi�c�l�j�p
	cout << "��JBox size : " << endl;
	cin >> fBoxSize;

	// �i�DfBox��array size
	for (i = 0; i != nBox; i++)
		fBox[i] = fBoxSize; 

	int nGoodsNo = 1; //���~�s����l��

	//�᪫�~�i�c�l
	for (i = 0; i != nGoods; i++)
		for (j = 0; j != nBox; j++)
		{
			if (fGoodsSize[i] <= fBox[j]) // ���~�j�p��c�l�j�p�٤p�ε���� ,��o�i�h,�ҥH�s�J
			{
				fBox[j] -= fGoodsSize[i]; //�c�lSize - ���~Size
				nBoxIn[j][i] = nGoodsNo; //�������~�k�ݩ���@�ӽc�l
				nGoodsNo++; //���~�s��+1
				break;
			}
	}

	//�����ϥΦh�ֽc�l
	int nUseBoxCount = 0; 
	for (i = 0; i != nBox; i++)
	if (fBox[i] != fBoxSize)
		++nUseBoxCount;

	//�⵲�G�L�X��
	cout << "�ϥνc�l�� : " << nUseBoxCount << endl;

	for (i = 0; i != nBox; i++)
	{
		cout << "�c�l" << (i + 1) << " �ˤF���~ :";
		for (j = 0; j != nGoods; j++)
		{
			if (nBoxIn[i][j] > 0)
			{
				cout << " " << nBoxIn[i][j];
			}
		}
		cout << endl;
	}
	system("pause");
}