#include <iostream>
#include <cstdio>
#include <windows.h>
#include <io.h>
using namespace std;

int main()
{
    system("title Win10 Transparency");
    system("color f0&&mode con cols=75 lines=20");
    cout << " 欢迎使用 Win10Transparency" <<endl;
    cout << " --------------------------------------------" << endl<<endl;
    cout << " 本工具可以使 Windows 10 的任务栏变得更加透明，美丽大方。" <<endl;
    cout << " 本工具利用了微软一个隐藏的开关，使用之后对您的计算机系统无任何副作用。" <<endl<<endl;
    cout <<endl << " 请按下任意键开始操作 " << endl;
    getchar();

    cout << " 操作开始 " << endl;
    cout <<endl << " 1) 正在生成注册列表文件 " << endl;
    FILE *fp;
    if((fp=fopen("output.reg","w"))==NULL)
    {
        system("color fc");
        cout << " 1) 生成失败，请检查是否使用管理员权限运行 " << endl;
        getchar();
    }
    else
    {
        fprintf(fp,"%s","Windows Registry Editor Version 5.00\n\n");
        fprintf(fp,"%s","[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced]\n");
        fprintf(fp,"%s","\"UseOLEDTaskbarTransparency\"=dword:00000001");
        fclose(fp);
        cout << " 1) 生成注册列表文件成功 " << endl;
    }
    Sleep(1000);
    cout << " 2) 导入Windows注册列表    "<< endl;
    Sleep(1000);
    system("regedit.exe /s output.reg");
    cout << " 3) 清理工具缓存 " << endl;
    system("del output.reg");
    Sleep(1000);
    cout << " 4) 重启 explorer.exe 进程 " << endl;
    system("start taskkill /im explorer.exe /f");
    Sleep(1500);
    system("start c:\\windows\\explorer.exe");
    cout <<endl<< " 操作完毕，尽请享用。\n by Rytia" << endl;
    getchar();
    return 0;
}
