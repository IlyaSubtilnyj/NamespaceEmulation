#define FOOBARIMPL
#include "foobar.h"
#undef FOOBARIMPL

struct _foobar_namespace mdlfoobar = {
    .foo = {
        .create = foobar_create_foo,
        .print = foobar_print_foo
    },
    .bar_copy = foobar_copy_bar
};
