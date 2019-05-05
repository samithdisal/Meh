#include <iostream>

#include "context.h"

int main(int argc, char** argv) {
    return Context::current()->run(&argc, &argv);
}