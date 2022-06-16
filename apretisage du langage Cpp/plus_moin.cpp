
#include <iostream>
#include <string>
#include <ctime>

using namespace std;


int func()
{
    bool play = true;
    string stri = "";
    while (play)
    {
        std::srand(time(nullptr));
        int max_trie = 10;
        int nombre_mister = std::rand() % 100;
        int reponce = 0;
        for (int i = 0; i < max_trie; i++)
        {
            std::cout << "doner un chifre entre 0 et 100" << std::endl;
            std::cin >> reponce;
            std::cin.ignore();
            if (reponce == nombre_mister)
            {
                std::cout << "bien jouer" << std::endl;
                break;
            }
            if (reponce < nombre_mister)
            {
                std::cout << "c'est +" << std::endl;
            }
            else if (reponce > nombre_mister)
            {
                std::cout << "c'est -" << std::endl;
            }
            if (i == max_trie - 1)
            {
                std::cout << "perdue" << std::endl;
            }
        }
        std::cout << "voulez vous rejouer ? (Y / N)" << std::endl;
        std::cin >> stri;
        std::cin.ignore();
        play = stri == "Y" ? true : false;
    }
    return 1;
}