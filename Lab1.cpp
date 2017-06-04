#include "stdafx.h"
#include <iostream>	 
#include <fstream>
#include <cstring>
	
using namespace std;
	
int main()
{
	setlocale(LC_ALL, "rus");
	ifstream fileexample1,fileexample2;
	fileexample1.open("/filelaba/fileexample1.txt",ios::binary);
	fileexample2.open("/filelaba/fileexample2.txt",ios::binary);
	
	int sum1, sum2; //��������� ���-�� ����� � ����� ������
	sum1 = 0; 
        sum2 = 0;
	string str;
	while(!fileexample1.eof())
	{
            getline(fileexample1, str);
	    sum1++;
	}
	   
	fileexample1.clear();
	fileexample1.seekg(0,ios::beg);

	while(!fileexample2.eof())
	{
	    getline(fileexample2, str);
	    sum2++;
	}
	fileexample2.clear();
	fileexample2.seekg(0, ios::beg);
	
	if(sum1 != sum2) // C��������� ���-�� �����
	{
	    cout << "������� � ���-�� �����" << "\n";
	    cout << "� 1 ����� " << sum1 << " ������, � � 2 "<< sum2 << " ������" << "\n";
	}

	char string1[256], string2[256]; 
	int n = 0;
	while(!fileexample1.eof())
	{
		fileexample1.getline(string1, 256);
		fileexample2.getline(string2, 256);
	    n++;
	    if(strcmp(string1, string2) != 0)
	    {
	    	cout << n << " ������ ����������" << "\n";
	        cout << "   " << string1 << " - � ������ ����� \n";
	        cout << "   " << string2 << " - �� ������ �����\n";
	    }
	}
	return 0;
}