#include <iostream>
#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
	time_t t;
    char date[35];
	while(1)
 	{
       t = time(NULL);
	   strcpy(date,ctime(&t));
	   int len = strlen(date);
	   date[len-1] = 0;
	   printf("\r%s",date);
	   Sleep(500);
	}
	return 0;
 }
