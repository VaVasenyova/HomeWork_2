#include <iostream>;


void Process(int m[], int* Sum, int length, int width)
{
	for (int i = 0; i < length-1; ++i) 
	{
	Sum[i] = 0;
		if (m[i]==0)
		{ 
			while (m[i+1] != 0) 
			{
				Sum[i] += m[i+1];
			}
		}
		for (int j = 0; j < length; ++j)
		{
			std::cout << Sum[i] << "; ";
		}
		std::cout << std::endl;

	}

}

void Change(int a, int b)
{
	std::cout << "variable 1 - " << a << "; variable 2 - " << b << std::endl;
	int temp = b;
	b = a;
	a = temp;
	std::cout << "variable 1 - " << a << "; variable 2 - " << b << std::endl;
}

void RanDomiZe(double array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % 201 + (-64);
		std::cout << array[i] << "; ";
	}
}

template<class Type>
void printArr(Type array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << array[i] << "; ";
	}
	std::cout << std::endl;
}

template<class Type>
void BubbleSort(Type array[], int size)//bubble sort
{
	int count = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] < array[j + 1])//if the item before is smaller
			{
				Type temp = 0;
				temp = array[j];
				array[j] = array[j + 1];//we change items' places
				array[j + 1] = temp;
				count = count + 1;
			}
		}
	}

	printArr(array, size);//print array
	std::cout << count << std::endl;
}


int main()
{
	//task 1
	//Напишите функцию swap, которая меняет значения переданных аргументов
	//Например, после вызова swap(a, b) в переменной a должно оказаться значение b, 
	//а в переменной b значение a
	std::cout << "task 1" << std::endl;

	int a = 7;
	int b = 4;
	Change(a, b);
	std::cout << std::endl;

	//task 2
	//Дано число n. Требуется создать массив a из n целых чисел и указатели на первый pa 
	// и последний pla элементы этого массива. 
	//Нужно поменять с их помощью первый и последний элементы массива местами и вывести получившийся массив.
	std::cout << "task 2" << std::endl;

	int n;
	std::cout << "Write down the length of array" << std::endl;
	std::cin >> n;

	double* array = new double[n];
	RanDomiZe(array, n);
	std::cout << std::endl;

	double FirEl = array[0];
	double LasEl = array[n - 1];
	array[n - 1] = FirEl;
	array[0] = LasEl;

	printArr(array, n);

	delete[] array;
	std::cout << std::endl;

	//task 3
	//Дан указатель: double **p = 0; Выполните следующие задания (решения можно оформлять внутри функции main): 
	//*создайте конструкцию, изображенную на рисунке;
	//*выведите число, указанное в квадратике, на экран;
	//*после этого удалите все динамические объекты.
	std::cout << "task 3" << std::endl;

	double** p = 0;
	*(*(p = new double*) = new double) = 2;
	std::cout << **p << std::endl;
	
	delete* p;
	delete p;
	std::cout << std::endl;

	//task 4
	//Ввести массив, состоящий из 12 элементов действительного типа. 
	//Расположить элементы в порядке убывания. Определить количество происшедших при этом перестановок.
	std::cout << "task 4" << std::endl;

	double arr4[12];
	RanDomiZe(arr4, 12);
	std::cout << std::endl;
	printArr(arr4, 12);


	BubbleSort(arr4, 12);//do the insertion sort
	std::cout << std::endl;

	//task 5
	// Переписать элементы одномерного массива в другой массив такого же размера следующим образом: 
	// сначала должны идти все отрицательные элементы исходного массива, а затем все остальные. 
	// Использовать только один проход по исходному массиву. 
	// Сохранить тот порядок среди положительных и среди отрицательных элементов в результирующем массиве, 
	// который был в исходном массиве. 
	// Применить данный алгоритм к трем заданным массивам.
	std::cout << "task 5" << std::endl;

	int n5;
	std::cout << "Write down the length of array" << std::endl;
	std::cin >> n5;

	double* FirsArr = new double[n5];
	RanDomiZe(FirsArr, n5);
	std::cout << std::endl;

	double* SecArr = new double[n5];
	int i, j, k;

	for (i = 0, j = 0, k = n5-1; i < n5; ++i) 
		{
			if (FirsArr[i] < 0) 
			{
				SecArr[j++] = FirsArr[i];
			}
			else {
				SecArr[k--] = FirsArr[i];
			}
		}


	for (i = n5, j = n5-1; i < j; ++i, --j) 
	{
		std::swap(SecArr[i], SecArr[j]);
	}
	printArr(FirsArr, n5);
	printArr(SecArr, n5);
	
	delete[] FirsArr;
	delete[] SecArr;
	std::cout << std::endl;


	//task 6
	//Ввести массив, состоящий из 14 элементов действительного типа. 
	//Поменять местами первую половину со второй. Определить количество произведенных при этом перестановок.
	std::cout << "task 6" << std::endl;

	double arr6[14];
	RanDomiZe(arr6, 14);
	std::cout << std::endl;

	printArr(arr6, 14);

	for (int i = 0; i < 7; i++)
	{
		double t = arr6[i];
		arr6[i] = arr6[7 + i];
		arr6[7 + i] = t;
	}
	printArr(arr6, 14);

	std::cout << std::endl;

	//task 7
	//Определить количество локальных минимумов в заданном числовом	массиве. 
	//(Локальный минимум в числовом массиве – это последовательность трех рядом стоящих чисел, 
	//в которой среднее число меньше стоящих слева и справа от него).
	std::cout << "task 7" << std::endl;

	int n7;
	std::cout << "Write down the length of array" << std::endl;
	std::cin >> n7;

	double* arr7 = new double[n7];
	RanDomiZe(arr7, n7);
	std::cout << std::endl;

	int kolvo = 0;

	for (int i = 0; i < n7-1; i++)
	{
		if (i == 0 && arr7[i] < arr7[i + 1])
		{
			kolvo++;
		}
		else if (i > 0 && i < n7-1 && arr7[i] < arr7[i - 1] && arr7[i] < arr7[i + 1])
		{
			kolvo++;
		}
		else if (i == n7-1 && arr7[i] < arr7[i - 1])
		{
			kolvo++;
		}
	}

	std::cout << "The number of local minimums =  " << kolvo << std::endl;
	delete[] arr7;

	std::cout << std::endl;

	//task 8
	//Дана матрица. Известно, что в каждой строке этой матрицы присутствуют два и только два нулевых элемента.
	//Для каждой строки матрицы подсчитать сумму элементов, заключенных между этими двумя нулями. 
	//Применить функцию, рассматривающую строки матрицы как одномерные массивы.
	std::cout << "task 8" << std::endl;

	int matrix[5][6] = { {1, 0, 5, 0, 4, 3}, {2, 0, 3, 4, 0, 4}, {1, 0, 4, 3, 2, 5}, {4,6,0,7,5,3}, {3,5,0,4,2,0} };
	int* Sum = new int[n];
	for (int i = 0; i < 5;i++)
	{
		Process(reinterpret_cast<int*>(matrix), Sum, 5, 6);
	}



	//task 10
	//Ввести два массива действительных чисел. 
	//Определить максимальные элементы в каждом массиве и поменять их местами
	std::cout << "task 10" << std::endl;
	
	int nA;
	std::cout << "Write down the length of array" << std::endl;
	std::cin >> nA;

	double* arrA = new double[nA];
	RanDomiZe(arrA, nA);
	std::cout << std::endl;


	int nB;
	std::cout << "Write down the length of array" << std::endl;
	std::cin >> nB;

	double* arrB = new double[nB];
	RanDomiZe(arrB, nB);
	std::cout << std::endl;

	double maxA = -1000000000;
	double maxB = -1000000000;

	for (int i = 0; i < nA; i++) 
	{
		if (arrA[i] > maxA) 
		{
			maxA = arrA[i];
		}
	}
	
	for (int j = 0; j < nB; j++) 
	{
		if (arrB[j] > maxB) 
		{
			maxB = arrB[j];
		}
	}

	for (int i = 0; i < nA; i++) 
	{
		for (int j = 0; j < nB; j++) 
		{
			if (arrA[i] == maxA && arrB[j] == maxB) 
			{
				double tmp = maxA;
				arrA[i] = arrB[j];
				arrB[j] = tmp;
			}
		}
	}
	std::cout << std::endl;

	printArr(arrA,nA);
	printArr(arrB,nB);

	delete[] arrA;
	delete[] arrB;
	std::cout << std::endl;


	//task 12
	//В матрице найти строки с максимальной и минимальной суммами элементов
	std::cout << "task 12" << std::endl;


	srand(time(NULL)); // создание генератора случайных чисел. 
	int n12 = 0;
	std::cout << "Write down the length of matrix" << std::endl;
	std::cin >> n12; 
	int** a12 = new int* [n12]; // массив указателей
	for (int i = 0; i < n12; i++)
	{
		a12[i] = new int[n12]; // элементы
	}

	for (int i = 0; i < n12; i++)
	{
		for (int j = 0; j < n12; j++)
		{
			a12[i][j] = rand() % 201 + (-64);
			std::cout << a12[i][j] << " "; 
		}
		std::cout << std::endl; 
	}

	
	int sum, max, min, num_min, num_max = 0;


	for (i = 0; i < n12; ++i)
	{
		sum = 0;
		for (j = 0; j < n12; ++j)
			sum += a12[i][j];
		if (i == 0 || sum < min)
		{
			min = sum;
			num_min = i;
		}
		if (i == 0 || sum > max)
		{
			max = sum;
			num_max = i;
		}

	}

	std::cout << "Min Sum (line): " << num_min << std::endl;
	std::cout << "Max Sum (line): " << num_max << std::endl;
	std::cout << std::endl;


	// Удаление массива
	for (int i = 0; i < n12; i++)
	{
		delete[]a12[i];
	}
	delete[] a12;



	//task 15
	//Треугольник Паскаля
	std::cout << "task 15" << std::endl;

	int Paskal[100];
	std::cout << "Write down the number of lines"<<std::endl;
	std::cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			Paskal[i] = 1;
		}
		else {
			Paskal[i] = 0;
		}
		
	}
	
	
	for (int j = 0; j <= n; j++)
	{
		for (i = j; i >= 1; i--)
			Paskal[i] = Paskal[i - 1] + Paskal[i];
		for (i = 1; i <= n; i++)
			if (Paskal[i])
				std::cout << "   " << Paskal[i];
		std::cout << std::endl;
	}


	return 0;
}