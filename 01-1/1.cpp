/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  C++ study homework
 *
 *        Version:  1.0
 *        Created:  2017/09/20 23시 12분 31초
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Enoch Jung 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0;

	cin >> n;
	for(int i=1; i<=n; i++)
	{
		int value;
		cout << i << "번째 정수 입력: ";
		cin >> value;
		sum += value;
	}
	cout << "합계: " << sum;

	return 0;
}
