#include <iostream>
#include <string>
using namespace std;
class CloudStorage {
public:
 virtual void uploadFile(string fileName) = 0;
 virtual void downloadFile(string fileId) = 0;
 virtual ~CloudStorage() {}
};
class AmazonS3Storage : public CloudStorage {
public:
 void uploadFile(string fileName) override {
 cout << "Encrypting and streaming " << fileName << " to AWS S3 bucket." << endl;
 }
 void downloadFile(string fileId) override {
 cout << "Retrieving blob object [" << fileId << "] via AWS presigned URL." << endl;
 }
};
int main() {
 CloudStorage* storage = new AmazonS3Storage();
 storage->uploadFile("user_avatar.png");
 storage->downloadFile("obj_98231");
 delete storage;
 return 0;
}
