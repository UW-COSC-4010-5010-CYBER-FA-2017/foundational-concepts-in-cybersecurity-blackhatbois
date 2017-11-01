In NonExample10.cpp, a simple addition calculation is made very complicated by creating a class that utilizes an array data structure. This increases the way the software can be exploited, especially since all fields in the class are public and thus editable via client code.

Example10.cpp shows a better version, where arrays are traded out for simple private variables. Less code is running, there are less methods in the Class, and the concept of least privilege turns off uneeded features. This code is much more minimized and secure.

makefile for good example: Princ10ExMake.mk
for bad example: Princ10NEMake.mk