@echo off
echo Setting up environment for Qt usage...
set PATH=F:\Qt\Qt5.8.0\5.8\mingw53_32\bin;F:/Qt/Qt5.8.0/Tools/mingw530_32\bin;%PATH%

set /p str=Please input you exe name: 
echo your input :%str% 
windeployqt %str%

::PAUSE


