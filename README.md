### Install [CMake](http://cmake.org)

With homebrew (Mac): `brew install cmake`
With aptitude (Ubuntu): `sudo apt-get cmake`

Useful links:
* [CMake Manual](http://cmake.org/cmake/help/v2.8.9/cmake.html)
* [CMake Wiki](http://www.itk.org/Wiki/CMake)
* [CMake Mailing List](http://cmake.3232098.n2.nabble.com/)

### Install [CppUTest](http://cpputest.org)

With git: `git clone git://github.com/cpputest/cpputest.git && cd cpputest && make` 
With homebrew: `brew install cpputest`

Now, create an environment variable that points to it.  Add the following line to `.bash_profile` or similar: `export CPPUTEST_HOME=/path/to/cpputest`

### Build
```sh
$ mkdir build && cd build
$ cmake ..
$ make
```

### Run Tests
```sh
cd build && ./bin/RunAllTests
