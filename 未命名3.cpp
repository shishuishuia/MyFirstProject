#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    ofstream dataFile;
    dataFile.open("10.in", ofstream::app);
    // ��TXT�ĵ���д������
    int n = rand();
	 
    dataFile<<n<<endl;
    for(int i = 1 ; i <= n; i ++)
    	dataFile << rand()%11 <<' ';
     
    dataFile.close();
}

