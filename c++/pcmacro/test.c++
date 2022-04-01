#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include<time.h>
#pragma warning (disable:4996)
#define BUFF_SIZE 1024
int main(void)
{
    char buff[BUFF_SIZE];
    FILE* fp;
   
    
    char temp[500]={""};
    /*2\">\"NUL | find /I /N \"notepad.exe\"*/
    int NUL = 0;
    for (int i = 0; ; i++)
    {
        ShellExecute(NULL, L"open", L"cmd.exe", L"/K tasklist /fi \"imagename eq notepad.exe\">D:\test\output.txt", L"C:\\", SW_SHOW);
       /* ShellExecute(NULL, L"open", L"cmd", L"/K tasklist | find \"imagename notepad.exe\" ", L"C:\\", SW_SHOW);*/
       /* fp = _popen("cmd", "r");
        if (NULL == fp)
        {
            perror("프로그램을 다시 실행시켜주세요");
            return 0;
        }
        */

       

        /*fscanf(fp,"%s", temp);
        */
       
       /* while (fgets(buff, BUFF_SIZE, fp))
        {
            printf("%s", buff);
        }*/
            

        


        break;
        
       /* L"tasklist" /FI "IMAGENAME eq notepad.exe" 2 > NUL | find / I / N "notepad.exe" > NUL

        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe", L"C:\\", SW_SHOW);

        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);*/



    }
 
}

