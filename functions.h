struct fruit {
  int price;
  char *name;
};

struct fruit createStruct(int p, char *n);
void printStruct(struct fruit *f);
void modifyStruct(struct fruit *f, int p, char *n);
