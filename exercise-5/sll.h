typedef struct sll_node{
    int val;
    struct sll_node * next;
} sll_node;

void sll_print(sll_node *head);
int sll_prepend(sll_node **head, int value);
int sll_insert(sll_node **head, int index, int value);
int sll_append(sll_node **head, int value);
void sll_free(sll_node **head);
int sll_delete(sll_node **head, int index);

sll_node *sll_get_node(sll_node *head, int index);
int sll_get_val(sll_node *head, int index);

int sll_search_index(sll_node * head, int value);
sll_node *sll_search_node(sll_node *head, int value);