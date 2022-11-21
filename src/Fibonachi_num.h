#pragma once

template < unsigned num_Fibonachi > struct Fibonachi_payment
{
    static const unsigned value = Fibonachi_payment<num_Fibonachi - 1>::value + Fibonachi_payment<num_Fibonachi - 2>::value;
};

template <> struct Fibonachi_payment <0>
{
    static const unsigned value = 0;
};

template <> struct Fibonachi_payment <1>
{
    static const unsigned value = 1;
};

