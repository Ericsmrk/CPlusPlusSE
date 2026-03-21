#include <iostream>
#include <string>

using namespace std;

struct Report {
    string title;
    string summary;
    string recommendations;

    void print() const {
        cout << "Title: " << title << "\n"
             << "Summary: " << summary << "\n"
             << "Recommendations: " << recommendations << "\n";
    }
};

class ReportBuilder {
public:
    ReportBuilder& setTitle(const string& value) {
        report_.title = value;
        return *this;
    }

    ReportBuilder& setSummary(const string& value) {
        report_.summary = value;
        return *this;
    }

    ReportBuilder& setRecommendations(const string& value) {
        report_.recommendations = value;
        return *this;
    }

    Report build() const {
        return report_;
    }

private:
    Report report_;
};

int main() {
    Report report = ReportBuilder()
        .setTitle("Property Risk Report")
        .setSummary("Moderate vegetation density near structure.")
        .setRecommendations("Trim low branches and remove dead material.")
        .build();

    report.print();
    return 0;
}
