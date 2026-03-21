#include <iostream>
#include <string>

struct Report {
    std::string title;
    std::string summary;
    std::string recommendations;

    void print() const {
        std::cout << "Title: " << title << "\n"
                  << "Summary: " << summary << "\n"
                  << "Recommendations: " << recommendations << "\n";
    }
};

class ReportBuilder {
public:
    ReportBuilder& setTitle(const std::string& value) {
        report_.title = value;
        return *this;
    }

    ReportBuilder& setSummary(const std::string& value) {
        report_.summary = value;
        return *this;
    }

    ReportBuilder& setRecommendations(const std::string& value) {
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
