#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "linked_list.c"
#include "tests.h"
#include "tests.c"

void run_example();

// Implements a singly linked list and doubly-linked list

int main(int argc, char* argv[]) {
  run_all_tests();
  // run_example();

  return EXIT_SUCCESS;
}

// void run_example() {
//
//}