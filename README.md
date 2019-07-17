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
mkdir build; cd build
cmake .. && make
```

## How to run

```bash
$ ./build/src/Compiler/SnowStarCompiler
Program usage: ./compiler {file.sssc}
	{file.sssc}: the path to the file to compile

$ ./build/src/VM/SnowStarVM
Program usage: ./vm {file.ssbc} [options]
	{file.ssbc}: the path to the file to compile
	[options]:
		--debug: starts the debugger
		
$ ./build/src/Debugger/SnowStarDebugger
# Launch it only when the VM is started and waiting for the debugger to start
```
