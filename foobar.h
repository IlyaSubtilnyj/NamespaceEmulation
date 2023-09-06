#ifndef FOOBAR_H
#define FOOBAR_H

#if FOOBAR_NAMESPACE == FOOBAR_NAMESPACE_DISABLED
#include "fooM.h";
#include "Bar.h";
#else
struct _foobar_namespace {
    struct {
        void (*foo_module_function)();
    } fooM;
    void (*bar_single_function)();
};
#endif // FOOBAR_NAMESPACE == FOOBAR_NAMESPACE_DISABLED

#ifdef FOOBARIMPL
struct _foobar_namespace {
    struct {
        void (*foo_module_function)();
    } fooM;
    void (*bar_single_function)();
};
#else
extern struct _foobar_namespace mdlfoobar;
#endif // FOOBARIMPL

#endif