EasyX Framework
=====

Thank you for using EasyX Framework for iOS. This guide will help you get started.

[*Learn more.*] [easy-x]

EasyX needs to support more than 4 iOS

###The Security Framework

This is the framework for trustworthy.Because he has already been applied to many apple store              products. And weare constantly grinding.
  
###Powerful Technology

EX is not only a UI engine, each link will also take him to the client productproduction

###Plentiful Interfaces

We not only the common controller, but also to take into account all kinds of UI control in detail, such as in the status bar hidden for framework adjustment,similar to many.
  
###MVC
Application of the MVC module development framework,Also pushing for developers to design, application frameworks come very naturally choice
  
  
###Plentiful Tools
Includes a plurality of third party tools and many tools, they solve the mostcomplex problem
  
  
###Local Document
Bilingual in Chinese and English documents, (now launched separate Chinesedocument), which greatly saves the communication cost
  
To add EasyX to your project
=====
This is very simple, and developers need to support the following API.
The compressed package EasyX.framework drag and drop your files in the directory.

![SDK](http://www.easy-x.cn/images/84F147F5-597D-430A-9C2A-1F1A34AC6416.png)

Click Finish

![SDK](http://www.easy-x.cn/images/F23358CB-40E7-4254-BBC4-99F805E77E97.png)

EasyX a custom C class, for the normal operation of,This requires configuration of an additional linker flag in order for the categories to be loaded at runtime.To your Build Settings Other Linker Flags add -all_load –ObjC

![SDK](http://www.easy-x.cn/images/AF36902B-F0B6-47B4-9365-18C9921DD277.png)


The framework header file settings.
The EasyX.framework file in the headers drag and drop here.
Search Paths->Framework Search  

![SDK](http://www.easy-x.cn/images/CA1CFED9-AC16-4DEB-9C67-231F5080D444.png)


Setting debug mode
=====

![SDK](http://www.easy-x.cn/images/EE93CB1A-9E1F-4A53-95E2-C18798EB6B37.png)
Increase the Debugging Form field in the EsayX project of info.plist, the corresponding bool value, YES is open debug state

Add a document
=====
![SDK](http://www.easy-x.cn/images/EE93CB1A-9E1F-4A53-95E2-C18798EB6B37.png)
Compressed package dk.infinite-loop.Easy-X-FrameWork.docset is added to the docset file

![SDK](http://www.easy-x.cn/images/C4FAB052-B0B0-40CD-92E5-674A16DF6C32.png)
Restart IDE, you can find Easy-X FrameWork in the organizer documentation.


把EX加入你的工程
=====

这非常简单，需要开发者支持如下API
将压缩包中的EasyX.framework拖拽到你的文件目录中去


![SDK](http://www.easy-x.cn/images/84F147F5-597D-430A-9C2A-1F1A34AC6416.png)

单击Finish

![SDK](http://www.easy-x.cn/images/F23358CB-40E7-4254-BBC4-99F805E77E97.png)

EasyX 自定义了C类别，为了正常运行，这要求配置另外一个连接器。到你的Build Settings中找到Other Linker Flags 添加 -all_load –ObjC

![SDK](http://www.easy-x.cn/images/AF36902B-F0B6-47B4-9365-18C9921DD277.png)


如果这时候编译代码出现找不到头文件的错误，请找到Search  Paths目录，Framework Search  Paths加入framework的headers的路径，可以通过将EasyX.framework文件中的headers拖拽的这里完成。 

![SDK](http://www.easy-x.cn/images/CA1CFED9-AC16-4DEB-9C67-231F5080D444.png)


设置debug状态
=====
EX提供了Debug状态，在打开情况下，屏幕上会出现一个可以浮动的按钮，当单击这个按钮时，屏幕会浮动出Debug窗口，这里面保存了相关您的App的行为轨迹，用图片的方式顺序展现，其中穿插了DLog(...)输出的后台数据。（Dlog(…)是EX用来替代NSLog(…)的，它打印了类名和方法名）
![SDK](http://www.easy-x.cn/images/EE93CB1A-9E1F-4A53-95E2-C18798EB6B37.png)
在工程的info.plist中增加Debugging Form EsayX字段，对应bool值，YES是打开debug状态

添加API文档
=====
![SDK](http://www.easy-x.cn/images/EE93CB1A-9E1F-4A53-95E2-C18798EB6B37.png)
压缩包中的dk.infinite-loop.Easy-X-FrameWork.docset加入到 docset文件中

![SDK](http://www.easy-x.cn/images/C4FAB052-B0B0-40CD-92E5-674A16DF6C32.png)
重新启动IDE，就可以在organizer 的documentation中找到Easy-X FrameWork了

[easy-x]: http://www.easy-x.cn

    