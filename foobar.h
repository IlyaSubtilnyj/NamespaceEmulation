#ifndef FOOBAR_H
#define FOOBAR_H

struct _foobar_namespace {
    struct {
        void (*create)();
        void (*print)();
    } foo;
    void (*bar_copy)();
};

#if FOOBAR_NAMESPACE == FOOBAR_NAMESPACE_DISABLED
#include "mdlfoo.h";
#include "bar.h";
#else
extern struct _foobar_namespace mdlfoobar;
#endif // FOOBARIMPL

#endif