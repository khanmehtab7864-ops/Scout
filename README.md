# PathScout

PathScout is a lightweight open-source command-line utility written in C++ for filesystem analysis. It helps developers and power users inspect directories, count files, analyze extensions, calculate directory sizes, and list files by size.

## Features

### File Statistics

* Count files in a directory
* Count files recursively through subdirectories

### Extension Analysis

* Count files by extension
* Recursive extension counting

### Directory Analysis

* Calculate total directory size

### File Size Listing

* List files from largest to smallest
* List files from smallest to largest
* Recursive largest-first listing
* Recursive smallest-first listing

### CLI Features

* Command-line interface
* `--help` command
* `--version` command

## Installation

### Build from Source

Clone the repository:

```bash
git clone https://github.com/khanmehtab7864-ops/PathScout.git
cd PathScout
```

Compile using your preferred compiler.

Example using g++:

```bash
g++ -std=c++17 *.cpp -o PathScout
```

## Usage

General format:

```bash
PathScout <Category> <Command> <Path>
```

Examples:

```bash
PathScout Analysis Count .
PathScout Analysis TreeCount .
PathScout Analysis DirSize .
PathScout Analysis ListDesc .
PathScout Analysis ListAsc .
```

### Available Commands

| Command      | Description                      |
| ------------ | -------------------------------- |
| Count        | Count files in directory         |
| TreeCount    | Count files recursively          |
| CountExt     | Count files by extension         |
| TreeCountExt | Recursive extension counting     |
| DirSize      | Calculate directory size         |
| ListDesc     | Largest to smallest files        |
| TreeListDesc | Recursive largest-first listing  |
| ListAsc      | Smallest to largest files        |
| TreeListAsc  | Recursive smallest-first listing |

### Flags

```bash
PathScout --help
PathScout --version
```

## Roadmap

### v0.1

* File analysis tools
* CLI workflow
* Help and version commands

### Planned

* Improved output formatting
* Additional analysis modules
* More filesystem utilities
* Better error handling

## License

This project is licensed under the MIT License.

## Author

Mehtab Khan

## Copyright

Copyright (c) 2026 Mehtab Khan

Released under the MIT License.

