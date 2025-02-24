#ifndef __SKIPLIST_H__
#define __SKIPLIST_H__

struct skiplist_node {
	struct skiplist_node *next;
	struct skiplist_node *prev;
	struct skiplist_node *forward;
};

struct skiplist {
	int levels;
	struct skiplist_node **headers;
}

struct skiplist *make_skiplist(const int max_levels);
void insert(struct skiplist *sl, struct skiplist_node *node);
void remove(struct skiplist *sl, struct skiplist_node *node);
void find(struct skiplist *sl, const void *key, int (*comp)(const void *, const void *));


struct skiplist *make_skiplist(const int max_levels)
{
	struct skiplist *s = NULL;
	s = (struct skiplist *) malloc(sizeof(struct skiplist));
	
	return s;
}

void insert(struct skiplist *sl, struct skiplist_node *node)
{
	
}

void remove()
{
}

#endif
