//This will automatically start performing clicks on execution

#define _WIN32_WINNT 0x500
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <WinUser.h>


void mouseLeftClick ()
{
     INPUT Input = {0};
     
     // left down
     Input.type = INPUT_MOUSE;
     Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
     ::SendInput(1,&Input,sizeof(INPUT));
     
     // left up
     ::ZeroMemory(&Input,sizeof(INPUT));
     Input.type = INPUT_MOUSE;
     Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
     ::SendInput(1,&Input,sizeof(INPUT));
}

using namespace std;

int main()
{
    POINT mouse;
    GetCursorPos(&mouse);
    while(true){
            Sleep(20);
            mouse_event(MOUSEEVENTF_LEFTDOWN,mouse.x,mouse.y,0,0);
            mouse_event(MOUSEEVENTF_LEFTUP,mouse.x,mouse.y,0,0);
            //if (getch()=='s')break;

	    printf("click");
        }
    return 0;
}
