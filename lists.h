#ifndef __LISTS__
#define __LISTS__
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

#endif
