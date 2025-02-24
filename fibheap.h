#ifndef __LIBBMK_FIBHEAP__
#define __LIBBMK_FIBHEAP__

struct bmk_fibheap_node {
	struct bmk_fibheap_node *parent;
	struct bmk_fibheap_node *left;
	struct bmk_fibheap_node *right;
};

struct bmk_fibheap_root {
	struct bmk_fibheap_node *node;
};

extern struct bmk_fibheap *bmk_fibheap_create(size_t n);
extern bmk_fibheap_delete(struct bmk_fibheap *);
extern bmk_fibheap_find_min(struct bmk_fibheap *);
extern bmk_fibheap_delete_min(struct bmk_fibheap *);
extern bmk_fibheap_decrease_key(struct bmk_fibheap *);
extern bmk_fibheap_meld();
extern bmk_fibheap_heapify();

#endif
