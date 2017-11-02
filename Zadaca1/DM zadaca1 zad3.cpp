#include <iostream>

using std::cout;
using std::endl;
using std::string;

string Desifruj(string sif, string desif=""){
    for(int i = 0; i < sif.size(); i++)
        desif += ((-25 + 7*(int)(sif[i] - '\0')) % 26 + 65) - '\0';
    return desif;
}

int main(){

    cout << Desifruj("ROISTGXLYWYXGWYXOSYLODGXGISYLOJYSAKYSABDGJNYTGRABLA") << endl;

}
