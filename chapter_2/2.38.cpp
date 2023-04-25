int main()
{
    int i = 42, &r1 = i;

    // 此时一样
    auto b1 = i;
    decltype(i) b2 = i;

    // 此时不一样
    auto c1 = r1;
    decltype(r1) c2 = r1;

    return 0;
}