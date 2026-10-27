#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic Scanner Detected: " << threats << " threats" << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        double remaining = threats * 0.1;

        cout << "Advanced Scanner Detected: " << threats << " threats" << endl;
        cout << "Threats Remaining: " << remaining << endl;
    }
};

int main() {
 
    BasicScanner b;
    AdvancedScanner a;

    b.scan(500);
    a.scan(500);

    return 0;
}