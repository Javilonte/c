#include <iostream>
#include <string>
// No incluimos <cctype>

using namespace std;

int main() {
    
    // 1. Declarar y leer la palabra
    string s;
    cin >> s;

    // 2. Revisar si la cadena no está vacía (buena práctica)
    if (!s.empty()) {
        
        // 3. Comprobar si el primer carácter (s[0])
        //    es una letra minúscula
        if (s[0] >= 'a' && s[0] <= 'z') {
            
            // 4. Si es minúscula, restarle 32 para
            //    convertirla en mayúscula
            s[0] = s[0] - 32;
        }
    }

    // 5. Imprimir la palabra resultante
    // Si s[0] no era minúscula, simplemente se saltó el 'if'
    // y se imprime la palabra original (como "ApPLe").
    cout << s;

    return 0;
}