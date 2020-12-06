module;
#include <ranges>
#include <concepts>

import DefaultPrinter;

struct DefaultFormatter
{
    template<is_series S, is_printer T>
    void format(T t, S s)
    {
        while (!s.done())
        {
            t.print_element(s.next());
            t.print_separator();
        }
        t.print_eol();
    }
};