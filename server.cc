#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/strings/str_format.h"

int main(int argc, char** argv) {
  absl::ParseCommandLine(argc, argv);
  return 0;
}