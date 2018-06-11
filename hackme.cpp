#include <vector>

class Hasher {
    int seed_;
    Hasher(int seed) : seed_(seed) {}
    int hash(string word) {
        unsigned long hash = 0;
        for (size_t i = 0; i < word.length(); i++) {
            hash = (hash * seed) + word[i];
        }
        return hash % 123;
    }
}

bool test(const Hasher& h, const string& s) {
    return h.hash(s) == 69;
}

int main() {
    int seed;
    string s;

    cin >> seed;
    cin >> s;

    Hasher h(seed)

    if (test(h, s)) {
        cout << "oooh yes" << endl;
    } else {
        cout << ":(" << endl;
    }
}
