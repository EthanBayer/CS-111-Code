
#include <iostream>
#include "../header/modularexpo.hpp"

//Main Client Code
int main(void)
{
    int Encoding[15][7] = {
        {183, 129, 48, 165, 107, 48, 107},
        {37, 176, 61, 129, 107, 161, 82},
        {68, 60, 107, 161, 176, 82, 21},
        {165, 107, 165, 109, 176, 152, 60},
        {107, 176, 152, 107, 165, 109, 129},
        {107, 168, 68, 82, 152, 176, 152},
        {60, 107, 48, 152, 79, 107, 152},
        {68, 165, 109, 176, 152, 60, 107},
        {59, 68, 82, 21, 129, 107, 59},
        {176, 37, 37, 107, 109, 48, 52},
        {52, 129, 152, 107, 165, 68, 107},
        {75, 68, 45, 107, 165, 109, 129},
        {107, 82, 129, 21, 165, 107, 68},
        {161, 107, 165, 109, 129, 107, 79},
        {48, 75, 183, 71, 0, 0 , 0}
        };

    //Printing the Encodings
    std::cout << std::endl << "Encodings: " << std::endl;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Encoding[i][j] != 0)
            std::cout << Encoding[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //Assigning Decodings using Modular Exponentiation Function
    //Also Printing values
    int Decoding[15][7];
    std::cout << std::endl << "Decodings: " << std::endl;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Encoding[i][j] != 0)
            {
                Decoding[i][j] = modExpo(Encoding[i][j], 89, 187);
                std::cout << Decoding[i][j] << "     ";
            }
            else
            {
                Decoding[i][j] = 0;
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;


    //Message using assigned letters
    std::cout << "Message: " << std::endl;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            letterDecode(Decoding[i][j]);
        }
    }
    std::cout << std::endl;


}





//183    129     48    165    107     48    107
//37    176     61    129    107    161     82
//68     60    107    161    176     82     21
//165    107    165    109    176    152     60
//107    176    152    107    165    109    129
//107    168     68     82    152    176    152
//60    107     48    152     79    107    152
//68    165    109    176    152     60    107
//59     68     82     21    129    107     59
//176     37     37    107    109     48     52
//52    129    152    107    165     68    107
//75     68     45    107    165    109    129
//107     82    129     21    165    107     68
//161    107    165    109    129    107     79
//48     75    183     71