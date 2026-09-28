#include <iostream>
#include <string>
using namespace std;
class CryptoSigner {
public:
 virtual void generateSignature(string payload) = 0;
 virtual ~CryptoSigner() {}
};
class RSASigner : public CryptoSigner {
public:
 void generateSignature(string payload) override {
 cout << "Hashing input: " << payload << endl;
 cout << "Signing digest with RSA 4096-bit private key." << endl;
 }
};
int main() {
 CryptoSigner* signer = new RSASigner();
 signer->generateSignature("TxAmount=5000;Receiver=Umar");
 delete signer;
 return 0;
}
