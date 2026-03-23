#include <iostream>
#include <memory>

using namespace std;

struct Button {
    virtual ~Button() = default;
    virtual void paint() const = 0;
};

struct Checkbox {
    virtual ~Checkbox() = default;
    virtual void paint() const = 0;
};

struct GUIFactory {
    virtual ~GUIFactory() = default;
    virtual unique_ptr<Button> createButton() const = 0;
    virtual unique_ptr<Checkbox> createCheckbox() const = 0;
};

struct LightButton : Button {
    void paint() const override { cout << "Painting light button\n"; }
};

struct LightCheckbox : Checkbox {
    void paint() const override { cout << "Painting light checkbox\n"; }
};

struct DarkButton : Button {
    void paint() const override { cout << "Painting dark button\n"; }
};

struct DarkCheckbox : Checkbox {
    void paint() const override { cout << "Painting dark checkbox\n"; }
};

struct LightFactory : GUIFactory {
    unique_ptr<Button> createButton() const override { return make_unique<LightButton>(); }
    unique_ptr<Checkbox> createCheckbox() const override { return make_unique<LightCheckbox>(); }
};

struct DarkFactory : GUIFactory {
    unique_ptr<Button> createButton() const override { return make_unique<DarkButton>(); }
    unique_ptr<Checkbox> createCheckbox() const override { return make_unique<DarkCheckbox>(); }
};

void renderUI(const GUIFactory& factory) {
    auto button = factory.createButton();
    auto checkbox = factory.createCheckbox();
    button->paint();
    checkbox->paint();
}

int main() {
    LightFactory light;
    DarkFactory dark;

    cout << "Light theme:\n";
    renderUI(light);

    cout << "Dark theme:\n";
    renderUI(dark);
    return 0;
}
