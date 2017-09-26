#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char a[10] = "";

	strlen("aaa");
	strcat(a, "clear");
	strcpy(a, "new");
	
	if(strcmp(a, "new") == 0)
		cout << "same" << endl;

	return 0;
}
