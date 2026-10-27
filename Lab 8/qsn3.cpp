#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compress(double fileSize) {
    }
};

class TextCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        cout << "Original Text File Size: " << fileSize << endl;
        cout << "Compressed Text File Size: " << fileSize * 0.4 << endl;
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        cout << "Original Image File Size: " << fileSize << endl;
        cout << "Compressed Image File Size: " << fileSize * 0.7 << endl;
    }
};

int main() {

    TextCompressor t;
    ImageCompressor i;

    t.compress(42);
    i.compress(98);

    return 0;
}