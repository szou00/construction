struct fruit {
  int price;
  char *name;
};

struct fruit createStruct();
void printStruct(struct fruit *f);
void modifyStruct(struct fruit *f, int p, char *n);
