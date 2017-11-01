In Example_7.cpp, abstraction is shown in several ways. All of the details of the 'calculator' class are hidden in a header file called myCalculator.h, reducing details to just a main function that takes advantage of this new class. Thus, the cpp is providing minimum information to anyone looking at the code or using the program. The class is decoupled from the source.

nonExample_7.cpp shows a failure of abstraction, as not only is the exampleCalculator class placed in the source cpp (showing a failure to hide clutter), but it utilizes a global variable in the cpp, making the class entirely dependent on the cpp to even function. It is not decoupled at all, but rather the opposite. With public variables, more than just the essential data is accesible to a reader of the code.

makefile for good example: Princ7ExMake.mk
for bad example: Princ7NEMake.mk