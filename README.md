### Welcome to SoDA.

The aim of the SoDA (Software Development Analysis framework) library, toolset and program repository is to provide researchers and practitioners a framework with which various code coverage-based analyses can be performed in a unified environment, and which can be applied to large programs and test suites efficiently, and without limitations on programming language, granularity and coverage criteria.

The SoDA library contains the necessary data structures to efficiently store a coverage matrix for multiple test cases, the results of your test suite execution of multiple revisions and the changes in your program during multiple revisions. These data structures can be used to implement prioritization or other dependence analysis related algorithms. 

Visit our [wiki](https://github.com/sed-szeged/soda/wiki/) page to get more information about the project.

The library is released under LGPLv3 license.

### SoDA Data structures

This repository contains *only* the data structures of SoDA. For the full framework please visit its main reporitory: https://github.com/sed-szeged/soda

### TAM

We have created a graphical user interface, called Test suite Analysis and Manipulation, to provide easy access to the features of SoDA library. 
You can find its repository at: https://github.com/sed-szeged/tam

### What's next?

* Java + JUnit integration
 * Create a tool or toolset that can help in creating coverage and result binaries of programs written in Java and tested with JUnit. Make it as automatic as possible.
* Integrate the location of the code elements in the source code into the coverage binaries
 * To be able to connect the measurements with the source code.
 
Send us your improvement ideas or help us to implement these features. Open an issue to start a discussion or send your pull request.

### Getting started

#### Dependencies

* cmake 2.8.0 or higher
* Boost 1.49 or higher
* googletest (for unit tests)
 
#### Suported platforms

* Linux
* Mac OSX
* Windows (with MinGW 32bit)


#### Compile

```bash
mkdir build #Create a build directory next to the cloned repository.
cd build
cmake ../soda/src  # Pass -Dtest=ON argument if you want to execute the unit tests.
make
```

### SoDA Repository

We provide a [program repository](http://www.sed.inf.u-szeged.hu/soda) with tests and prepared analysis scripts. The repository contains the SoDA binary data files of various programs and already made measurements, which can be used for research purposes.

### Authors and Contributors

SoDA is created and maintained by the [Department of Software Engineering](http://www.sed.hu), [University of Szeged](http://www.u-szeged.hu). 

#### Contribution
If you would like to contribute to the project, create an issue at our GitHub page or send a pull request. Every contribution is welcome!

We are using [git flow](http://danielkummer.github.io/git-flow-cheatsheet/) to manage our repository.
The *origin/develop* is our main development branch. *origin/master* is always in production ready state.
