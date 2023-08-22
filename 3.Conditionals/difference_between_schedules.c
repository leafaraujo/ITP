#include <stdio.h>

int main(){

    int h1, h2, h_final, m1, m2, total, m_final, total_1, total_2;
    scanf("%d %d\n", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    h1 *= 60;
    h2 *= 60;
    total_1 = h1 + m1;
    total_2 = h2 + m2;
    total = 0;
    
    if(h1 == h2)
    {
        h_final = 0;
        m_final = m2 - m1;
    }
    else if (h1 < h2)
    {
        total = total_2 - total_1;
        h_final = total / 60;
        m_final = total % 60;
    }
    else
    {
        total = (total_2 + (24 * 60)) - total_1;
        h_final = total / 60;
        m_final = total % 60;
    }
    
    printf("%dh%dmin", h_final, m_final);

    return 0;
}
