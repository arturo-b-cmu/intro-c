This is an intro to c and basic notes to understand commands and to begin writing basic c programs


gcc is the compiler to be used

4 steps to creating an executable in c
- pre-processor
- compiling (cross-compilation)
- assembler
- linking


Basic ways to use gcc (you can have gcc to only perform any of the designated steps above)
- `gcc -E hello.c > hello.txt` creates the embedded library code (directive) into the src code that will be used by the compiler
- `gcc -S hello.c` will create the assembly code for the program written, you are telling it to assemble, but not to link itn
- `gcc -c hello.c` OR `gcc -c hello.s` either works so you can generate the machine code, you can open this with a binary editor
