#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrintWorryCount(const vector<bool>& is_nervous) {
    // подсчитываем количество элементов в векторе is_nervous, равных true
//    int worry_count = 0;
//    for (bool status : is_nervous) {
//        if (status) {
//            ++worry_count;
//        }
//    }
//    int worry_count = count(is_nervous.begin(), is_nervous.end(), false);
    
//    cout << worry_count << endl;
    cout << count(is_nervous.begin(), is_nervous.end(), true) << endl;
}

int main() {
    // не мен€йте содержимое функции main
    PrintWorryCount({true, true, false, true});
    return 0;
}
