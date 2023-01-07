# Building game

```
# Create a build directory
mkdir build
cd build

# Run CMake to generate the build files
cmake ..

# Build the game
cmake --build .
```

# Execution

```
cd build
./MyProject
```

# Installing raylib

```

brew install raylib

# your path(brew info raylib)
export CMAKE_PREFIX_PATH="your_raylib_path"

# update c_cpp_properties > includePath
"/opt/homebrew/Cellar/raylib/4.2.0/include" to "your_path/include"
```
