#include <iostream>

int main()
{
    int Height;
    int age;
    float total;
    float hargaRide = 0;
    int hargaPhotos = 3;
    char photos;



    std::cout << "input your height :" << std::endl;
    std::cin >> Height;

    if (Height > 120) {
        std::cout << "Can ride" << std::endl;
        std::cout << "input your age : " << std::endl;
        std::cin >> age;
        if (age < 12) {
            hargaRide = 5;
        } else if (age <= 12 || age <= 18) {
            hargaRide = 7;
        } else if (age >= 18 && age < 45) {
            hargaRide = 12;
        } else if (age >= 45 || age <= 55) {
            hargaRide = 0;
        }
        std::cout << "the bill is : " << hargaRide << std::endl;

        std::cout << "want photos ? " << std::endl;
        std::cin >> photos ;

        switch (photos) {
            case 'y':
                std::cout << "+ $3" << std::endl;
                total = hargaPhotos + hargaRide;
                std::cout << "the total bill : "  << total << std::endl;
            break;
            case 'n':
                total = hargaRide + 0;
                std::cout << "the total bill : " << total <<  std::endl;
            break;
        }
    } else {
        std::cout << "Can't ride" << std::endl;
    }


    return 0;
}
