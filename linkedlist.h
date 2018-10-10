struct node { int i; struct node *next; };
void print_list(struct node *current);
struct node * insert_front(struct node *first, int new);
struct node * free_list(struct node *list);
