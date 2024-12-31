void swap(int* pA, int* pB)
{
    if (nullptr == pA || nullptr == pB)
        return;

    int tmp = *pA;
    *pA = *pB;
    *pB = tmp;
}

unsigned char get_byte(unsigned int n, int a)
{
    unsigned char* pch= (unsigned char*) &n;
    return pch[a];
}

int array_as_int(char pch[])
{}

char* address_plus(char*, int)
{}