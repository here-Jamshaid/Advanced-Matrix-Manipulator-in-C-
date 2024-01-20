#include<iostream>
#include<fstream>

using namespace std;

void menu();
void sum(int** arr, int row, int col);
void product(int** arr, int row, int col);
void rowavg(int** arr, int row, int col);
void colavg(int** arr, int row, int col);
void avg(int** arr, int row, int col);
void rowsort(int** arr, int row, int col);
void colsort(int** arr, int row, int col);
int determinant(int** arr, int row, int col);
void inverse(int** arr, int row, int col);
void sc_add(int** arr, int row, int col);
void add(int** arr, int row, int col);
void sc_sub(int** arr, int row, int col);
void sub(int** arr, int row, int col);
void sc_mul(int** arr, int row, int col);
void mul(int** arr, int row, int col);
void sc_div(int** arr, int row, int col);
void transpose(int** arr, int row, int col);

int main()
{
	menu();
	return 0;
}

void menu()
{
	do
	{
		cout << "\t\t\t\t\tMATRIX MANIPULATOR\n\n";
		cout << "1. Sum of Matrix (sum of all values\n";
		cout << "2. Product of Matrix (product of all values\n";
		cout << "3. Row - wise Average\n";
		cout << "4. Column - wise Average\n";
		cout << "5. Average or whole Matrix\n";
		cout << "6. Row - wise sorting of Matrix\n";
		cout << "7. Column - wise sorting of Matrix\n";
		cout << "8. Scalar Matrix Addition\n";
		cout << "9. Addition of two Matrices\n";
		cout << "10. Scalar Matrix Subtraction\n";
		cout << "11. Subtraction of two Matrices\n";
		cout << "12. Scalar Matrix Multiplication\n";
		cout << "13. Multiplication of two Matrices\n";
		cout << "14. Scalar Matrix Division\n";
		cout << "15. Matrix transpose\n";
		cout << "16. Matrix determinant\n";
		cout << "17. Matrix Inverse\n";
		cout << endl << endl;
		int choice = 0;

		cout << "Enter choice of the task which you want to perform: ";
		cin >> choice;
		if (choice < 1 || choice > 17)
		{
			while (1)
			{
				cout << "Enter valid option: ";
				cin >> choice;
				if (choice >= 1 && choice <= 17)
					break;
			}
		}
		if (choice == 1)
		{
			cout << "Sum of Matrix (sum of all values)" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			sum(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 2)
		{
			cout << "Product of Matrix (Product of all values)" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			product(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 3)
		{
			cout << "Average of Matrix (ROW-WISE)" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			rowavg(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 4)
		{
			cout << "Average of Matrix (COL-WISE)" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			colavg(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 5)
		{
			cout << "Average of Matrix (All values)" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			avg(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 6)
		{
			cout << "ROW-WISE SORTING" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			rowsort(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 7)
		{
			cout << "COLUMN-WISE SORTING" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			colsort(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 8)
		{
			cout << "Scalar Matrix Addition of two matrices" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			sc_add(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 9)
		{
			cout << "Matrix Addition of two matrices" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			add(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 10)
		{
			cout << "Scalar Matrix Subtraction of two matrices" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			sc_sub(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 11)
		{
			cout << "Matrix Subtraction of two matrices" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			sub(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 12)
		{
			cout << "Scalar Matrix Multiplication of two matrices" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			sc_mul(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}


		if (choice == 13)
		{
			cout << "Matrix Multiplication of two matrices" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			mul(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 14)
		{
			cout << "Scalar Matrix Divsion of two matrices" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			sc_div(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 15)
		{
			cout << "Transpose of a Matrix" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			transpose(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}

		if (choice == 16)
		{
			cout << "Determinant of a Matrix" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			determinant(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}


		if (choice == 17)
		{
			cout << "Inverse of a Matrix" << endl;
			int row = 0, col = 0;
			cout << "Enter number of ROWS = ";
			cin >> row;
			cout << "Enter number of COLOUMNS = ";
			cin >> col;
			int** arr = new int* [row];
			for (int i = 0; i < row; i++)
				arr[i] = new int[col];
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					cout << "Value for Row " << i + 1 << " & Col " << j + 1 << ": ";
					cin >> arr[i][j];
				}
			}
			cout << "\nEntered Matrix  = " << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			inverse(arr, row, col);
			for (int i = 0; i < row; i++)
				delete[] arr[i];
			delete[] arr;
			arr = NULL;
		}
		int again = 0;
		cout << "Press 1 to start the program again\nPress 0 to exit\n";
		cin >> again;
		if (again == 1)
			continue;
		else if (again == 0)
			break;
	} while (1);
}

void sum(int** arr, int row, int col)
{
	int Sum = 0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			Sum = Sum + arr[i][j];

	cout << "Sum of all values of Matrix =" << Sum << endl << endl;
}

void product(int** arr, int row, int col)
{
	int x = 1;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			x *= arr[i][j];

	cout << "Product of all values of Matrix =" << x << endl << endl;
}

void rowavg(int** arr, int row, int col)
{
	float sum = 0;
	float row_avg = 0;

	for (int i = 0; i < row; i++)
	{
		sum = 0;
		for (int j = 0; j < col; j++)
			sum += arr[i][j];
		row_avg = sum / col;
		cout << "Row no. " << i + 1 << " Average = " << row_avg << endl;
	}
}

void colavg(int** arr, int row, int col)
{
	float sum_avg = 0;
	float col_avg = 0;
	for (int i = 0; i < col; i++)
	{
		sum_avg = 0;
		for (int j = 0; j < row; j++)
			sum_avg += arr[j][i];
		col_avg = sum_avg / row;
		cout << "Col no. " << i + 1 << " Average = " << col_avg << endl;

	}
}

void avg(int** arr, int row, int col)
{
	float sum_avg = 0;
	float whole_avg = 0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			sum_avg += arr[i][j];
	whole_avg = sum_avg / (row * col);
	cout << "Average sum of whole matrix = " << whole_avg << endl;
}

void rowsort(int** arr, int row, int col)
{
	int** ar = new int* [row];
	for (int i = 0; i < row; i++)
		ar[i] = new int[col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			ar[i][j] = arr[i][j];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < col - 1; k++)
			{
				if (ar[i][k] > ar[i][k + 1])
				{
					int temp = ar[i][k + 1];
					ar[i][k + 1] = ar[i][k];
					ar[i][k] = temp;
				}
			}
		}
	}
	cout << "Row - wise sorted matrix " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << ar[i][j];
		cout << endl;
	}
	for (int i = 0; i < row; i++)
		delete[]ar[i];
	delete[]ar;

}

void colsort(int** arr, int row, int col)
{
	int** ar = new int* [row];
	for (int i = 0; i < row; i++)
		ar[i] = new int[col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			ar[i][j] = arr[i][j];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < col - 1; k++)
			{
				if (ar[i][k] > ar[i][k + 1])
				{
					int temp = ar[i][k + 1];
					ar[i][k + 1] = ar[i][k];
					ar[i][k] = temp;
				}
			}
		}
	}

	cout << "Column - wise sorted matrix " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << ar[i][j];
		cout << endl;
	}
	for (int i = 0; i < row; i++)
		delete[]ar[i];
	delete[]ar;
}

void sc_add(int** arr, int row, int col)
{
	int** ar = new int* [row];
	for (int i = 0; i < row; i++)
		ar[i] = new int[col];
	int scalar = 0;
	if (row == col)
	{
		cout << "Scalar exists for " << row << " X " << col << " " << endl;
		cout << "Enter scalar matrix of Number =";
		cin >> scalar;
		for (int i = 0, step = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (i == step && j == step)
				{
					ar[i][j] = scalar;
					step++;
				}
				else
					ar[i][j] = 0;
			}
		}
		cout << "Desired scalar Matrix = " << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				cout << ar[i][j] << " ";
			cout << endl;
		}

		cout << "Addition of scalar matrix =\n ";
		int** a = new int* [row];
		for (int i = 0; i < row; i++)
			a[i] = new int[col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				a[i][j] = arr[i][j] + ar[i][j];
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < row; i++)
			delete[]a[i];
		delete[]a;
	}
	else
		cout << "Scalar doesn't exists for " << row << " X " << col << " " << endl;
	for (int i = 0; i < row; i++)
		delete[]ar[i];
	delete[]ar;

}

void add(int** arr, int row, int col)
{

	int** B = new int* [row];
	for (int i = 0; i < row; i++)
		B[i] = new int[col];
	int** C = new int* [row];
	for (int i = 0; i < row; i++)
		C[i] = new int[col];
	cout << "Enter Matrix B =" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Value for Row " << i + 1 << "  & Col " << j + 1 << ": ";
			cin >> B[i][j];
		}
	}
	cout << "\n Matrix B  = " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << B[i][j] << " ";
		cout << endl;
	}

	cout << "\nOutput Matrix  = " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			C[i][j] = arr[i][j] + B[i][j];
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
		delete[]B[i];
	delete[]B;
	for (int i = 0; i < row; i++)
		delete[]C[i];
	delete[]C;
}

void sc_sub(int** arr, int row, int col)
{
	int** ar = new int* [row];
	for (int i = 0; i < row; i++)
		ar[i] = new int[col];
	int scalar = 0;
	if (row == col)
	{
		cout << "Scalar exists for " << row << " X " << col << " " << endl;
		cout << "Enter scalar matrix of Number =";
		cin >> scalar;
		for (int i = 0, step = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (i == step && j == step)
				{
					ar[i][j] = scalar;
					step++;
				}
				else
					ar[i][j] = 0;
			}
		}
		cout << "Desired scalar Matrix = " << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				cout << ar[i][j] << " ";
			cout << endl;
		}

		cout << "Subtraction of scalar matrix =\n ";
		int** a = new int* [row];
		for (int i = 0; i < row; i++)
			a[i] = new int[col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				a[i][j] = arr[i][j] - ar[i][j];
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < row; i++)
			delete[]a[i];
		delete[]a;
	}
	else
		cout << "Scalar doesn't exists for " << row << " X " << col << " " << endl;
	for (int i = 0; i < row; i++)
		delete[]ar[i];
	delete[]ar;

}

void sub(int** arr, int row, int col)
{

	int** B = new int* [row];
	for (int i = 0; i < row; i++)
		B[i] = new int[col];
	int** C = new int* [row];
	for (int i = 0; i < row; i++)
		C[i] = new int[col];
	cout << "Enter Matrix B =" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Value for Row " << i + 1 << "  & Col " << j + 1 << ": ";
			cin >> B[i][j];
		}
	}
	cout << "\n Matrix B  = " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << B[i][j] << " ";
		cout << endl;
	}

	cout << "\nOutput Matrix  = " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			C[i][j] = arr[i][j] - B[i][j];
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
		delete[]B[i];
	delete[]B;
	for (int i = 0; i < row; i++)
		delete[]C[i];
	delete[]C;
}

void sc_mul(int** arr, int row, int col)
{
	int** ar = new int* [row];
	for (int i = 0; i < row; i++)
		ar[i] = new int[col];
	int scalar = 0;
	if (row == col)
	{
		cout << "Scalar exists for " << row << " X " << col << " " << endl;
		cout << "Enter scalar matrix of Number =";
		cin >> scalar;
		for (int i = 0, step = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (i == step && j == step)
				{
					ar[i][j] = scalar;
					step++;
				}
				else
					ar[i][j] = 0;
			}
		}
		cout << "Desired scalar Matrix = " << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				cout << ar[i][j] << " ";
			cout << endl;
		}

		cout << "Multiplication of scalar matrix =\n ";
		int** a = new int* [row];
		for (int i = 0; i < row; i++)
			a[i] = new int[col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				a[i][j] = arr[i][j] * ar[i][j];
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < row; i++)
			delete[]a[i];
		delete[]a;
	}
	else
		cout << "Scalar doesn't exists for " << row << " X " << col << " " << endl;
	for (int i = 0; i < row; i++)
		delete[]ar[i];
	delete[]ar;

}

void mul(int** arr, int row, int col)
{

	int** B = new int* [row];
	for (int i = 0; i < row; i++)
		B[i] = new int[col];
	int** C = new int* [row];
	for (int i = 0; i < row; i++)
		C[i] = new int[col];
	cout << "Enter Matrix B =" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Value for Row " << i + 1 << "  & Col " << j + 1 << ": ";
			cin >> B[i][j];
		}
	}
	cout << "\n Matrix B  = " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << B[i][j] << " ";
		cout << endl;
	}

	cout << "\nOutput Matrix  = " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			C[i][j] = arr[i][j] * B[i][j];
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
		delete[]B[i];
	delete[]B;
	for (int i = 0; i < row; i++)
		delete[]C[i];
	delete[]C;
}

void sc_div(int** arr, int row, int col)
{
	int** ar = new int* [row];
	for (int i = 0; i < row; i++)
		ar[i] = new int[col];
	int scalar = 0;
	if (row == col)
	{
		cout << "Scalar exists for " << row << " X " << col << " " << endl;
		cout << "Enter scalar matrix of Number =";
		cin >> scalar;
		for (int i = 0, step = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (i == step && j == step)
				{
					ar[i][j] = scalar;
					step++;
				}
				else
					ar[i][j] = 0;
			}
		}
		cout << "Desired scalar Matrix = " << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				cout << ar[i][j] << " ";
			cout << endl;
		}

		cout << "Division of scalar matrix =\n ";
		int** a = new int* [row];
		for (int i = 0; i < row; i++)
			a[i] = new int[col];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				a[i][j] = arr[i][j] / ar[i][j];
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < row; i++)
			delete[]a[i];
		delete[]a;
	}
	else
		cout << "Scalar doesn't exists for " << row << " X " << col << " " << endl;
	for (int i = 0; i < row; i++)
		delete[]ar[i];
	delete[]ar;

}

void transpose(int** arr, int row, int col)
{
	cout << "Transpose of the Matrix is: "<<endl;
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
			cout << arr[j][i] << " ";
		cout << endl;
	}
}

int determinant(int** arr, int row, int col)
{
	float determinant = 0;
	if (row == col)
	{
		if (row == 1)
		{
			determinant = arr[row][col];
			cout << "determinant of this 1 X 1 Matrix = " << determinant << endl;
			float Value = determinant;
			return Value;
		}

		if (row == 2)
		{
			determinant = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
			cout << "determinant of this 2 X 2 Matrix = " << determinant << endl;
			float Value = determinant;
			return Value;
		}

		if (row == 3)
		{
			int A1 = (arr[1][1] * arr[2][2]);
			int A2 = (arr[1][2] * arr[2][1]);

			int B1 = (arr[1][0] * arr[2][2]);
			int B2 = (arr[1][2] * arr[2][0]);

			int C1 = (arr[1][0] * arr[2][1]);
			int C2 = (arr[1][1] * arr[2][0]);

			determinant = arr[0][0] * (A1 - A2) - arr[0][1] * (B1 - B2) + arr[0][2] * (C1 - C2);
			cout << "determinant of this 3 X 3 Matrix = " << determinant << endl;
			float Value = determinant;
			return Value;
		}

		if (row > 3)
		{
			cout << "Complex determinants !" << endl;
			cout << "Determinants only of" << endl << "> 1X1" << endl << "> 2X2" << endl << "> 3X3 " << endl;
		}
	}
	else
		cout << "Determinants exists only for squarred matrices " << endl;
}


void inverse(int** arr, int row, int col)
{

	int** Inv = new int* [row];
	for (int i = 0; i < row; i++)
		Inv[i] = new int[col];
	int** Adj = new int* [row];
	for (int i = 0; i < row; i++)
		Adj[i] = new int[col];
	if (row == col && row == 2)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (i == 0 && j == 0)
					Adj[row - 1][col - 1] = arr[i][j];
				if (i == row - 1 && j == col - 1)
					Adj[0][0] = arr[i][j];
				if (i == 0 && j == 1)
					Adj[i][j] = (-1) * arr[i][j];
				if (i == 1 && j == 0)
					Adj[i][j] = (-1) * arr[i][j];
			}
		}
		cout << "Adjoint of given matrix :\n" << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				cout << Adj[i][j] << " ";
			cout << endl;
		}
		float Value = determinant(arr, row, col);
		if (Value != 0)
		{
			cout << "Inverse of given matrix :\n" << endl;
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					Inv[i][j] = Adj[i][j] / Value;
					cout << Inv[i][j] << " ";
				}
				cout << endl;
			}
		}
		else
			cout << "Inverse dont exists due to Det = 0 !" << endl;
	}
	else
		cout << "Complex inverse \nInverse available only for 2X2 matrix" << endl;
	for (int i = 0; i < row; i++)
		delete[]Inv[i];
	delete[]Inv;
	for (int i = 0; i < row; i++)
		delete[]Adj[i];
	delete[]Adj;
}

