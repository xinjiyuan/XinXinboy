#include <iostream>
#include <stdio.h>
#include <string>

typedef int P();
typedef void Q(int *p, const std::string& s1, const std::string& s2, size_t size, bool is_true);

//typedef 可以理解为重新定义

class X
{
private:
    /* data */
public:
    P(eat_shit); // 等于 int eat_shit();
    Q(bull_shit); // 等于 void bull_shit(int *p, const std::string& s1, const std::string& s2, size_t size, bool is_true)
};

int main()
{
    X *xx;
    printf("shit ret: %d\n", xx->eat_shit());
    int a[] = {1,3,4,5,7};
    xx->bull_shit(a, "foo", "bar", sizeof(a)/sizeof(int), true);
}

int X::eat_shit()
{
    return 999;
}

void X::bull_shit(int *p, const std::string& s1, const std::string& s2, size_t size, bool is_true)
{
    std::cout << "s1: " << s1 << ", s2: " << s2 << ", size: " << size << std::endl;
    printf("elems: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d %s", *p++, (i==size-1) ? "" : ",");
    }
    printf("\n");
    
}