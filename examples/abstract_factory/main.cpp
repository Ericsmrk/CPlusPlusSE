#include <iostream>
#include <memory>

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
    virtual std::unique_ptr<Button> createButton() const = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox() const = 0;
};

struct LightButton : Button {
    void paint() const override { std::cout << "Painting light button\n"; }
};

struct LightCheckbox : Checkbox {
    void paint() const override { std::cout << "Painting light checkbox\n"; }
};

struct DarkButton : Button {
    void paint() const override { std::cout << "Painting dark button\n"; }
};

struct DarkCheckbox : Checkbox {
    void paint() const override { std::cout << "Painting dark checkbox\n"; }
};

struct LightFactory : GUIFactory {
    std::unique_ptr<Button> createButton() const override { return std::make_unique<LightButton>(); }
    std::unique_ptr<Checkbox> createCheckbox() const override { return std::make_unique<LightCheckbox>(); }
};

struct DarkFactory : GUIFactory {
    std::unique_ptr<Button> createButton() const override { return std::make_unique<DarkButton>(); }
    std::unique_ptr<Checkbox> createCheckbox() const override { return std::make_unique<DarkCheckbox>(); }
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

    std::cout << "Light theme:\n";
    renderUI(light);

    std::cout << "Dark theme:\n";
    renderUI(dark);
    return 0;
}
