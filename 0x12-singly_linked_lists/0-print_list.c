#include "lists.h"
#include <stddef.h>

size_t print_list(const list_t *h)
{
    size_t nodes = 0;
    unsigned int i;  /* change this */

    while (h != NULL)
    {
        _putchar('[');
        if (!h->str)
        {
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
        }
        else
        {
            _putchar('0' + h->len / 10);
            _putchar('0' + h->len % 10);
            _putchar(']');
            _putchar(' ');
            for (i = 0; i < h->len; i++)
            {
                _putchar(h->str[i]);
            }
        }
        _putchar('\n');
        h = h->next;
        nodes++;
    }
    return nodes;
}

