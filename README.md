# Snow*, a powerless programming language, certainly not meant to be learnt by you if you don't feel brave enough.

What is Snow* ?<br>
Snow* is:
  - a language born in hell of assembly languages.
  - itself a reason why you shouldn't learn it.
  - not finished yet. It has to be rewritten because of the source code loss.
<br><br>
**_If you still find yourself interested in learning this language, please contact the creator for further information._**


## How to build

```bash
# Build the compiler
g++ -Wall Common/*/*.cpp Common/*.cpp Compiler/*/*.cpp -o compiler -O3

# Build the vm
g++ -Wall Common/*/*.cpp Common/*.cpp Compiler/Lexer/*.cpp VM/*/*.cpp -o vm -O3

# build the debugger
g++ -Wall Common/*/*.cpp Common/*.cpp Compiler/Lexer/*.cpp Debugger/*/*.cpp -o debugger -O3
```

## How to run

```bash
$ ./compiler
Program usage: ./compiler {file.sssc}
	{file.sssc}: the path to the file to compile

$ ./vm
Program usage: ./vm {file.ssbc} [options]
	{file.ssbc}: the path to the file to compile
	[options]:
		--debug: starts the debugger
		
$ ./debugger 
# Launch it only when the VM is started and waiting for the debugger to start
```
