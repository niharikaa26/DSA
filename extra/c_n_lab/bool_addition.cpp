Integer& Integer::operator+=(const Integer& rhs)
{  

    Integer sum = 0; //when this variable is created, it initializes a boolean vector sum = {0}

    int carry = 0;

    for (int i = 0; i < bit.size(); i++)
    {
        switch(bit[i] + rhs.bit[i] + carry)
        {
        case 0: sum.bit.push_back(0); carry = 0; break;
        case 1: sum.bit.push_back(1); carry = 0; break;
        case 2: sum.bit.push_back(0); carry = 1; break;
        case 3: sum.bit.push_back(1); carry = 1; break;
        }
    }
}