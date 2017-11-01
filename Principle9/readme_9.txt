In Example9.cpp, simplicity is shown by the calculation of a factorial via a single call to a recursive function that is also in the main function. With almost zero clutter and easy input, the software is very understandable. 

nonExample9.cpp, the simplicity of the original has been completely demolished by the introduction of 3 more almost completely useless helper functions that are used in the recursive function to 'help' with the recursion call. By having to debug via tracing through all the unnecessary function calls, there is no simplicity with this operation, making it a lot more difficult for other coders to understand the code, nonetheless debug or add new functionality.

makefile for good example: Princ9ExMake.mk
for bad example: Princ9NEMake.mk