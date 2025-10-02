#include<iostream>
#include<string>

void drawCat(){
  std::cout << " /\\\\_/\\\\ \n";
  std::cout << "( o.o )\n";
  std::cout << " > ^ < \n";
}

void drawRocket() {
    std::cout << "   /\\\\   \n";
    std::cout << "  /  \\\\  \n";
    std::cout << " /____\\\\ \n";
    std::cout << " |    | \n";
    std::cout << " |    | \n";
    std::cout << "/|/\\\\/\\\\|\\\\\n";
}

void printBanner(const std::string& title){

}

int main() {
    std::string pilotName = "Major Tom";
    int fuelPercentage = 88;
    double altitude_km = 45.6;
    char missionStatus = 'A'; // A = All-clear, F = Failure, P = Pending

    std::cout << "--- LAUNCH STATUS ---\n";
    std::cout << "Pilot: " << pilotName << "\n";
    std::cout << "Fuel: " << fuelPercentage << "%\n";
    std::cout << "Altitude: " << altitude_km << " km\n";
    std::cout << "Status: " << missionStatus << "\n\n";

    std::cout << "Visual confirmation:\n";
    drawRocket();

    return 0;
}