#ifndef MODULAREXPO_HPP
#define MODULAREXPO_HPP

//Function for Modular Exponentiation
//v is the value to exponentiate
//n is the power
//m is the modulus value
//v^n % m
int modExpo(int v, int n, int m)
{
    int x = 1;
    v = v % m;
    for(int i = 0; i < n; i++)
    {
        x = (x * v) % m;
    }

    return x;
}

//Function to print characters from particular integers
void letterDecode(int n)
{
    switch(n)
    {
        case 3:
            std::cout << "A";
            break;
        case 4:
            std::cout << "B";
            break;
        case 5:
            std::cout << "C";
            break;
        case 6:
            std::cout << "D";
            break;
        case 7:
            std::cout << "E";
            break;
        case 8:
            std::cout << "F";
            break;
        case 9:
            std::cout << "G";
            break;
        case 10:
            std::cout << "H";
            break;
        case 11:
            std::cout << "I";
            break;
        case 12:
            std::cout << "J";
            break;
        case 13:
            std::cout << "K";
            break;
        case 14:
            std::cout << "L";
            break;
        case 15:
            std::cout << "M";
            break;
        case 16:
            std::cout << "N";
            break;
        case 17:
            std::cout << "O";
            break;
        case 18:
            std::cout << "P";
            break;
        case 19:
            std::cout << "Q";
            break;
        case 20:
            std::cout << "R";
            break;
        case 21:
            std::cout << "S";
            break;
        case 22:
            std::cout << "T";
            break;
        case 23:
            std::cout << "U";
            break;
        case 24:
            std::cout << "V";
            break;
        case 25:
            std::cout << "W";
            break;
        case 26:
            std::cout << "X";
            break;
        case 27:
            std::cout << "Y";
            break;
        case 28:
            std::cout << "Z";
            break;
        case 29:
            std::cout << " ";
            break;
        case 30:
            std::cout << "\"";
            break;
        case 31:
            std::cout << ".";
            break;
        default:
            std::cout << "\n";
            break;
    }
}

#endif