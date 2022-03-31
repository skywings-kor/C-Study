#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include<time.h>
int main(void)
{
    for (int i = 0; ; i++)
    {
        /*ShellExecute(NULL, L"open", L"cmd", L"/K tasklist /fi \"imagename eq notepad.exe\" ", L"C:\\", SW_SHOW);*/
        ShellExecute(NULL, L"open", L"cmd", L"/K tasklist | find \"imagename notepad.exe\" ", L"C:\\", SW_SHOW);
        
        if ("%ERRORLEVEL%"=="1")
        {
            printf("hello");
        }
        break;
        
       /* L"tasklist" /FI "IMAGENAME eq notepad.exe" 2 > NUL | find / I / N "notepad.exe" > NUL

        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im xmrig.exe /im t-rex.exe /im MSIAfterburner.exe", L"C:\\", SW_SHOW);

        ShellExecute(NULL, L"open", L"cmd", L"/K taskkill /f /im cmd.exe", L"C:\\", SW_SHOW);*/



    }
}

