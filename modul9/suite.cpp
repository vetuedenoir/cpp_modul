#include <iostream>
#include <cmath>

int main()
{
    long long unsigned	np = 0;
    long long unsigned	nf = 2;
    long long unsigned	ns = 0;
	long long unsigned	k = 2;
    
    for (int i = 1; i <= 34; ++i)
    {
		k *= 2;
	std::cout << "groupe numeros " << i << " de taille " << nf << std::endl;
        std::cout << "recherche nums " << i << " de taille " << k - 1 << std::endl << std::endl;

        ns = np * 2 + nf;
        np = nf;
        nf = ns;
    }

    return 0;
}
