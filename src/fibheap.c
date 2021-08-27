#include <common/mem.h>
#include <pqueue/fibheap.h>

struct FibheapNode *yadsl_fibheapnode_Create(const yadsl_KeyType key,
                                             const yadsl_ValueType value) {
  struct FibheapNode *new_node =
      (struct FibheapNode *)_SaferMalloc(sizeof(struct FibheapNode));
  new_node->parent = new_node;
  new_node->child = new_node;
  new_node->left = new_node;
  new_node->right = new_node;
  new_node->degree = 0;
  new_node->lost = 0;
  new_node->key = key;
  new_node->value = value;

  return new_node;
}

void yadsl_fibheapnode_Delete(struct FibheapNode *node) { _SaferFree(node); }

struct Fibheap *yadsl_fibheap_Create() {
  struct Fibheap *new_heap =
      (struct Fibheap *)_SaferMalloc(sizeof(struct FibheapNode));
  new_heap->root = NULL;
  new_heap->min = NULL;

  return new_heap;
}

void yadsl_fibheap_Delete(struct Fibheap *heap) {
  _SaferFree(heap);
}

void _Cascade(struct Fibheap *);

yadsl_fibheap_Insert(struct Fibheap *heap, int key)