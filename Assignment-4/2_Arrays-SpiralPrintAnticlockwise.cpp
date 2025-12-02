#include <iostream>
using namespace std;

void init_2d(int a[][10], int n, int m) {
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>a[i][j];
		}
	}
}

void spiralPrint(int a[][10], int n, int m) {
	int sr = 0, sc = 0, er = n - 1, ec = m - 1;

	while (sr <= er and sc <= ec) {
		// 1. Print sr from [sc,ec]
		for (int row = sr; row <= er; ++row)
		{
			cout << a[row][sc]<< ", ";
		}
		sc++;

		// 2.  Print ec from [sr,er]
		for (int col = sc; col <= ec; ++col)
		{
			cout << a[er][col] << ", ";
		}
		er--;

		if (er > sr) {
			// 3. Print er from [ec,sc]
			for (int row = er; row >= sr; --row)
			{
				cout << a[row][ec] << ", ";
			}
			ec--;
		}

		// 4. Print sc from [er, sr]
		if (ec > sc) {
			for (int col = ec; col >= sc; --col)
			{
				cout << a[sr][col] << ", ";
			}
			sr++;
		}
        
	}
    cout<<"END";
	cout << endl;
}

int main() {
	int a[10][10], n, m;
	
	cin >> n >> m;

	init_2d(a, n, m);
	

	spiralPrint(a, n, m);



	return 0;
}