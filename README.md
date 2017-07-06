## Win10Transparency

![image](https://raw.githubusercontent.com/zzfly256/Win10Transparency/master/win10transparency.png)

![image](https://raw.githubusercontent.com/zzfly256/Win10Transparency/master/win10transparency2.png)

- 本工具可以使 Windows 10 的任务栏变得更加透明，美丽大方。
- 本工具利用了微软一个隐藏的开关，使用之后对您的计算机系统无任何副作用。

## 实验原理
在注册列表 HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced 处新建一个名为UseOLEDTaskbarTransparency的DWORD（32位）值，并设置为 1 .

## 番外
实现原理参考了 IT之家 的相关文章，纯属打发复习时的无聊时光而制作，方便自己下次重装系统不用手动去修改注册列表。由于是使用了注册列表实现，未修改explorer.exe等程序，也未注册新的dll，比 StartisBack 来的实在多了，还避免了 StartisBack 所造成的开始菜单假死等问题。若有啥问题欢迎与我取得进一步联系。