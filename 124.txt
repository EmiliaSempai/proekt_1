#include <iostream>



using namespace std;




int main() 
{
    int height;
    int width;
    char sym;
    cout << "Write symbol: ";
    cin >> sym;
    cout << "Write height: ";
    cin >> height;
    cout << "Write width: ";
    cin >> width;


    for (int j = 0; j < width; j++)
        cout << sym;
    cout << endl;

 
    for (int j = 0; j < height; j++) {
        for (int g = 0; g < width; g++) {
            if (g == 0 || g == width - 1)
                cout << sym; 
            cout << " ";
        }
        cout << endl;       
    }

    for (int j = 0; j < width; j++)
        cout << sym;
    cout << endl;
    
}




 