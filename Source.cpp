#include <iostream>;

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

void printArr(double array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << array[i] << "; ";
	}
	std::cout << std::endl;
}

void BubbleSort(double array[], int size)//bubble sort
{
	int count = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] < array[j + 1])//if the item before is smaller
			{
				double temp = 0;
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
	//Íàïèøèòå ôóíêöèþ swap, êîòîðàÿ ìåíÿåò çíà÷åíèÿ ïåðåäàííûõ àðãóìåíòîâ
	//Íàïðèìåð, ïîñëå âûçîâà swap(a, b) â ïåðåìåííîé a äîëæíî îêàçàòüñÿ çíà÷åíèå b, 
	//à â ïåðåìåííîé b çíà÷åíèå a
	std::cout << "task 1" << std::endl;

	int a = 7;
	int b = 4;
	Change(a, b);
	std::cout << std::endl;

	//task 2
	//Äàíî ÷èñëî n. Òðåáóåòñÿ ñîçäàòü ìàññèâ a èç n öåëûõ ÷èñåë è óêàçàòåëè íà ïåðâûé pa 
	// è ïîñëåäíèé pla ýëåìåíòû ýòîãî ìàññèâà. 
	//Íóæíî ïîìåíÿòü ñ èõ ïîìîùüþ ïåðâûé è ïîñëåäíèé ýëåìåíòû ìàññèâà ìåñòàìè è âûâåñòè ïîëó÷èâøèéñÿ ìàññèâ.
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
	//Äàí óêàçàòåëü: double **p = 0; Âûïîëíèòå ñëåäóþùèå çàäàíèÿ (ðåøåíèÿ ìîæíî îôîðìëÿòü âíóòðè ôóíêöèè main): 
	//*ñîçäàéòå êîíñòðóêöèþ, èçîáðàæåííóþ íà ðèñóíêå;
	//*âûâåäèòå ÷èñëî, óêàçàííîå â êâàäðàòèêå, íà ýêðàí;
	//*ïîñëå ýòîãî óäàëèòå âñå äèíàìè÷åñêèå îáúåêòû.
	std::cout << "task 3" << std::endl;

	double** p = 0;
	*(*(p = new double*) = new double) = 2;
	std::cout << **p << std::endl;
	
	delete* p;
	delete p;
	std::cout << std::endl;

	//task 4
	//Ââåñòè ìàññèâ, ñîñòîÿùèé èç 12 ýëåìåíòîâ äåéñòâèòåëüíîãî òèïà. 
	//Ðàñïîëîæèòü ýëåìåíòû â ïîðÿäêå óáûâàíèÿ. Îïðåäåëèòü êîëè÷åñòâî ïðîèñøåäøèõ ïðè ýòîì ïåðåñòàíîâîê.
	std::cout << "task 4" << std::endl;

	double arr4[12];
	RanDomiZe(arr4, 12);
	std::cout << std::endl;
	printArr(arr4, 12);


	BubbleSort(arr4, 12);//do the insertion sort
	std::cout << std::endl;

	//task 5
	// Ïåðåïèñàòü ýëåìåíòû îäíîìåðíîãî ìàññèâà â äðóãîé ìàññèâ òàêîãî æå ðàçìåðà ñëåäóþùèì îáðàçîì: 
	// ñíà÷àëà äîëæíû èäòè âñå îòðèöàòåëüíûå ýëåìåíòû èñõîäíîãî ìàññèâà, à çàòåì âñå îñòàëüíûå. 
	// Èñïîëüçîâàòü òîëüêî îäèí ïðîõîä ïî èñõîäíîìó ìàññèâó. 
	// Ñîõðàíèòü òîò ïîðÿäîê ñðåäè ïîëîæèòåëüíûõ è ñðåäè îòðèöàòåëüíûõ ýëåìåíòîâ â ðåçóëüòèðóþùåì ìàññèâå, 
	// êîòîðûé áûë â èñõîäíîì ìàññèâå. 
	// Ïðèìåíèòü äàííûé àëãîðèòì ê òðåì çàäàííûì ìàññèâàì.
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
	//Ââåñòè ìàññèâ, ñîñòîÿùèé èç 14 ýëåìåíòîâ äåéñòâèòåëüíîãî òèïà. 
	//Ïîìåíÿòü ìåñòàìè ïåðâóþ ïîëîâèíó ñî âòîðîé. Îïðåäåëèòü êîëè÷åñòâî ïðîèçâåäåííûõ ïðè ýòîì ïåðåñòàíîâîê.
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
	//Îïðåäåëèòü êîëè÷åñòâî ëîêàëüíûõ ìèíèìóìîâ â çàäàííîì ÷èñëîâîì	ìàññèâå. 
	//(Ëîêàëüíûé ìèíèìóì â ÷èñëîâîì ìàññèâå – ýòî ïîñëåäîâàòåëüíîñòü òðåõ ðÿäîì ñòîÿùèõ ÷èñåë, 
	//â êîòîðîé ñðåäíåå ÷èñëî ìåíüøå ñòîÿùèõ ñëåâà è ñïðàâà îò íåãî).
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

	//task 10
	//Ââåñòè äâà ìàññèâà äåéñòâèòåëüíûõ ÷èñåë. 
	//Îïðåäåëèòü ìàêñèìàëüíûå ýëåìåíòû â êàæäîì ìàññèâå è ïîìåíÿòü èõ ìåñòàìè
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
	//Â ìàòðèöå íàéòè ñòðîêè ñ ìàêñèìàëüíîé è ìèíèìàëüíîé ñóììàìè ýëåìåíòîâ
	std::cout << "task 12" << std::endl;


	srand(time(NULL)); // ñîçäàíèå ãåíåðàòîðà ñëó÷àéíûõ ÷èñåë. 
	int n12 = 0;
	std::cout << "Write down the length of matrix" << std::endl;
	std::cin >> n12; 
	int** a12 = new int* [n12]; // ìàññèâ óêàçàòåëåé
	for (int i = 0; i < n12; i++)
	{
		a12[i] = new int[n12]; // ýëåìåíòû
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


	// Óäàëåíèå ìàññèâà
	for (int i = 0; i < n12; i++)
	{
		delete[]a12[i];
	}
	delete[] a12;



	//task 15
	//Òðåóãîëüíèê Ïàñêàëÿ
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
