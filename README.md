# MineGame
This is my very first C++ game which is made with wxWidgets!
<hr/>
<h3>Building</h3>
1. In order to run this program you have to install <a href="https://www.wxwidgets.org/downloads/">wxWidgets</a>.
<br/>
When installing wxWidgets on Windows or OS X, it's always recommended building the library from source yourself!
<br/>
2. So, download the WINDOWS ZIP file and then open it with Microsoft VS and click Build > Batch Build...
<br/>
3. Create an Environment called WXWIN to that path...
<br/>
4. Open Microsift VS and create a C++ Windows Desktop Application project
<h4>Project Properties</h4>
   Open the Project Properties and...
5. Set the Configuration -> All Configurations, Platform -> Win32
<br/>
6. Set C/C++ > Precompiled Headers > Precompiled Header to "Not Using Precompiled Headers"
<br/>
7. Set C/C++ > General > Additional Include Directories to "$(WXWIN)\include; $(WXWIN)\include\msvc"
<br/>
8. Set Linker > Additional Liblary Directories to "$(WXWIN)\lib\vc_lib"
<br/>
9. Delete all the auto created files from the project and add the above uploaded files on GitHub!
<br/>
10. Build & Run the project and Enjoy the Game!
<br/>
<br/>
You can learn more about wxWidgets <a href="https://www.wxwidgets.org/about/">here</a>.
<br/>
<br/>
PS: 92% of users enjoyed this video game on WINDOWS. 
