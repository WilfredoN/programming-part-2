# Programming Part 2

### This repository contain the laboratory work operations for Programming subject at KhPI

#### cmake vs make

- What is make?

  > make is build system which perform actions configured in file called Makefile

- What is Makefile?

  > Makefile is file which help to automate software building process.

- What is cmake?
  > cmake is a generator of build systems, so it can generate makefiles and it is cross-platform. Comparing to make, it uses CmakeLists.txt files to create needed Makefile etc.

##### Comparing

- makefile is depend on system, CmakeLists.txt can generate platform-related makefile.
- makefile is a problem in complex and multi-platform projects with a lot of compiler flags and dependencies, cmake is easier to use for large, cross-platform projects due to its high-level abstraction.
- makefile is more flexible at a low level, as it uses shell commands directly, but it harder to handle manually, cmake is easier to read but harder to understand what is going on under the hood because of abstraction.
- both support c++ as well, make due to direct shell, cmake due to built-in support for cpp projects, linking and modules.

#### Author: Nikita Afanasiev (capynq)
