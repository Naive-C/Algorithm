#include <iostream>
void times_table(int &N)
{
    for(int i=1; i<=9; ++i)
        std::cout << N << " * " << i << " = " << N * i << std::endl;
}
