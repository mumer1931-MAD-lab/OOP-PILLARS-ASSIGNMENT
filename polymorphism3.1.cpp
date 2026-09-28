#include <iostream>
using namespace std;
class DocumentExporter {
public:
 virtual void exportData() {
 cout << "Exporting generic plaintext format." << endl;
 }
 virtual ~DocumentExporter() {}
};
class PDFExporter : public DocumentExporter {
public:
 void exportData() override {
 cout << "Exporting file as formatted Adobe PDF with vector fonts." << endl;
 }
};
class CSVExporter : public DocumentExporter {
public:
 void exportData() override {
 cout << "Exporting tabular records as comma-separated CSV." << endl;
 }
};
int main() {
 DocumentExporter* exporter = new PDFExporter();
 exporter->exportData();
 delete exporter;
 exporter = new CSVExporter();
 exporter->exportData();
 delete exporter;
 return 0;
}
