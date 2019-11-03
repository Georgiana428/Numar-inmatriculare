#include <iostream>

using namespace std;

int main()
{
    char alfabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0' };
for(int m=10; m<=99; m++)
    for(int i = 0; i <= 25; i++) {
        for(int j = 0; j <= 25; j++) {
            for(int k = 0; k <= 25; k++) {
                cout<<"BH"<<" "<<m<<" "<<alfabet[i] << alfabet[j] << alfabet[k] << endl;
            }
        }
    }

    return 0;
}
