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
    // 朝TXT文档中写入数据
    int n = rand();
	 
    dataFile<<n<<endl;
    for(int i = 1 ; i <= n; i ++)
    	dataFile << rand()%11 <<' ';
     
    dataFile.close();
}

