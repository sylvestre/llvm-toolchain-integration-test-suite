// Test the link against libclang-cppXX
//
// REQUIRES: clang
// RUN: %clangxx -lclang-cpp -v %s -o %t
// RUN: ldd %t 2>&1|grep -q libclang-cpp
// RUN: %t

#include "clang/Tooling/CommonOptionsParser.h"
#include "llvm/Support/CommandLine.h"

using namespace clang::tooling;

// Apply a custom category to all command-line options so that they are the
// only ones displayed.
static llvm::cl::OptionCategory MyToolCategory("my-tool options");

int main(int argc, const char **argv) {
  // CommonOptionsParser constructor will parse arguments and create a
  // CompilationDatabase.  In case of error it will terminate the program.
  CommonOptionsParser OptionsParser(argc, argv, MyToolCategory);

  // Use OptionsParser.getCompilations() and OptionsParser.getSourcePathList()
  // to retrieve CompilationDatabase and the list of input file paths.
}
