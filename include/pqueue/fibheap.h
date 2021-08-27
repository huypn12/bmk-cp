#include <common/kv.h>

struct FibheapNode {
  struct FibheapNode *parent;
  struct FibheapNode *left;
  struct FibheapNode *right;
  struct FibheapNode *child;
  yadsl_KeyType key;
  yadsl_ValueType value;
  unsigned int degree;
  char lost;
};

struct FibheapNode *yadsl_fibheapnode_Create(const yadsl_KeyType key, const yadsl_ValueType value);
void yadsl_fibheapnode_Delete(struct FibheapNode *);

struct Fibheap {
  struct FibheapNode *root;
  struct FibheapNode *min;
};

extern struct Fibheap *yadsl_fibheap_Create();
extern void yadsl_fibheap_Delete(struct Fibheap *);
extern void yadsl_fibheap_Insert(struct Fibheap *, yadsl_KeyType k, yadsl_ValueType v);
extern void yadsl_fibheap_ExtractMin(struct Fibheap *);
extern void yadsl_fibheap_DecreaseKey(struct Fibheap *);
