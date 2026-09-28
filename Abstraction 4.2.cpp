#include <iostream>
using namespace std;
class AudioDecoder {
public:
 virtual void decodePacketStream() = 0;
 virtual ~AudioDecoder() {}
};
class FLACDecoder : public AudioDecoder {
public:
 void decodePacketStream() override {
 cout << "Decompressing lossless 24-bit FLAC audio stream..." << endl;
 cout << "Outputting PCM raw sample buffers to DAC." << endl;
 }
};
int main() {
 AudioDecoder* playerDecoder = new FLACDecoder();
 playerDecoder->decodePacketStream();
 delete playerDecoder;
 return 0;
}
