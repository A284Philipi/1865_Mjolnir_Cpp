#include <iostream>
#include <string>

using namespace std;

int main()
{
    int casos, cont = 0, forca;
    string pessoa;
    cin >> casos;
    while (cont < casos){
        cin >> pessoa;
        cin >> forca;
        if (pessoa[0] == 'T' && pessoa[1] == 'h' && pessoa[2] == 'o' && pessoa[3] == 'r'){
            cout << "Y" <<endl;
        }else{
            cout << "N" <<endl;
        }
        cont++;
    }
    return 0;
}
