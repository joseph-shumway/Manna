// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/Fuse.Drawing/1.4.0/WindingRules.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct WindingRules;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class WindingRules :3
// {
uClassType* WindingRules_typeof();
void WindingRules__AbsoluteGreaterOrEqualsTwo_fn(int* n, bool* __retval);
void WindingRules__Negative_fn(int* n, bool* __retval);
void WindingRules__NonZero_fn(int* n, bool* __retval);
void WindingRules__Odd_fn(int* n, bool* __retval);
void WindingRules__Positive_fn(int* n, bool* __retval);

struct WindingRules : uObject
{
    static bool AbsoluteGreaterOrEqualsTwo(int n);
    static bool Negative(int n);
    static bool NonZero(int n);
    static bool Odd(int n);
    static bool Positive(int n);
};
// }

}}} // ::g::Fuse::Drawing
