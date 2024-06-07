

#define MAX 10

typedef struct {
    int elements[MAX];
    int count;
} Set;

void initialize(Set *s);
void display(const Set *s);
void add(Set *s, int elem);
int contains(const Set *s, int elem);
int cardinality(const Set *s);
int isEmpty(const Set *s);
void getUnion(Set *result, const Set *s1, const Set *s2);
void intersection(Set *result, const Set *s1, const Set *s2);
void difference(Set *result, const Set *s1, const Set *s2);
int subset(const Set *s1, const Set *s2);
int disjoint(const Set *s1, const Set *s2);
int equal(const Set *s1, const Set *s2);
void menu();


