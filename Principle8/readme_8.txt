In Example8.cpp and it's accompanying header, Data hiding is shown by making the value fields of the Adder Class private. All Adder values cannot be manipulated by client code, since mutator methods are non existent. This effectively hides the data in the class.

nonExample8.cpp and it's accompanying header shows a failure of Data hiding, as any client code can forcibly change the Adder Class field values due to them being public. This allows all aspects of the object to be observed and accessed, ruining Data Hiding.

makefile for good example: Princ8ExMake.mk
for bad example: Princ8NEMake.mk