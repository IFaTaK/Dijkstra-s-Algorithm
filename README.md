
# Dijkstra's Algorithm

## Description
This project is an implementation of Dijkstra's Algorithm in C++. It includes a visual representation of the graph `graph.png` file in the assets directory.

![Banner](assets/banner.png)
*Image above: AI-generated banner representing Dijkstra Algorithm*

## Prerequisites
- C++ Compiler
- CMake

## Building the Project

### For macOS/Linux:
1. Open a terminal.
2. Navigate to the project directory.
3. Create and navigate to the build directory:
   ```
   mkdir build && cd build
   ```
4. Run CMake and build the project:
   ```
   cmake .. && make
   ```

### For Windows:
1. Open Command Prompt or PowerShell.
2. Navigate to the project directory.
3. Create and navigate to the build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake and build the project:
   ```
   cmake ..
   cmake --build .
   ```

## Running the Program
- After building, run the executable found in the `exec` directory.

## License
This project is licensed under GNU General Public License.

## Acknowledgements
- Graph visualization in `assets/graph.png`.

## Project Structure
```
Dijkstra's Algorithm
├─ CMakeLists.txt
├─ LICENSE
├─ README.md
├─ main.cpp
├─ exec
│  └─ dijkstra
├─ assets
│  ├─ banner.png
│  └─ graph.png
└─ src
   ├─ dijkstra.cpp
   └─ dijkstra.h
```