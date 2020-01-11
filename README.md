# Fibonacci_proj

Directory structure
-------------------

/src - Contains source files for generating fibonacci sequence  
/inc - Contains include files for supporting pre build lib and local source   
/lib - Contains prebuild library to support multi precision arithmetic library  

Building using cmake  
--------------------
mkdir build  
cd build  
cmake ../.  
make 

This will build with ittertive function enabled by default.  


Switching between recursive and Itterative
------------------------------------------
Recursive function enabled   
cmake ../. -DRECURSIVE=1  

Itterative function enabled   
cmake ../. -DRECURSIVE=0  

Executing the binary  

./fibonacci <count>  

Eg: ./fibonacci 10   
