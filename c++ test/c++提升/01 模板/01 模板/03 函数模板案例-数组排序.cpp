//#include<iostream>
//using namespace std;
//
////����������
//// ���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
//// �������Ӵ�С�������㷨Ϊѡ������
//// �ֱ�����char�����int������в���
//
//template<typename T>
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void mySort(T arr[],int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int index = i;
//		for (int j = i + 1; j < len; j ++ )
//		{
//			if (arr[index] < arr[j])
//			{
//				index = j;
//			}
//		}
//		if (index != i)
//		{
//			//��������
//			/*T temp = arr[i];
//			arr[i] = arr[index];
//			arr[index] = temp;*/
//			myswap(arr[index], arr[i]);
//		}
//	}
//}
//
//template<typename T>
//void show_Array(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����char����
//	char charArr[] = "acfebd";
//	int len = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, len);
//	show_Array(charArr, len);
//}
//
//void test02()
//{
//	//����int����
//	int intArr[] = { 1,3,5,2,7,4,9,8 };
//	int len = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, len);
//	show_Array(intArr, len);
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}