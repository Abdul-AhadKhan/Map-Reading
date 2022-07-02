//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//class queue {
//	int* ptr = 0;
//	int i = -1;
//	int i_alt = 0;
//	int* alt = 0;
//public:
//	queue(int size = 100)
//	{
//		ptr = new int[size];
//		alt = ptr;
//	}
//
//	void push(int data)
//	{
//		i++;
//		ptr[i] = data;
//	}
//
//	int pop()
//	{
//		if (!(isempty()))
//		{
//			int num = 0;
//			num = alt[i_alt];
//			i_alt++;
//			return num;
//		}
//		else
//		{
//			cout << "Queue is empty " << endl;
//			return -1;
//		}
//	}
//
//	int peek()
//	{
//		if (!isempty())
//		{
//			int num = alt[i_alt];
//			return num;
//		}
//		else
//		{
//			cout << "Queue is empty " << endl;
//			return -1;
//		}
//	}
//
//	bool isempty()
//	{
//		return (i == -1);
//	}
//};
//int CharToInt(char ch)
//{
//	return static_cast<int>(ch) - 48;
//}
//int main()
//{
//	fstream fin("demo.txt");
//	char ch;
//	int totalRows = 0, totalCols = 0;
//	fin >> totalRows >> totalCols;
//
//	int** arr = new int* [totalRows];
//
//	for (int i = 0; i < totalRows; i++)
//	{
//		arr[i] = new int[totalCols];
//		for (int j = 0; j < totalCols - 1; j++)
//		{
//			fin >> ch;
//			arr[i][j] = CharToInt(ch);
//			fin >> ch;
//		}
//		fin >> ch;
//		arr[i][totalCols - 1] = CharToInt(ch);
//	}
//
//	fin.close();
//
//	queue q1;
//	queue q2;
//
//	bool movement = false;
//	bool num = false;
//
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	
//	count++;
//	q1.push(i);
//	q2.push(j);
//
//	while (!(i == (totalRows - 1) && j == (totalCols - 1)) && !num)
//	{
//		if((i + 1 < (totalRows)) && arr[i + 1][j] == 1  )
//		{
//			i++;
//			q1.push(i);
//			q2.push(j);
//			count++;
//			movement = true;
//		}
//
//		else if((j + 1 <= (totalCols - 1)) && arr[i][j + 1] == 1  )
//		{
//			j++;
//			q1.push(i);
//			q2.push(j);
//			count++;
//			movement = true;
//		}
//	
//		else if((j - 1 >= 0) && (arr[i][j - 1] == 1  ))
//		{
//			arr[i][j] = 0;
//			j--;
//			q1.push(i);
//			q2.push(j);
//			count++;
//			movement = true;
//		}
//
//		else if((i - 1 >= 0) && (arr[i - 1][j] == 1  ))
//		{
//			arr[i][j] = 0;
//			i--;
//	    	q1.push(i);
//			q2.push(j);
//			count++;
//			movement = true;
//		}
//
//		if(!movement)
//		{
//			num = true;
//			cout << "No way home !!!" << endl;
//		}
//
//		movement = false;
//	}
//
//	if (!num)
//	{
//		cout << "Way to petrol station is " << endl;
//		for (int k = 0; k < count; k++)
//		{
//			cout << "( " << q1.pop() << " , " << q2.pop() << " ) " << endl;
//		}
//	}
//	system("pause");
//	return 0;
//
//}
//
